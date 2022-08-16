Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Elite division (Shock Troops)",
		waveNumber = 1,
		minRepeat = 5,
		maxRepeat = 7,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
		        {priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},
			},
		}
	},
	{--purchase arty
		waveNumber = 7,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = true,		
		waveDuration = 5,
		isHeavyArty = true,	
		Units = {
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm31_12ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "203mm_b4ai"},
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
			["rus"] = {--russia
			--tanks_heavy
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(rus)"},
				-- {priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_gaz_con"},
			},
		}
	},
	{--purchase tank assault group
		waveNumber = 2,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_medium
	            {priority = 1.5, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "is2_44"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3485_44"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 3,
		minRepeat = 4,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
		        {priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},
			},
		}
	},
	{--purchase  SPG support
		waveNumber = 4,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["rus"] = {--Russia
			--SPG
                {priority = 2.0, class = UnitClass.ATTank, unit = "isu122s"},
				{priority = 2.0, class = UnitClass.ATTank, unit = "isu152"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su152"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
			},
		}
	},
	{--purchase Emplancement wave
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 1,
	    skipPossible = true,
	    waveDuration = 10,
	    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
           --HMGs
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_aa"},
			--Anti_Aircraft
				{priority = 0.8, class = UnitClass.AATank, unit = "37mm_61k"},
				{priority = 0.8, class = UnitClass.AATank, unit = "85mm_52k"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, unit = "57mm_zis2"},
				{priority = 0.4, class = UnitClass.ATTank, unit = "100mm_bs3"},
			--Infantry_Support
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m43"},
			},
		}
	},	
	{--purchase Tank 2
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
            --Tanks_medium
	            {priority = 1.5, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "is2_44"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3485_44"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
			},
		}
	},
	{--purchase paratrooper wave
		waveNumber = 8,
		minRepeat = 4,
		maxRepeat = 8,
		skipPossible = true,
		skipChance = 0.6,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rus_paras_con_late"},
			},
		}
	},	
	{--purchase light tank rush
		waveNumber = 9,
		minRepeat = 4,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["rus"] = {--Russia
			--Wheel_vehicles
				{priority = 3.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
				{priority = 1.5, class = UnitClass.Tank, unit = "valentine7"},
				{priority = 1.0, class = UnitClass.Tank, unit = "valentine9"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 6,
		minRepeat = 4,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
		        {priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_riflegrenade(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(rus)"},
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
