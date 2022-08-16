Purchases["campaign_capture_the_flag"] = {
	{--purchase 1 paratrooper wave
		divisionName = "Airborne Division",
		waveNumber = 1,
		minRepeat = 8,
		maxRepeat = 12,
		skipPossible = true,
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
				--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_fallschirmjaeger_para_con_late"},
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
				{priority = 0.7, class = UnitClass.Infantry, unit = "squad_officer_kubel_con"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_250_3_con"},
			},
		}
	},
	{--purchase 2  mortar
		waveNumber = 2,
		minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 10,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
				--Howitzers
			    {priority = 2.0, class = UnitClass.ArtilleryTank, unit = "120mm_sgrw42"},
			    {priority = 2.0, class = UnitClass.ArtilleryTank, unit = "200mm_ldgw40"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "sdkfz251c_2"},
			},
		}
	},
	{--purchase 9 rocket arty
		waveNumber = 9,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = true,
	    skipChance = 0.45,		
		waveDuration = 5,
		isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
		        {priority = 0.6, class = UnitClass.ArtilleryTank, unit = "300mm_nebelwerfer42ai"},
		        {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "210mm_nebelwerfer42ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_nebelwerfer41ai"},
			},
		}
	},
	{--purchase 3 tank assault group
		waveNumber = 3,
	    -- Repeat = 6,
		minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 10,
		Units = {
			["ger"] = {--Germany
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "tiger1e"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3n"},
				{priority = 2.0, class = UnitClass.Tank, unit = "panzer4g"},
				{priority = 2.5, class = UnitClass.Tank, unit = "panzer4h"},
			--Tanks_light
				{priority = 0.6, class = UnitClass.Tank, unit = "panzer2f"},
			--SPG
			},
		}
	},
	{--purchase  4 Emplancement wave
		waveNumber = 4,
		minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = false,
	    waveDuration = 10,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
				--HMGs
					{priority = 1.1, class = UnitClass.Vehicle, unit = "mg42_lafette"},
				--Anti_Aircraft
					{priority = 1.0, class = UnitClass.AATank, unit = "37mm_flak37"},
					{priority = 1.0, class = UnitClass.AATank, unit = "50mm_flak41"},
					{priority = 0.5, class = UnitClass.AATank, unit = "88mm_flak36"},
				--Anti_Tank
					{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_pak40"},
				--Infantry_Support
					{priority = 1.1, class = UnitClass.ArtilleryTank, unit = "75mm_lg40"},
					{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "150mm_sig33ai"},
			},
		}
	},
	{--purchase 5 infantry support
		waveNumber = 5,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
			    {priority = 1.5, class = UnitClass.Infantry, unit = "squad_jaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_luftwaffe_con(ger)"},
				
			},
		}
	},
	{--purchase 6 SPG support
		waveNumber = 6,
		-- Repeat = 5,
		minRepeat = 1,
		maxRepeat = 2,
        skipPossible = false,		
		waveDuration = 40,
		Units = {
			["ger"] = {--Germany
			--SPG
		     		{priority = 1.5, class = UnitClass.ATTank, unit = "stug3g_late"},
					{priority = 1.5, class = UnitClass.ATTank, unit = "hetzer"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sturmpanzer4"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder3m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "stuh42"},
			},
		}
	},
	{--purchase 7 Tank 2
		waveNumber = 7,
		-- Repeat = 5,
		minRepeat = 2,
		maxRepeat = 6,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
				{priority = 0.8, class = UnitClass.HeavyTank, unit = "tiger1e"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer3m"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 1.5, class = UnitClass.Tank, unit = "panzer4j"},
			--Tanks_light
				{priority = 0.9, class = UnitClass.Tank, unit = "panzer2f"},
			--SPG
			},
		}
	},
	{--purchase 8 infantry attack 2
		waveNumber = 8,
		-- Repeat = 10,
		minRepeat = 6,
		maxRepeat = 11,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
			    {priority = 1.5, class = UnitClass.Infantry, unit = "squad_jaeger_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_luftwaffe_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_at_late_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_riflegrenade(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(ger)"},
			},
		}
	},
	{--purchase 10 light tank rush
		waveNumber = 10,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz6_2"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2l"},
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
