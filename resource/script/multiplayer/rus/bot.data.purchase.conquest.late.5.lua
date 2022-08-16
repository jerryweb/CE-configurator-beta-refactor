Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave c 1 по 5 бой
		divisionName = "Condor Late Tank Division",
		waveNumber = 1, -- какая по порядку будет
		minRepeat = 6,
		maxRepeat = 10,
		skipPossible = false,  -- ничего не делает
		waveDuration = 5, -- длительность того, как долго бот будет вызывать данные войска. Каждый юнит вызывается каждые 3 секунды. Если нужно чтобы было только определенное количество то Repeat * 3 < Wave duration  При этом Repeat говорит сколько раз нужно вызвать юнит.
		Units = {
			["rus"] = {--Russia
			--Infantry Singles
			    {priority = 1.0, class = UnitClass.Infantry, unit = "squad_recon_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(rus)"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ba64"},
				{priority = 0.2, class = UnitClass.Vehicle, unit = "ba6"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3a1e1_scout_mgun"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "gaz67b"},
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
                {priority = 1.0, class = UnitClass.ATTank, unit = "82mm_bm37"},
			},
		}
	},	
	{--purchase heavy mortar
		waveNumber = 3,
	    minRepeat = 0,
		maxRepeat = 0,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 6,
	    isHeavyArty = true,	
		Units = {
			["rus"] = {--Russia
			--Howitzers
                
			},
		}
	},
	{--purchase heavy tank group
		waveNumber = 4,
	    minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["rus"] = {--Russia				
			--Tanks_heavy
				{priority = 2.5, class = UnitClass.Tank, unit = "t3485_44"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "is2_44"},
			},
		}
	},
	{--purchase medium tank group
		waveNumber = 5,
	    minRepeat = 4,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["rus"] = {--Russia		
			--Tanks_medium					
                {priority = 1.2, class = UnitClass.Tank, unit = "t3485_44"},
				{priority = 0.7, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_43"},
			},
		}
	},
	{--purchase light tank group
		waveNumber = 6,
	    minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["rus"] = {--Russia			
            --Tanks_light
				{priority = 0.2, class = UnitClass.Tank, unit = "t60"},
				{priority = 0.4, class = UnitClass.Tank, unit = "t70"},
				{priority = 0.4, class = UnitClass.Tank, unit = "t70m"},			
			},
		}
	},
	{--purchase infantry support
		waveNumber = 7,
		minRepeat = 7,
		maxRepeat = 9,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_smg_con(rus)"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 8,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["rus"] = {--Russia
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "su85"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, unit = "su122"},
			},
		}
	},
	{--purchase AA support
		waveNumber = 11,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = true,		
		waveDuration = 15,
		Units = {
			["rus"] = {--Russia
			--AA
		
				{priority = 0.2, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
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
