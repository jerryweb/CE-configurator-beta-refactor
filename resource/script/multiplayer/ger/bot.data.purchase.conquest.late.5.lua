Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave c 1 по 5 бой
		divisionName = "Condor Late Tank Division",
		waveNumber = 0, -- какая по порядку будет
		minRepeat = 6,
		maxRepeat = 10,
		skipPossible = false,  -- ничего не делает
		waveDuration = 5, -- длительность того, как долго бот будет вызывать данные войска. Каждый юнит вызывается каждые 3 секунды. Если нужно чтобы было только определенное количество то Repeat * 3 < Wave duration  При этом Repeat говорит сколько раз нужно вызвать юнит.
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 0.3, class = UnitClass.Tank, unit = "panzer2l"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz222a"},
			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_armor_con"},				
			},
		}
	},
    {--purchase officer
		waveNumber = 1,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.35,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(ger)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(ger)"},
				-- {priority = 0.7, class = UnitClass.Infantry, unit = "squad_officer_kubel_con"},
				-- {priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_250_3_con"},
			},
		}
	},
	{--purchase mortar
		waveNumber = 2,
	    minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 5,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
		    --Howitzers
                {priority = 1.0, class = UnitClass.ATTank, unit = "80mm_sgrw34"},
			},
		}
	},	
	{--purchase heavy mortar
		waveNumber = 3,
	    minRepeat = 0,
		maxRepeat = 0,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 6,
	    isHeavyArty = true,	
		Units = {
			["ger"] = {--Germany
		    --Howitzers
                
			},
		}
	},
	{--purchase heavy tank group
		waveNumber = 4,
	    minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
				{priority = 0.8, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 0.4, class = UnitClass.HeavyTank, unit = "panzer5a"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "panzer5g"},				
			},
		}
	},
	{--purchase medium tank group
		waveNumber = 5,
	    minRepeat = 4,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j"},
				{priority = 0.2, class = UnitClass.Tank, unit = "panzer4g"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 6,
		minRepeat = 7,
		maxRepeat = 9,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
			    {priority = 1.0, class = UnitClass.Infantry, unit = "squad_regular_motor_con"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 7,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder3m"},
				{priority = 0.3, class = UnitClass.ArtilleryTank, unit = "sig33b"},
			},	
		}
	},
	{--purchase AA support
		waveNumber = 8,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = true,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
			--AA
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz6_2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "sdkfz8_flak18"},
			},
		}
	},
	{--purchase 100 engineering wave
		waveNumber = 100,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_1(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_2(ger)"},
			},
		}
	}
}

--Conversion Chart
--0.9 = 3.5
--1.0 = 3
--1.1 = 2.5
--1.2 = 2
--1.3 = 1.5
--1.4 = 1
--1.5 = 0.5
--1.6 = 0.1
