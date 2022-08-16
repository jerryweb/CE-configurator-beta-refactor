Purchases["campaign_capture_the_flag"] = {
	{--purchase arty
		divisionName = "Arty Noob division",
		waveNumber = 1,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = false,		
		waveDuration = 10,
		isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm31_12ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_br2ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "203mm_b4ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "280mm_br5ai"},
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
			["rus"] = {--russia
			--tanks_heavy
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(rus)"},
				-- {priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_gaz_con"},
			},
		}
	},
	{--purchase  starting recon wave
		waveNumber = 2,
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
			    {priority = 2.5, class = UnitClass.Infantry, unit = "squad_recon_con(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_spetsnaz(rus)"},
			--Wheel_vehicles
				{priority = 1.8, class = UnitClass.Vehicle, unit = "m3a1e1_scout_mgun"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba64"},
			},
		}
	},
	{--purchase mortar
		waveNumber = 3,
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
		waveNumber = 4,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_medium
            	{priority = 1.0, class = UnitClass.Tank, unit = "bt7a"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.8, class = UnitClass.Tank, unit = "t3485_44"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t70m"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 5,
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

				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_paras_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_spetsnaz(rus)"},
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
			["rus"] = {--Russia
			--SPG
				{priority = 1.65, class = UnitClass.ATTank, unit = "su85"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "isu152"},
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
            --Tanks_medium
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.9, class = UnitClass.Tank, unit = "t3457_43"},
			--Tanks_light
				{priority = 2.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt7a"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 8,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads

				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_paras_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_spetsnaz(rus)"},
				
			},									
		}
	},
	{--purchase rocket arty
		waveNumber = 9,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,		
		waveDuration = 5,
		isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm13_studebakerai"},
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
				{priority = 1.0, class = UnitClass.Tank, unit = "bt7"},
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
