Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Tank division",
		waveNumber = 1,
		minRepeat = 3,
		maxRepeat = 5,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
			    {priority = 2.5, class = UnitClass.Infantry, unit = "squad_recon_con(rus)"},
			--Wheel_vehicles
				{priority = 1.5, class = UnitClass.Vehicle, unit = "ba64"},
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
			["rus"] = {--russia
			--tanks_heavy
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(rus)"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_gaz_con"},
			},
		}
	},
	{--purchase howtizer
		waveNumber = 4,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.45,
	    isHeavyArty = true,		
		waveDuration = 7,
		Units = {
			["rus"] = {--Russia
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "122mm_m30ai"},
					{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
			},
		}
	},
	{--purchase  tank assault group
		waveNumber = 2,
		minRepeat = 4,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv2_40"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1_41"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "kv85"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 0.1, class = UnitClass.HeavyTank, unit = "is2_43"},
	        --Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 3.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_43"},
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t70"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt7"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 3,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 25,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 5,
		minRepeat = 2,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su100"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 6,
		minRepeat = 5,
		maxRepeat = 10,
        skipPossible = false,		
		waveDuration = 11,
		Units = {
			["rus"] = {--Russia
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv2_40"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1_41"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "kv85"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "is1_43"},
				{priority = 0.1, class = UnitClass.HeavyTank, unit = "is2_43"},
	        --Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 3.5, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_43"},
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t70"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt7"},
			},
		}
	},
	{--purchase aa support
		waveNumber = 7,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 3,
		Units = {
			["rus"] = {--Russia
		        {priority = 0.5, class = UnitClass.AATank, unit = "25mm_72k"},
				{priority = 1.5, class = UnitClass.AATank, unit = "37mm_61k"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 8,
		minRepeat = 8,
		maxRepeat = 10,
        skipPossible = false,		
		waveDuration = 25,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
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
