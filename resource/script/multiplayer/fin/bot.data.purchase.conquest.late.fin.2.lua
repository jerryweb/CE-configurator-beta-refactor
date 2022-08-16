Purchases["campaign_capture_the_flag"] = {
	{--purchase 1 starting recon wave
		divisionName = "Tank division",
		waveNumber = 1,
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["fin"] = {--Finland
		
				{priority = 0.5, class = UnitClass.AATank, unit = "ford_3ton_breda"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba10"},
				{priority = 0.1, class = UnitClass.Vehicle, unit = "l182"},
			},
		}
	},
	{--purchase 6 arty
		waveNumber = 6,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.6,
	    isHeavyArty = true,	
		waveDuration = 5,
		Units = {
			["fin"] = {--Finland
		
				{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "150mm_rkh41ai"},
			},
		}
	},
    {--purchase officer
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.35,		
		waveDuration = 5,
		Units = {
			["fin"] = {--finland
			
				{priority = 0.1, class = UnitClass.Infantry, unit = "single_officer(fin)"},
				{priority = 0.1, class = UnitClass.Infantry, unit = "team_officer_con(fin)"},
				{priority = 0.1, class = UnitClass.Infantry, unit = "squad_officer_con(fin)"},			
			},
		}
	},
	{--purchase 2  tank assault group
		waveNumber = 2,
		minRepeat = 6,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 11,
		Units = {
			["fin"] = {--Finland
			
				{priority = 0.5, class = UnitClass.Tank, unit = "l62"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt42"},
			--Tanks_medium
		
				{priority = 1.2, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 1.1, class = UnitClass.Tank, unit = "t3485_44_fin"},
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "kv1_42_fin"},
			},
		}
	},
	{--purchase 3 infantry support
		waveNumber = 3,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 30,
		Units = {
			["fin"] = {--Finland
			
			
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_assault_mid_con(fin)"},

			
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_cav_mid_con(fin)"},
			},
		}
	},
	{--purchase 4 SPG support
		waveNumber = 4,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 11,
		Units = {
			["fin"] = {--Finland
			
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3g_fin"},
				{priority = 1.1, class = UnitClass.ATTank, unit = "isu152_fin"},
			},
		}
	},
	{--purchase 5 Tank 2
		waveNumber = 5,
		minRepeat = 4,
		maxRepeat = 7,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["fin"] = {--Finland
			--Infantry Singles
			
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3485_44_fin"},
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "kv1_42_fin"},
			},
		}
	},
	{--purchase 7 infantry attack 2
		waveNumber = 7,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 22,
		Units = {
			["fin"] = {--Finland
			
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_assault_mid_con(fin)"},

		
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_cav_mid_con(fin)"},

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
			["fin"] = {--Finland
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai(fin)"},
				{priority = 0.7, class = UnitClass.Infantry, unit = "squad_heavy_engineer_mid_con_ai(fin)"},			},
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
