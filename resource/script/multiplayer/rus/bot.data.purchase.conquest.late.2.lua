Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Tank division",
		waveNumber = 1,
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
			--Wheel_vehicles
				{priority = 1.8, class = UnitClass.Vehicle, unit = "m3a1e1_scout_mgun"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ba6"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba64"},
			},
		}
	},
	{--purchase arty
		waveNumber = 6,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.6,
	    isHeavyArty = true,	
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
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
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(rus)"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_gaz_con"},
			},
		}
	},
	{--purchase tank assault group
		waveNumber = 2,
		minRepeat = 6,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 11,
		Units = {
			["rus"] = {--Russia
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "churchill3"},
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "kv85"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "is2_44"},
            --Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3485_44"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 3,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 30,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 4,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 11,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 2.0, class = UnitClass.ATTank, unit = "su100"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su152"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "isu122s"},
				{priority = 2.0, class = UnitClass.ATTank, unit = "isu152"}
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 5,
		minRepeat = 4,
		maxRepeat = 7,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "churchill3"},
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "kv85"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "is2_44"},
            --Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_43"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t3485_44"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 7,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 22,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
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
