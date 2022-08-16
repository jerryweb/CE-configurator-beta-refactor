Purchases["campaign_capture_the_flag"] = {
	{--purchase paratrooper wave
		divisionName = "Airborne Division",
		waveNumber = 0,
		minRepeat = 8,
		maxRepeat = 12,
		skipPossible = true,
		waveDuration = 20,
		Units = {			
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rus_paras_con_late"},
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
			["rus"] = {--russia
			--tanks_heavy
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(rus)"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_gaz_con"},
			},
		}
	},
	{--purchase mortar
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 10,
	    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
			--Howitzers
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "120mm_pm38"},
			},
		}
	},
	{--purchase rocket arty
		waveNumber = 3,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.45,		
		waveDuration = 5,
		isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm31_12ai"},
				{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "152mm_br2ai"},
			},
		}
	},
	{--purchase tank assault group
		waveNumber = 4,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 0.9, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.3, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.9, class = UnitClass.Tank, unit = "t3485_44"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t70m"},
			},
		}
	},
	{--purchase Emplancement wave
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = false,
	    waveDuration = 10,
	    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
	           --HMGs
					{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_aa"},
				--Anti_Aircraft
					{priority = 0.8, class = UnitClass.AATank, unit = "37mm_61k"},
					-- {priority = 0.8, class = UnitClass.AATank, unit = "85mm_52k"},
				--Anti_Tank
					{priority = 1.0, class = UnitClass.ATTank, unit = "57mm_zis2"},
					{priority = 0.6, class = UnitClass.ATTank, unit = "100mm_bs3"},
				--Infantry_Support
					{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m43"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 6,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_mountainrifles_con(rus)"},

				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 7,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = false,		
		waveDuration = 40,
		Units = {			
			["rus"] = {--Russia
			--SPG
				{priority = 2.5, class = UnitClass.ATTank, unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "isu152"},
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 8,
		minRepeat = 2,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["rus"] = {--Russia
            --Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.9, class = UnitClass.Tank, unit = "t3485_44"},
			--Tanks_light
				-- {priority = 1.0, class = UnitClass.Tank, unit = "t70m"},
				-- {priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				-- {priority = 1.0, class = UnitClass.Tank, unit = "bt7a"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 9,
		minRepeat = 6,
		maxRepeat = 11,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads

				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, unit = "single_riflegrenade(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(rus)"},
			},
		}
	},
	{--purchase light tank rush
		waveNumber = 10,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_light			
				{priority = 2.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt7a"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
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
			["rus"] = {--Russia
            	{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_1(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_2(rus)"},
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
