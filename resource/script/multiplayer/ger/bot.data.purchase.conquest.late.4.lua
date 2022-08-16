Purchases["campaign_capture_the_flag"] = {
	{--purchase starting recon wave
		divisionName = "Elite division (Shock Troops)",
		waveNumber = 0,
		minRepeat = 5,
		maxRepeat = 7,
		skipPossible = false,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_brandenburger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
			},
		}
	},
	{--purchase arty
		waveNumber = 1,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = true,		
		waveDuration = 5,
		isHeavyArty = true,	
		Units = {
			["ger"] = {--Germany
		        {priority = 3.0, class = UnitClass.ArtilleryTank, unit = "300mm_nebelwerfer42ai"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "210mm_morser18ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_sfh18ai"},
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
				-- {priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_250_3_con"},
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
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "tiger1hunt"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger2p"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "panzer5g"},
				{priority = 1.8, class = UnitClass.Tank, unit = "panzer4h"},
			},
		}
	},
	{--purchase infantry support
		waveNumber = 4,
		minRepeat = 4,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_brandenburger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
			},
		}
	},
	{--purchase SPG support
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["ger"] = {--Germany
			--SPG
			    {priority = 0.5, class = UnitClass.ATTank, unit = "ferdinand"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "jagdpanther"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "sturmtiger"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sturmpanzer4"},
			},
		}
	},
	{--purchase Emplancement wave
		waveNumber = 6,
		minRepeat = 1,
		maxRepeat = 1,
	    skipPossible = true,
	    waveDuration = 10,
	    isHeavyArty = true,
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
	{--purchase Tank 2
		waveNumber = 7,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "tiger1hunt"},
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger2p"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "panzer5a"},
				{priority = 1.5, class = UnitClass.HeavyTank, unit = "panzer5g"},
				{priority = 1.8, class = UnitClass.Tank, unit = "panzer4h"},
			},
		}
	},
	{--purchase paratrooper wave
		waveNumber = 7,
		minRepeat = 4,
		maxRepeat = 8,
		skipPossible = true,
		skipChance = 0.6,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_para_con_late"},
			},
		}
	},	
	{--purchase light tank rush
		waveNumber = 9,
		minRepeat = 4,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2l"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz222a"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "kfz13"},
			},
		}
	},
	{--purchase infantry attack 2
		waveNumber = 10,
		minRepeat = 4,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_brandenburger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(ger)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
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
