Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Specialized division",
		waveNumber = 1,
		minRepeat = 3,
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
			["hun"] = {--hungary
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(hun)"},
			},
		}
	},
	{--purchase arty
		waveNumber = 8,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.55,		
		waveDuration = 3,
	    isHeavyArty = true,		
		Units = {
			["rus"] = {--Russia
		        {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "122mm_m30ai"},
				{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "122mm_a19ai"},
				{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
				{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "152mm_br2ai"},
				{priority = 0.7, class = UnitClass.ArtilleryTank, unit = "203mm_b4ai"},
			},
		}
	},
	{--purchase mortar
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 3,
	    skipPossible = false,
	    waveDuration = 8,
	    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
			--Howitzers
				{priority = 3.0, class = UnitClass.ArtilleryTank, unit = "120mm_pm38"},
			},
		}
	},
	{--purchase tank assault group
		waveNumber = 3,
		minRepeat = 4,
		maxRepeat = 6,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "valentine9"},
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "churchill3"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "kv2_40"},
				{priority = 1.4, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "is1_43"},
			       --Tanks_medium
			},
		}
	},
	{--purchase SPG support
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "su152"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "su85"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 6,
		minRepeat = 2,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 11,
		Units = {
			["rus"] = {--Russia
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "valentine9"},
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "churchill3"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "kv2_40"},
				{priority = 1.4, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_41"},
			       --Tanks_medium
			},
		}
	},
	{--purchase light tank rush
		waveNumber = 9,
		minRepeat = 4,
		maxRepeat = 7,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_light			
			    {priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70m"},
					{priority = 3.0, class = UnitClass.Tank, unit = "bt7"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
			},
		}
	},
	{--purchase paratroopers
		waveNumber = 10,
		minRepeat = 4,
		maxRepeat = 8,
		skipPossible = true,
		skipChance = 0.55,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rus_paras_con"},
			},
		}
	},	
	{--purchase light tank rush
		waveNumber = 11,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_light			
			 {priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 4,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 25,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_paras_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_spetsnaz(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
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
