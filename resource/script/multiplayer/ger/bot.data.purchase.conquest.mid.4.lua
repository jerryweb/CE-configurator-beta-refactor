Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Specialized division",
		waveNumber = 0,
		minRepeat = 3,
		maxRepeat = 5,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_armor_con"},
				--Wheel_vehicles
				{priority = 0.1, class = UnitClass.Vehicle, unit = "p204_f"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz222a"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "kfz13"},
			},
		}
	},
    {--purchase officer
		waveNumber = 1,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.25,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(ger)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(ger)"},
				{priority = 0.7, class = UnitClass.Infantry, unit = "squad_officer_kubel_con"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_250_3_con"},
			},
		}
	},
	{--purchase  arty
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.55,		
		waveDuration = 3,
	    isHeavyArty = true,		
		Units = {
			["ger"] = {--Germany
		  	    {priority = 1.0, class = UnitClass.ATTank, unit = "210mm_morser18ai"},
		  	    {priority = 1.5, class = UnitClass.ArtilleryTank, unit = "105mm_lefh18ai"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "150mm_sfh18ai"},
			},
		}
	},
	{--purchase  mortar
		waveNumber = 3,
		minRepeat = 1,
		maxRepeat = 3,
	    skipPossible = false,
	    waveDuration = 8,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
				--Howitzers
				{priority = 3.0, class = UnitClass.ArtilleryTank, unit = "120mm_sgrw42"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_sig33ai"},
			},
		}
	},
	{--purchase tank assault group
		waveNumber = 4,
		minRepeat = 4,
		maxRepeat = 6,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
				{priority = 0.7, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "tiger1h"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3n"},
				{priority = 0.9, class = UnitClass.Tank, unit = "panzer3_flamm"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4g"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4h"},
		--Tanks_light
			},
		}
	},
	{--purchase  SPG support
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--SPG
		        {priority = 1.1, class = UnitClass.ArtilleryTank, unit = "stuh42"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sturmpanzer4"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "hetzer"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3f"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g"},
				{priority = 0.9, class = UnitClass.Tank, unit = "grille_m"}
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
			["ger"] = {--Germany
			--Tanks_heavy
				{priority = 0.7, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "tiger1h"},
			--Tanks_medium
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3n"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer3_flamm"},
				{priority = 3.0, class = UnitClass.Tank, unit = "panzer4g"},
				{priority = 3.5, class = UnitClass.Tank, unit = "panzer4h"},
			},
		}
	},
	{--purchase light tank rush
		waveNumber = 7,
		minRepeat = 4,
		maxRepeat = 7,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "blitz3_6_flak30"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz6_2"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 0.7, class = UnitClass.Vehicle, unit = "p204_f"},
				{priority = 2.5, class = UnitClass.Tank, unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz38t_g"},
			},
		}
	},
	{--purchase paratroopers
		waveNumber = 8,
		minRepeat = 4,
		maxRepeat = 8,
		skipPossible = true,
		skipChance = 0.55,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_con"},
			},
		}
	},	
	{--purchase light tank rush
		waveNumber = 9,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
	            {priority = 0.5, class = UnitClass.Tank, unit = "panzer3_flamm"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 10,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 25,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_luftwaffe_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_blau_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_brandenburger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_gebirgsjaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_con(ger)"},
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
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_1(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_2(ger)"},
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
