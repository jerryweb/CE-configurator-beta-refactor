Purchases["campaign_capture_the_flag"] = {
	{--purchase 1 starting recon wave
		divisionName = "Generic division",
		waveNumber = 1,
		minRepeat = 2,
		maxRepeat = 5,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["fin"] = {--Finland
			--Infantry Singles
	
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(fin)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_sniper(fin)"},
	
				{priority = 0.1, class = UnitClass.Infantry, unit = "white_death_con(fin)"},
			--Infantry Squads
			
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_mid_con(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marksmen_mid_con(fin)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_assault_mid_con(fin)"},

	
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_cav_mid_con(fin)"},



				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(fin)"},
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
	{--purchase 8 arty
		waveNumber = 8,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.4,
	    isHeavyArty = true,		
		waveDuration = 5,
		Units = {
			["fin"] = {--Finland
		
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "170mm_minewerferai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "122mm_m1910_finai"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "150mm_h40ai"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "155mm_h17ai"},
			
			},
		}
	},
	{--purchase 2  mortar
		waveNumber = 2,
	    -- Repeat = 2,
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
	{--purchase 3 tank assault group
		waveNumber = 3,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 10,
		Units = {
			["fin"] = {--Finland		
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t3485_44_fin"},
			--Tanks_heavy
				{priority = 0.1, class = UnitClass.HeavyTank, unit = "kv1_42_fin"},
			},
		}
	},
	{--purchase 4 infantry support
		waveNumber = 4,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["fin"] = {--Finland
			--Infantry Singles
			
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(fin)"},
			
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_mid_con(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marksmen_mid_con(fin)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_assault_mid_con(fin)"},

		
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_cav_mid_con(fin)"},
			},
		}
	},
	{--purchase Emplancement wave
		waveNumber = 5,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = true,
	    waveDuration = 10,
		Units = {
			["fin"] = {--Finland
			
				{priority = 1.5, class = UnitClass.Vehicle, unit = "maxim_m1910_30"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ds39_stand_fin"},
		
				{priority = 1.5, class = UnitClass.AATank, unit = "40mm_itk38b"},
				{priority = 1.5, class = UnitClass.AATank, unit = "75mm_itk37"},
		
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_pstk9738"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "76mm_k36"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_k40"},
			
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "84mm_k18_late"},
		
			},
		}
	},
	{--purchase 6 SPG support
		waveNumber = 6,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["fin"] = {--Finland
		
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3g_fin"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "isu152_fin"},
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
			["fin"] = {--Finland
		
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t3485_44_fin"},

			--Tanks_heavy
				{priority = 0.1, class = UnitClass.HeavyTank, unit = "kv1_42_fin"},

			},
		}
	},
	{--purchase 8 light tank rush
		waveNumber = 8,
		minRepeat = 2,
		maxRepeat = 5,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["fin"] = {--Finland
				{priority = 1.0, class = UnitClass.Tank, unit = "t50_fin"},
				{priority = 0.6, class = UnitClass.Tank, unit = "l62"},
				{priority = 0.7, class = UnitClass.Tank, unit = "bt42"},
			},
		}
	},
	{--purchase 9 infantry attack 2
		waveNumber = 9,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["fin"] = {--Finland
			--Infantry Singles
				
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(fin)"},
			

				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_scout_mid_con(fin)"},
			
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_mid_con(fin)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marksmen_mid_con(fin)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_assault_mid_con(fin)"},
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
