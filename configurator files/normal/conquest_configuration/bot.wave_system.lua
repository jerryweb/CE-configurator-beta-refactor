require([[/script/multiplayer/bot.data]])
require([[/conquest_configuration/bot.conquest_configuration]])

-- This variable controls whether units will spawn all at once for 15 seconds, creating a massive wave, every x seconds
typhoonWaveMode = false
nextTyphoonWaveTime = 0
forceLoadEarlyDivisions = false

-- Wave offset is used to set how much extra time the first wave will last in since the wave is loaded automatically
gameStartTime = os.clock()

-- This is used to add the offset ONLY to the first wave
initialWave = true

defaultSpawnCooldownTime = {}

currentWaveMaxUnitCount = 0

local unitsForWave = {}

function resetArrayIndex(idx)
	if not idx then
		return 1
	else
		return idx
	end
end

-- This selects which unit roster file to load given the total number of flags on the map
-- TODO: figure out how to extract the campaign day progress for more accurate file selection
function selectArmyDivision(totalFlags, army)

	local fileNumber = 1
	local divisionPurchaseModel = nil
	local filePath = army .. "/bot.data.purchase.conquest."
	local period = "early"

	if totalFlags == 1 or forceLoadEarlyDivisions then
		fileNumber = math.random(1, maxNumOfEarlyDivisions[army])
		period = "early"
	
	elseif totalFlags == 2 then
		fileNumber = math.random(1, maxNumOfMidDivisions[army])
		period = "mid"
	
	elseif totalFlags == 3 or totalFlags == 4 then
		divisionPurchaseModel = [[/script/multiplayer/bot.data.purchase.conquest.defense]] 
		print("loading defense division")
		
		if testing and testingDivision then
			divisionPurchaseModel = testingDivision
		end

		return divisionPurchaseModel
	
	else
		fileNumber = math.random(1, maxNumOfLateDivisions[army])
		period = "late"
	end
	
	print("selected division number: ", fileNumber)
	filePath = filePath .. period .. "." .. army .. "." .. fileNumber;
	divisionPurchaseModel = [[/script/multiplayer/]] .. filePath;
	print("loading faction divisions from: ", filePath)

	if not module_exists(divisionPurchaseModel) then 		
		divisionPurchaseModel = [[/script/multiplayer/bot.data.purchase.conquest.]] .. period .. "." .. fileNumber;
		print("Faction division file couldn't be loaded. Loading standard division file")
	end
	
	print("loading")
	-- REMOVE THIS LINE (ONLY FOR TESTING)
	if testing and testingDivision then
		divisionPurchaseModel = testingDivision
	end
	

	return divisionPurchaseModel
end

function setFirstWaveOffset( flagCount, flags)
	if flagCount == 1 then
		firstWaveOffsetTime = oneFlagOffsetTime
	elseif flagCount == 2 then
		firstWaveOffsetTime = twoFlagOffsetTime
	elseif flagCount == 3 then
		firstWaveOffsetTime = threeFlagOffsetTime
	elseif flagCount == 4 then
		firstWaveOffsetTime = fourFlagOffsetTime
	else
		firstWaveOffsetTime = fiveFlagOffsetTime
	end

	firstWaveOffsetTime = randomizeFirstWaveTimeChance(firstWaveOffsetTime)
	
	for i, flag in pairs(flags) do
		if flag.name == "f16" or flag.name == "f17" or flag.name == "f18" or flag.name == "f19" or flag.name == "f20" then 
			firstWaveOffsetTime = neverFlagOffsetTime
		end 
	end


	if testing then
		firstWaveOffsetTime = firstWaveOffsetTimeForTesting
	end 
	print("changing first wave offset to ", firstWaveOffsetTime)
	return firstWaveOffsetTime
end

function randomizeFirstWaveTimeChance(offsetTime) 
	if math.random() < chanceToOffsetFirstWave then -- chance to change when enemy reinforcements spawn 
		offsetTime = offsetTime + math.random(lowerBoundFirstWaveOffset, upperBoundFirstWaveOffset) 
	end
	return offsetTime
end

function setNextTyphoonWaveTime() 
	nextTyphoonWaveTime = os.clock() + typhoonWaveInterval
end

function setTyphoonWaveMode()
	typhoonWaveMode = true
	SpawnCooldownTime.Min = 2
	SpawnCooldownTime.Max = 2
	print("typhoon wave mode activated")
end

function  activateToggleTyphoonWaveMode()
	
	typhoonWaveModeInGameToggle = true
	print("typhoonWaveMode in game toggle on")
	
end

function disableTyphoonWaveMode()
	typhoonWaveMode = false
	SpawnCooldownTime.Min = defaultSpawnCooldownTime.Min
	SpawnCooldownTime.Max = defaultSpawnCooldownTime.Max
	print("typhoon wave mode deactivated")
end

PIter = {}
PIter.__index = PIter

function PIter:new(data)
	local obj = {
		idx = nil,
		rpt = nil,
		purchases = data,
		skipped = false,
		skipChance = 0.0,
		minRepeat = 0,
		maxRepeat = 0,
		waveDuration = nil,
		waveStartTime = nil,
		unlockedUnits = {},
		isHeavyArty = false
	}
	
	print("loading division: ", obj.purchases[1].divisionName)
	self.nextIndex(obj)
	return setmetatable(obj, self)
end

function PIter:current()
	if self.idx then
		return self.purchases[self.idx].Units
	end
end



function PIter:nextIndex()

	if verbose then
		print("finding next valid wave")
	end

	self.idx = next(self.purchases, self.idx)
	self.idx = resetArrayIndex(self.idx)

	if self.purchases[self.idx].skipPossible == true then
		print("skip chance:", self.purchases[self.idx].skipChance)
		local skipPercentage = math.random()

		if self.purchases[self.idx].skipChance and skipPercentage < self.purchases[self.idx].skipChance then 
			print("manual percentage met:", self.purchases[self.idx].skipChance, ", skipping wave ", self.idx)

			self.idx = next(self.purchases, self.idx)

		elseif not self.purchases[self.idx].skipChance and skipPercentage < 0.5 and not initialWave then
			print("skipping wave ", self.idx)
			
			self.idx = next(self.purchases, self.idx)
		end
	end
	
	self.idx = resetArrayIndex(self.idx)

	-- Find the next wave that has at least 1 unlocked unit to buy
	if unitsForWave[self.idx] == nil  then 
		local availableUnits = {}

		while #availableUnits == 0 do

			if verbose then
				print("wave ", self.idx)
			end 
			local potentialUnits = self.purchases[self.idx].Units[BotApi.Instance.army]
			
			if verbose then
				print("Finding unlocked units for this wave")
			end
			for i, unit in pairs(potentialUnits) do
				if BotApi.Commands:IsUnitAvailable(unit.unit) then
					if verbose then
						print("Adding ", unit.unit, " to available units")
					end
					table.insert(availableUnits, unit)
				else 
					if verbose then
						print(unit.unit, " is not yet available to the AI")
					end
				end
			end

			if #availableUnits == 0 then
				if verbose then
					print("wave ", self.idx, " has no available units")
				end

				self.idx = next(self.purchases, self.idx)

				if not self.idx then
					self.idx = 1
				end

			end
		end
		unitsForWave[self.idx] = availableUnits	
		
	end
	
	self.unlockedUnits = unitsForWave[self.idx]	
	
	if verbose then
		print("grabbing wave number: ", self.purchases[self.idx].waveNumber)
	end

	if typhoonWaveMode then 
		self.waveDuration = 3
	else
		self.waveDuration = self.purchases[self.idx].waveDuration
	end 

	
	if self.purchases[self.idx].isHeavyArty then 
		self.isHeavyArty = true
	else
		self.isHeavyArty = false
	end

	if self.purchases[self.idx].minRepeat and self.purchases[self.idx].maxRepeat then 
		self.rpt = math.random(self.purchases[self.idx].minRepeat, self.purchases[self.idx].maxRepeat)
	else 
		self.rpt = self.purchases[self.idx].Repeat
	end


	if verbose then
		print("Min number of squads for this wave: ", self.rpt)
	end

	if verbose then
		print("Max number of squads for this wave: ", self.rpt)
	end

	-- if self.purchases[self.idx].maxRepeat then
	-- 	currentWaveMaxUnitCount = self.purchases[self.idx].maxRepeat
	-- else 
	-- 	currentWaveMaxUnitCount = self.rpt
	-- end
	currentWaveMaxUnitCount = self.rpt

	if initialWave then 
		self.waveDuration = self.waveDuration + firstWaveOffsetTime
		currentWaveMaxUnitCount = currentWaveMaxUnitCount - 1
		initialWave = false
		print("OS time: ", os.clock()) 
		print("Initial wave offset: ", firstWaveOffsetTime)
	end


	self.waveStartTime = os.clock()
end



function PIter:moveNext()
	if initialWave and os.clock() < (firstWaveOffsetTime + self.waveStartTime) then
		print("can't get wave yet")
		return
	end
	
	if self.rpt == 0 then
		if typhoonWaveMode then
			if os.clock() > (3 + self.waveStartTime) then
				if verbose then
					print("Ready for next typhoon wave")		
				end
				self:nextIndex()
			end
		elseif os.clock() > (self.waveDuration + self.waveStartTime) then
			if verbose then
				print("Ready for next wave")		
			end
			self:nextIndex()
		end
		return
	end

	if self.rpt > 0 then
		self.rpt = self.rpt - 1
		if verbose then
			print("Repeat attempts left for wave: ", self.rpt)			
		end
		return
	end
end

