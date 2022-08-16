Purchases["campaign_capture_the_flag"] = {
	{--purchase 1  arty
		divisionName = "Arty Noob division",
		waveNumber = 1,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = false,		
		waveDuration = 10,
		isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
		        {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "300mm_nebelwerfer42ai"},
		        {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "210mm_nebelwerfer42ai"},
		        {priority = 0.5, class = UnitClass.ArtilleryTank, unit = "210mm_morser18ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_sfh18ai"},
			},	
		}
	},
    {--purchase officer
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.25,		
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
	{--purchase 2  starting recon wave
		waveNumber = 2,
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_armor_con"},
			--Wheel_vehicles
				{priority = 5.1, class = UnitClass.Vehicle, unit = "p204_f"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz222a"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "kfz13"},
			},
		}
	},
	{--purchase 3 mortar
		waveNumber = 3,
	    -- Repeat = 2,
		minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 5,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
				--Howitzers
			    {priority = 2.0, class = UnitClass.ArtilleryTank, unit = "120mm_sgrw42"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "sdkfz251c_2"},
			},
		}
	},
	{--purchase 4 tank assault group
		waveNumber = 4,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3n"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4g"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4j"},
			--Tanks_light
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer2f"},
			--SPG
			},
		}
	},
	{--purchase 5 infantry support
		waveNumber = 5,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
			    {priority = 1.5, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_gebirgsjaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_brandenburger_con(ger)"},
			},
		}
	},
	{--purchase 6 SPG support
		waveNumber = 6,
		-- Repeat = 5,
		minRepeat = 1,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["ger"] = {--Germany
			--SPG
		     	{priority = 1.5, class = UnitClass.ATTank, unit = "stug3g_late"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "hetzer"},
				{priority = 0.5, class = UnitClass.ATTank, unit = "jagdpanther"},
				{priority = 0.8, class = UnitClass.ATTank, unit = "marder3m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "stuh42"},
			},
		}
	},
	{--purchase 7 Tank 2
		waveNumber = 7,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4j"},
			--Tanks_light
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 0.5, class = UnitClass.Tank, unit = "pz756r"},

			},
		}
	},
	{--purchase 8 infantry attack 2
		waveNumber = 8,
		-- Repeat = 10,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
			    {priority = 1.5, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_gebirgsjaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_brandenburger_con(ger)"},
			},								
		}
	},
	{--purchase 9 rocket arty
		waveNumber = 9,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,		
		waveDuration = 5,
		isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
		        {priority = 11.0, class = UnitClass.ArtilleryTank, unit = "300mm_nebelwerfer42ai", isHeavyArty = true},
			},
		}
	},
	{--purchase 10 light tank rush
		waveNumber = 10,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 2.5, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz6_2"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2l"},
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
