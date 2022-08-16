Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave c 1 по 5 бой
		divisionName = "Condor Mid Tank Division",
		waveNumber = 1, -- какая по порядку будет
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,  -- ничего не делает
		waveDuration = 20, -- длительность того, как долго бот будет вызывать данные войска. Каждый юнит вызывается каждые 3 секунды. Если нужно чтобы было только определенное количество то Repeat * 3 < Wave duration  При этом Repeat говорит сколько раз нужно вызвать юнит.
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
			    {priority = 2.5, class = UnitClass.Infantry, unit = "squad_recon_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(rus)"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ba6"},
				{priority = 2.0, class = UnitClass.Vehicle, unit = "ba20"},
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
	{--purchase mortar
		waveNumber = 2,
	    minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.45,
	    waveDuration = 8,
	    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
			--Howitzers
                {priority = 1.0, class = UnitClass.ATTank, unit = "82mm_bm37"},
			},
		}
	},
	{--purchase heavyk tank group
		waveNumber = 3,
	    minRepeat = 2,
		maxRepeat = 3,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["rus"] = {--Russia				
			--Tanks_heavy
			    {priority = 0.4, class = UnitClass.HeavyTank, unit = "kv1_40"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "kv1_41"},
				{priority = 0.1, class = UnitClass.HeavyTank, unit = "kv2_40"},
			},
		}
	},
	{--purchase medium tank group
		waveNumber = 4,
	    minRepeat = 6,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["rus"] = {--Russia		
			--Tanks_medium				
				{priority = 0.7, class = UnitClass.Tank, unit = "t3476_41"},				
				{priority = 0.7, class = UnitClass.Tank, unit = "t3476_42"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_41"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3476_40"},
			--Tanks_heavy
			},
		}
	},
	{--purchase light tank group
		waveNumber = 5,
	    minRepeat = 5,
		maxRepeat = 10,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["rus"] = {--Russia			
            --Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "t60"},			
			},
		}
	},
	{--purchase SPG support
		waveNumber = 7,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 0.1, class = UnitClass.ATTank, unit = "zis30"},
			},
		}
	},
	{--purchase mgun support
		waveNumber = 8,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,		
		waveDuration = 15,
			    isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "maxim"},
				{priority = 0.2, class = UnitClass.ATTank, unit = "dshk_stan"},
			},
		}
	},	
	{--purchase gun support
		waveNumber = 9,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,		
		waveDuration = 15,
		isHeavyArty = true,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "76mm_m1927"},
			},
		}
	},
	{--purchase gun support
		waveNumber = 10,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 0.7, class = UnitClass.ATTank, unit = "zis30"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 6,
		minRepeat = 7,
		maxRepeat = 10,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(rus)"},
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
