Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Tank division",
		waveNumber = 0,
		minRepeat = 3,
		maxRepeat = 6,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				--Wheel_vehicles
				{priority = 0.1, class = UnitClass.Vehicle, unit = "p204_f"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz222a"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "kfz13"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "sdkfz250a_11"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
			},
		}
	},
	{--purchase arty
		waveNumber = 1,
		minRepeat = 1,
		maxRepeat = 1,
        skipPossible = true,
	    skipChance = 0.6,
	    isHeavyArty = true,	
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "105mm_sk18ai"},
		       	{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "150mm_sfh18ai"},
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
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(ger)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(ger)"},
				-- {priority = 0.7, class = UnitClass.Infantry, unit = "squad_officer_kubel_con"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_250_3_con"},
			},
		}
	},
	{--purchase tank assault group
		waveNumber = 3,
		minRepeat = 6,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 11,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
			    {priority = 1.2, class = UnitClass.HeavyTank, unit = "panzer5a"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5g"},
				{priority = 1.2, class = UnitClass.HeavyTank, unit = "tiger1e"},
				{priority = 1.2, class = UnitClass.HeavyTank, unit = "tiger1h"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger1hunt"},
				{priority = 1.2, class = UnitClass.HeavyTank, unit = "tiger2h"},
			--Tanks_medium
			    {priority = 0.7, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.2, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 0.7, class = UnitClass.Tank, unit = "panzer3n"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 4,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 30,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 11,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.1, class = UnitClass.ATTank, unit = "stug3g_late"},
				{priority = 1.1, class = UnitClass.Tank, unit = "grille_m"},
				{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "stuh42"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sturmpanzer4"},
				{priority = 0.8, class = UnitClass.ArtilleryTank, unit = "sturmtiger"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "jagdpanther"}
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 6,
		minRepeat = 4,
		maxRepeat = 7,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
			    {priority = 1.2, class = UnitClass.HeavyTank, unit = "panzer5a"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5g"},
				{priority = 1.2, class = UnitClass.HeavyTank, unit = "tiger1e"},
				{priority = 1.2, class = UnitClass.HeavyTank, unit = "tiger1h"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger1hunt"},
				{priority = 1.2, class = UnitClass.HeavyTank, unit = "tiger2h"},
			--Tanks_medium
			    {priority = 1.0, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.8, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3n"},
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
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
				{priority = 3.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz6_2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
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
