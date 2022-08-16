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
			["fin"] = {--Finland
				{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "120mm_k78_31ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "122mm_m1910_finai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_h40ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "155mm_h17ai"},
				{priority = 0.8, class = UnitClass.ArtilleryTank, unit = "203mm_h17ai"},
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
			["fin"] = {--finland
			
				{priority = 0.1, class = UnitClass.Infantry, unit = "single_officer(fin)"},
				{priority = 0.1, class = UnitClass.Infantry, unit = "team_officer_con(fin)"},
				{priority = 0.1, class = UnitClass.Infantry, unit = "squad_officer_con(fin)"},			
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
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_scout_mid_con(fin)"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba10"},
			},
		}
	},
	{--purchase 3 mortar
		waveNumber = 3,
		minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 5,
	    isHeavyArty = true,
		Units = {
			["fin"] = {--Finland
		
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_krh40"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "170mm_minewerferai"},		
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
			["fin"] = {--Finland
			
				{priority = 1.0, class = UnitClass.Tank, unit = "l62"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt42"},
			--Tanks_medium
			
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3485_44_fin"},
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "kv1_42_fin"},
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
			["fin"] = {--Finland
			--Infantry Singles	
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_mid_con(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marksmen_mid_con(fin)"},
			},
		}
	},
	{--purchase 6 SPG support
		waveNumber = 6,
		minRepeat = 1,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["fin"] = {--Finland
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3g_fin"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "isu152_fin"},		
			},
		}
	},
	{--purchase 7 Tank 2
		waveNumber = 7,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["fin"] = {--Finland
			
				{priority = 0.1, class = UnitClass.Tank, unit = "t50_fin"},
				{priority = 0.5, class = UnitClass.Tank, unit = "l62"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt42"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
			},
		}
	},
	{--purchase 8 infantry attack 2
		waveNumber = 8,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["fin"] = {--Finland
			--Infantry Singles
			
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_mid_con(fin)"},
		
		

				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(fin)"},
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
			["fin"] = {--Finland
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "170mm_minewerferai"},
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
			["fin"] = {--Finland		
				{priority = 1.1, class = UnitClass.Tank, unit = "t50_fin"},
				{priority = 0.8, class = UnitClass.Tank, unit = "l62"},
				{priority = 0.8, class = UnitClass.Tank, unit = "bt42"},
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
