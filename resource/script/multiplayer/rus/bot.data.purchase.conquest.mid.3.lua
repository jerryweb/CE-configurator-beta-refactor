Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Infantry and support weapons",
		waveNumber = 1,
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
			
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_paras(rus)"},
				-- {priority = 1.5, class = UnitClass.Infantry, unit = "squad_border(rus)"},
			--Wheel_vehicles
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
	{--purchase rocket arty
		waveNumber = 9,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.4,	
	    isHeavyArty = true,	
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
				{priority = 11.0, class = UnitClass.ArtilleryTank, unit = "bm13_studebakerai"},
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
				{priority = 2.0, class = UnitClass.ATTank, unit = "82mm_bm37"},
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
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "kv1_40"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv2_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "kv1_41"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
	        --Tanks_medium
	        	{priority = 1.0, class = UnitClass.Tank, unit = "bt7a"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t3476_40"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_41"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_41"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_43"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "t30"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "bt5"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt7"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 4,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
			    {priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
			},
		}
	},
	{--purchase Emplancement wave
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 3,
	    skipPossible = false,
	    waveDuration = 10,
	    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
           --HMGs
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_aa"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "maxim"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ds39_stand"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sg43_stand"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_stan"},
			--Anti_Aircraft
				{priority = 0.5, class = UnitClass.AATank, unit = "37mm_61k"},
				{priority = 1.0, class = UnitClass.AATank, unit = "25mm_72k"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, unit = "57mm_zis2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "45mm_m42"},
			--Infantry_Support
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m43"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m1927"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "76mm_zis3"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 6,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "su76"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "su85"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su100"},
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 7,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["rus"] = {--Russia
			--Tanks_heavy
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "kv1_40"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv2_40"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "kv1_41"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "kv1s"},
	        --Tanks_medium
	        	{priority = 1.0, class = UnitClass.Tank, unit = "bt7a"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t3476_40"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_41"},
				{priority = 1.1, class = UnitClass.Tank, unit = "t3457_41"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3476_43"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "t30"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t70"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "bt5"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt7"},
			},
		}
	},
	{--purchase light tank rush
		waveNumber = 10,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["rus"] = {--Russia
            --Tanks_light			
			    {priority = 3.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70m"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
				{priority = 2.0, class = UnitClass.Vehicle, unit = "ba6"},
			},
		}
	},
	{--purchase howtizer
		waveNumber = 10,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = false,		
		waveDuration = 5,
		isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "122mm_m30ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_br2ai"}
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 8,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
			    {priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
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
