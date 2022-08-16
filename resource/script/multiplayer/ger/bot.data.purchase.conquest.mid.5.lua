Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave c 1 по 5 бой
		divisionName = "Condor Mid Tank Division",
		waveNumber = 0, -- какая по порядку будет
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,  -- ничего не делает
		waveDuration = 20, -- длительность того, как долго бот будет вызывать данные войска. Каждый юнит вызывается каждые 3 секунды. Если нужно чтобы было только определенное количество то Repeat * 3 < Wave duration  При этом Repeat говорит сколько раз нужно вызвать юнит.
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "kubelwagen_mg"},
				{priority = 0.1, class = UnitClass.Vehicle, unit = "p204_f"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 2.0, class = UnitClass.Vehicle, unit = "sdkfz222a"},
			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_motor_con"},
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
	{--purchase  mortar
		waveNumber = 2,
	    minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.45,
	    waveDuration = 8,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
		    --Howitzers
                {priority = 1.0, class = UnitClass.ATTank, unit = "80mm_sgrw34"}
			},
		}
	},
	{--purchase heavy tank group
		waveNumber = 3,
	    minRepeat = 2,
		maxRepeat = 3,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4f2"},
			},
		}
	},
	{--purchase medium tank group
		waveNumber = 4,
	    minRepeat = 6,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4f1"},
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer4f2"},
			},
		}
	},
	{--purchase light tank group
		waveNumber = 5,
	    minRepeat = 5,
		maxRepeat = 10,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Tanks_light
                {priority = 0.4, class = UnitClass.Tank, unit = "panzer3j1"},
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer3j"},
				{priority = 0.2, class = UnitClass.Tank, unit = "panzer3f"},
				{priority = 0.2, class = UnitClass.Tank, unit = "panzer3e"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 0.1, class = UnitClass.Tank, unit = "panzer2c"},
				
			},
		}
	},
	{--purchase SPG support
		waveNumber = 6,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "sig33b"},
			},
		}
	},
	{--purchase mgun support
		waveNumber = 7,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,		
		waveDuration = 15,
			    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "mg34_lafette"},
				{priority = 0.2, class = UnitClass.ATTank, unit = "mg42_lafette"},
			},
		}
	},	
	{--purchase gun support
		waveNumber = 8,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,		
		waveDuration = 15,
		isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_leig18"},
			},
		}
	},
	{--purchase gun support
		waveNumber = 9,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder3"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "sig33b"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 10,
		minRepeat = 7,
		maxRepeat = 10,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
			    {priority = 1.0, class = UnitClass.Infantry, unit = "squad_regular_motor_con"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
				{priority = 0.2, class = UnitClass.ATInfantry, unit = "single_at(ger)"},
				{priority = 0.2, class = UnitClass.ATInfantry, unit = "single_riflegrenade(ger)"}
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
