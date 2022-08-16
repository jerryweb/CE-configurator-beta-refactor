Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Tank division",
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
	{--purchase howtizer
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.45,
	    isHeavyArty = true,		
		waveDuration = 7,
		Units = {
			["ger"] = {--Germany
		       	{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "105mm_lefh18ai"},
			   	{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_sfh18ai"},
			},
		}
	},
	{--purchase  tank assault group
		waveNumber = 3,
		minRepeat = 4,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
				{priority = 1.1, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 1.3, class = UnitClass.HeavyTank, unit = "tiger1h"},
			--Tanks_medium
				{priority = 1.4, class = UnitClass.Tank, unit = "panzer3j"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3j1"},
				{priority = 1.2, class = UnitClass.Tank, unit = "panzer3l"},
				{priority = 1.4, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.2, class = UnitClass.Tank, unit = "panzer4d"},
				{priority = 1.2, class = UnitClass.Tank, unit = "panzer4f1"},
				{priority = 1.4, class = UnitClass.Tank, unit = "panzer4f2"},
				{priority = 1.3, class = UnitClass.Tank, unit = "panzer4g"},
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer2c"},
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 0.7, class = UnitClass.Tank, unit = "panzer35t"},
				{priority = 1.2, class = UnitClass.Tank, unit = "pz38t_a"},
				{priority = 1.2, class = UnitClass.Tank, unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz38t_g"},
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
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
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
			["ger"] = {--Germany
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3f"},
				{priority = 2.0, class = UnitClass.ATTank, unit = "stug3g"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "stuh42"},
			--SPG
				{priority = 0.8, class = UnitClass.ArtilleryTank, unit = "sturmpanzer4"},
				{priority = 0.8, class = UnitClass.ArtilleryTank, unit = "bison"},
				{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "sig33b"},
				{priority = 0.1, class = UnitClass.ArtilleryTank, unit = "sturmtiger"},
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
			["ger"] = {--Germany
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger1h"},
			--Tanks_medium
				{priority = 3.5, class = UnitClass.Tank, unit = "panzer3j"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3j1"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3l"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4d"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4f1"},
				{priority = 3.0, class = UnitClass.Tank, unit = "panzer4f2"},
				{priority = 3.0, class = UnitClass.Tank, unit = "panzer4g"},
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer2c"},
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 0.7, class = UnitClass.Tank, unit = "panzer35t"},
				{priority = 1.2, class = UnitClass.Tank, unit = "pz38t_a"},
				{priority = 1.2, class = UnitClass.Tank, unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz38t_g"},
			},
		}
	},
	{--purchase  aa support
		waveNumber = 7,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 3,
		Units = {
			["ger"] = {--Germany
		  	    {priority = 1.0, class = UnitClass.AATank, unit = "20mm_flak30"},
				{priority = 0.8, class = UnitClass.AATank, unit = "37mm_flak37"},
				{priority = 0.8, class = UnitClass.AATank, unit = "50mm_flak41"},
				{priority = 0.5, class = UnitClass.AATank, unit = "88mm_flak18"},
				{priority = 0.8, class = UnitClass.AATank, unit = "sdkfz6_2"},
				{priority = 0.7, class = UnitClass.AATank, unit = "sdkfz10_4"},
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
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
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
