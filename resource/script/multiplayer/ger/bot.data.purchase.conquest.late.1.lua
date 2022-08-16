Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Generic division",
		waveNumber = 0,
		minRepeat = 2,
		maxRepeat = 5,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_armor_con"},
			--Wheel_vehicles
				{priority = 5.1, class = UnitClass.Vehicle, unit = "p204_f"},
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
	    skipChance = 0.35,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(ger)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(ger)"},
				-- {priority = 0.7, class = UnitClass.Infantry, unit = "squad_officer_kubel_con"},
				-- {priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_250_3_con"},
			},
		}
	},
	{--purchase arty
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.4,
	    isHeavyArty = true,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
		        {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_nebelwerfer41ai"},
		        {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_sfh18ai"},
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
			["ger"] = {--Germany
				--Howitzers
			    {priority = 2.0, class = UnitClass.ArtilleryTank, unit = "120mm_sgrw42"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "sdkfz251c_2"},
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
			["ger"] = {--Germany
			--Tanks_heavy
				-- {priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5a"},
				-- {priority = 2.0, class = UnitClass.HeavyTank, unit = "panzer5g"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger1h"},
				-- {priority = 1.5, class = UnitClass.HeavyTank, unit = "tiger1e"},
				-- {priority = 0.1, class = UnitClass.HeavyTank, unit = "tiger1hunt"},
				-- {priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger2h"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3n"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4g"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4h"},
			--Tanks_light
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer2f"},
			--SPG
			},                                            
		}
	},
	{--purchase infantry support
		waveNumber = 5,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_blau_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_gebirgsjaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
			},
		}
	},
	{--purchase Emplancement wave
		waveNumber = 6,
		minRepeat = 1,
		maxRepeat = 1,
	    skipPossible = true,
	    waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--HMGs
				{priority = 1.0, class = UnitClass.Vehicle, unit = "mg42_lafette"},
			--Anti_Aircraft
				{priority = 0.9, class = UnitClass.AATank, unit = "37mm_flak37"},
				{priority = 0.8, class = UnitClass.AATank, unit = "50mm_flak41"},
				{priority = 0.5, class = UnitClass.AATank, unit = "88mm_flak36"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_pak40"},
			--Infantry_Support
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "75mm_leig18"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "150mm_sig33ai"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 7,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["ger"] = {--Germany
			--SPG
		        {priority = 0.5, class = UnitClass.ATTank, unit = "stug3g_late"},
				{priority = 2.5, class = UnitClass.ATTank, unit = "hetzer"},
				{priority = 0.7, class = UnitClass.Tank, unit = "grille_m"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "stuh42"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sturmpanzer4"},
			},
		}
	},
	{--purchase Tank 2
		waveNumber = 8,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
				-- {priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "panzer5a"},
				-- {priority = 2.0, class = UnitClass.HeavyTank, unit = "panzer5g"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger1h"},
				-- {priority = 1.5, class = UnitClass.HeavyTank, unit = "tiger1e"},
				-- {priority = 0.1, class = UnitClass.HeavyTank, unit = "tiger1hunt"},
				-- {priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger2h"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3n"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4g"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4h"},
			--Tanks_light
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer2f"},
			--SPG
			},
		}
	},
	{--purchase light tank rush
		waveNumber = 9,
		minRepeat = 2,
		maxRepeat = 5,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 2.5, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "blitz3_6_flak30"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz6_2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 0.1, class = UnitClass.Vehicle, unit = "p204_f"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 10,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_gebirgsjaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_riflegrenade(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_sniper(ger)"},
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
