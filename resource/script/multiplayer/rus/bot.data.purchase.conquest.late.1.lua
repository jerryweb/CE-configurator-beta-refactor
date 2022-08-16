Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Generic division",
		waveNumber = 1,
		minRepeat = 2,
		maxRepeat = 5,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
			    {priority = 2.5, class = UnitClass.Infantry, unit = "squad_recon_con(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_spetsnaz(rus)"},
			--Wheel_vehicles
				{priority = 1.8, class = UnitClass.Vehicle, unit = "m3a1e1_scout_mgun"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ba6"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba64"},
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
	{--purchase arty
		waveNumber = 8,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.4,
	    isHeavyArty = true,		
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm13_studebakerai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_br2ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "203mm_b4ai"},
			},
		}
	},
	{--purchase  mortar
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 5,
	    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
			--Howitzers
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "120mm_pm38"},
			},
		}
	},
	{--purchase tank assault group
		waveNumber = 3,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 10,
		Units = {
			["rus"] = {--Russia
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "kv85"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 1.3, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 0.9, class = UnitClass.HeavyTank, unit = "is2_44"},
            --Tanks_medium
            	{priority = 0.5, class = UnitClass.Tank, unit = "bt7a"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3485_44"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "t70m"},
   			    {priority = 1.5, class = UnitClass.Tank, unit = "valentine7"},
				{priority = 1.0, class = UnitClass.Tank, unit = "valentine9"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 4,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
			},
		}
	},
	{--purchase Emplancement wave
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 1,
	    skipPossible = true,
	    waveDuration = 10,
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
	{--purchase SPG support
		waveNumber = 6,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, unit = "su85"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "su100"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su152"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "isu122s"},
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 7,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["rus"] = {--Russia
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "kv85"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 1.3, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 0.9, class = UnitClass.HeavyTank, unit = "is2_44"},
            --Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3485_44"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "t70m"},
   			    {priority = 1.5, class = UnitClass.Tank, unit = "valentine7"},
				{priority = 1.0, class = UnitClass.Tank, unit = "valentine9"},
			},
		}
	},
	{--purchase light tank rush
		waveNumber = 8,
		minRepeat = 2,
		maxRepeat = 5,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_light			
				{priority = 3.0, class = UnitClass.Tank, unit = "t70m"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 9,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
			},
		}
	},
	{--purchase engineering wave
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
