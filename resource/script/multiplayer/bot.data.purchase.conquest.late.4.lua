Purchases["campaign_capture_the_flag"] = {
	{--purchase 1 starting recon wave
		divisionName = "Elite division (Shock Troops)",
		waveNumber = 1,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sissi_mid_con(fin)"},
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(fin)"},
			},
			["rus"] = {--Russia
			--Infantry Singles
		        {priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},
			},
			["fra"] = {--France
			--Infantry
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine_late(fra)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(fra)"},
			},
			["pol"] = {--Poland
			--Infantry
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_scout_late(pol)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(pol)"},
			},
			["jap"] = {--Japan
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(jap)"},
			},
			["usa"] = {--USA
			--Infantry
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(usa)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(usa)"},		
			},
			["eng"] = {--Britain
			--Infantry
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(eng)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_scout_late(eng)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(eng)"},	
			},
			["ita"] = {--Italy
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(ita)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ita)"},
			}
		}
	},
	{--purchase 7 arty
		waveNumber = 7,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
		
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "155mm_h17ai"},
				{priority = 0.7, class = UnitClass.ArtilleryTank, unit = "203mm_h17ai"},
			--Rocket_Artillery
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_rkh41ai"},
			},
			["rus"] = {--Russia
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bm31_12ai"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "152mm_ml20ai"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "203mm_b4ai"},
			},
			["fra"] = {--France
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "22cm_mortier"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "105_mm_m2a1l_fr"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "155_mm_m1918"},
			},
			["pol"] = {--Poland
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "155mm_wz1917"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "qf25pdr_pol"},
			},
			["jap"] = {--Japan
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_type_38"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "200mm_type_4"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_type_96"},
			},
			["usa"] = {--USA
			--Howitzers				
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "105_mm_m2a1l"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "155_mm_m2"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "203_mm_m115"},
			--SPG
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m12gmc"},
			},
			["eng"] = {--Britain
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m4a4_tulip"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bl72"},
			},
			["ita"] = {--Italy
			--Howitzers	
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "obice_210"},			
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "obice_10017"},
			}
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
			["fin"] = {--finland
			
				{priority = 0.1, class = UnitClass.Infantry, unit = "single_officer(fin)"},
				{priority = 0.1, class = UnitClass.Infantry, unit = "team_officer_con(fin)"},
				{priority = 0.1, class = UnitClass.Infantry, unit = "squad_officer_con(fin)"},
			
			},
			["rus"] = {--russia
			--tanks_heavy
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_officer(rus)"},
				{priority = 0.5, class = UnitClass.Infantry, unit = "squad_officer_con(rus)"},
				-- {priority = 0.2, class = UnitClass.Infantry, unit = "squad_officer_gaz_con"},
			},
			["hun"] = {--hungary
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(hun)"},
			},
			["fra"] = {--france
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(fra)"},
			},
			["pol"] = {--poland
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(pol)"},
			},
			["jap"] = {--japan
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(jap)"},
			},
			["usa"] = {--usa
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(usa)"},
			},
			["eng"] = {--britain
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(eng)"},
			},
			["ita"] = {--italy
				{priority = 1.1, class = UnitClass.Infantry, unit = "single_officer(ita)"},
			}
		}
	},
	{--purchase 2  tank assault group
		waveNumber = 2,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t3485_44_fin"},
			},
			["rus"] = {--Russia
            --Tanks_medium
	            {priority = 1.5, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "is2_44"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3485_44"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
			},
			["fra"] = {--France
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m5a1_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m8_fr"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3_75_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3_76_fr"},
			},
			["pol"] = {--Poland
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa2_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_pol"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_firefly_pol"},
			},
			["jap"] = {--Japan		
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_shinhoto_47mm"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type1_chi-he"},
				{priority = 0.5, class = UnitClass.Tank, unit = "type3_chi-nu2"},
			},
			["usa"] = {--USA,
			--Tanks_medium
				{priority = 0.8, class = UnitClass.Tank, unit = "m4a3_75"},
				{priority = 1.5, class = UnitClass.Tank, unit = "m4a3_zippo"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3e2_jumbo"},
			},
			["eng"] = {--Britain
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_firefly"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.Tank, unit = "churchill_mk_iv"},
				{priority = 1.0, class = UnitClass.Tank, unit = "churchill_mk_vii"},
			},
			["ita"] = {--Italy
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ab41"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3n_ita"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4g_ita"},
			}
		}
	},
	{--purchase 3 infantry support
		waveNumber = 3,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
			
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sissi_mid_con(fin)"},

				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(fin)"},

			
			},
			["rus"] = {--Russia
			--Infantry Singles
		        {priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},
			},
			["fra"] = {--France
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(fra)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade_late(fra)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(fra)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine_late(fra)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(fra)"},
			},
			["pol"] = {--Poland
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(pol)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(pol)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(pol)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(pol)"},
				-- 4
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_scout_late(pol)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(pol)"},
			},
			["jap"] = {--Japan
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(jap)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(jap)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(jap)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(jap)"},
				-- 4
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(jap)"},
			},
			["usa"] = {--USA
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(usa)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(usa)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(usa)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(usa)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(usa)"},	
			},
			["eng"] = {--Britain
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(eng)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(eng)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(eng)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(eng)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(eng)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(eng)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_scout_late(eng)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(eng)"},
			},
			["ita"] = {--Italy
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(ita)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ita)"},
			}
		}
	},
	{--purchase 4 SPG support
		waveNumber = 4,
		-- Repeat = 5,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
			
				{priority = 0.1, class = UnitClass.ATTank, unit = "isu152_fin"},
			},
			["rus"] = {--Russia
			--SPG
                {priority = 2.0, class = UnitClass.ATTank, unit = "isu122s"},
				{priority = 2.0, class = UnitClass.ATTank, unit = "isu152"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "su152"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "su122"},
			},
			["fra"] = {--France
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m4halftrack_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m17_fr"},	
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "m10wolverine_fr"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "m7_fr"}
			},
			["pol"] = {--Poland		
			--SPG
				{priority = 0.1, class = UnitClass.ATTank, unit = "achilles_pol"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sexton_pol"}
			},
			["jap"] = {--Japan
			--SPG
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "type4_ho-ro"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "type5_ho-chi"}
			},
			["usa"] = {--USA
			--Tanks_light
				{priority = 1.0, class = UnitClass.ATTank, unit = "m18"},
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "m36"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m7"}
			},
			["eng"] = {--Britain			
			--SPG
				{priority = 0.6, class = UnitClass.ATTank, unit = "achilles"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m4a3_105_eng"}
			},
			["ita"] = {--Italy		
			--SPG
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m7518"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "m7534"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_ita"}
			}
		}
	},
	{--purchase Emplancement wave
		waveNumber = 5,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
			--Infantry Singles
			
				{priority = 1.5, class = UnitClass.Vehicle, unit = "maxim_m1910_30"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ds39_stand_fin"},
		
				{priority = 1.5, class = UnitClass.AATank, unit = "40mm_itk38b"},
				{priority = 1.5, class = UnitClass.AATank, unit = "75mm_itk37"},
		
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_pstk9738"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "76mm_k36"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_k40"},
			
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "84mm_k18_late"},
		
			},
			["rus"] = {--Russia
           --HMGs
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dshk_aa"},
			--Anti_Aircraft
				{priority = 0.8, class = UnitClass.AATank, unit = "37mm_61k"},
				{priority = 0.8, class = UnitClass.AATank, unit = "85mm_52k"},
			--Anti_Tank
				{priority = 1.0, class = UnitClass.ATTank, unit = "57mm_zis2"},
				{priority = 0.4, class = UnitClass.ATTank, unit = "100mm_bs3"},
			--Infantry_Support
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m43"},
			},
			["fra"] = {--France
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "0_3cal_m1919a4_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "0_5cal_m2hb_fr"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "40_mm_m1_fr"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "57_mm_m1_fr"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "75_mm_m1897a4_fr"},
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "105_mm_m2a1l_fr"},
			},
			["pol"] = {--Poland
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "303_bren_pol"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf40mm_pol"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf6pdr_pol"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_aa_wz36"},
			},
			["jap"] = {--Japan
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "type92_stan"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "20mm_type_2"},	
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_type_41"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_type_4"},
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "105mm_type_92"},
			},
			["usa"] = {--USA
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "0_5cal_m2hb"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "0_5cal_maxson"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "40_mm_m1"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "75_mm_m1"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "76_mm_m5late"},
			},
			["eng"] = {--Britain
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "303_vickers_mki"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "303_bren"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf40mm"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf17pdr"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "qf3,7inch"},
			},
			["ita"] = {--Italy
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "cannone_2065"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "2cm_solothurn"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "cannone_7527"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "obice_7513"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38"},
			}
		}
	},	
	{--purchase 5 Tank 2
		waveNumber = 5,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
		
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t3485_44_fin"},

			},
			["rus"] = {--Russia
            --Tanks_medium
	            {priority = 1.5, class = UnitClass.HeavyTank, unit = "is2_43"},
				{priority = 2.0, class = UnitClass.HeavyTank, unit = "is2_44"},
				{priority = 2.5, class = UnitClass.Tank, unit = "t3485_44"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t3476_43_flame"},
			},
			["fra"] = {--France
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m5a1_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m8_fr"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3_75_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3_76_fr"},
			},
			["pol"] = {--Poland
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa2_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_pol"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "cromwell_mk_iv_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_firefly_pol"},
			},
			["jap"] = {--Japan
			--Tanks_medium
				{priority = 2.5, class = UnitClass.Tank, unit = "type97_shinhoto_120mm"},
				{priority = 1.0, class = UnitClass.Tank, unit = "type2_ho-i"},
				{priority = 0.5, class = UnitClass.Tank, unit = "type3_chi-nu2"},
			},
			["usa"] = {--USA
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "m4a3e2_jumbo_76w"},	
				{priority = 0.8, class = UnitClass.HeavyTank, unit = "m26e4_pershing"},
			},
			["eng"] = {--Britain
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_firefly"},
				{priority = 1.0, class = UnitClass.Tank, unit = "comet_a34"},
			--Tanks_heavy
				{priority = 0.7, class = UnitClass.Tank, unit = "churchill_avre"},
				{priority = 0.7, class = UnitClass.Tank, unit = "black_prince"},
				
			},
			["ita"] = {--Italy
			--Tanks_light
				{priority = 1.0, class = UnitClass.Vehicle, unit = "cv35"},
				{priority = 1.0, class = UnitClass.Tank, unit = "l640"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m1441"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m1542"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3n_ita"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4g_ita"},
			}
		}
	},
	{--purchase 8 paratrooper wave
		waveNumber = 8,
		-- Repeat = 6,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
			
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sissi_mid_con(fin)"},

				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(fin)"},

			},
			["rus"] = {--Russia
			--Infantry Singles
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_rus_paras_con_late"},
			},
			["fra"] = {--France
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(fra)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade_late(fra)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(fra)"},
				-- 5 
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier_late(fra)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine_late(fra)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(fra)"},
				-- 6
			},
			["pol"] = {--Poland
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(pol)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(pol)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(pol)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(pol)"},
				-- 5
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier_late(pol)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_scout_late(pol)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(pol)"},
			},
			["jap"] = {--Japan
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_snlf_jap_con"},
			},
			["usa"] = {--USA
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_airborne_usa_con"},
			},
			["eng"] = {--Britain
			--Infantry
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_airborne_eng_con"},
			},
			["ita"] = {--Italy
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_airborne_ita_con"},
			}
		}
	},	
	{--purchase 9 light tank rush
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
			
				{priority = 0.5, class = UnitClass.Tank, unit = "l62"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt42"},

			},
			["rus"] = {--Russia
			--Wheel_vehicles
					{priority = 3.0, class = UnitClass.Tank, unit = "t60"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t70m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
				{priority = 1.5, class = UnitClass.Tank, unit = "valentine7"},
				{priority = 1.0, class = UnitClass.Tank, unit = "valentine9"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "gaz_aaa_maximx4"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "zis5_dshk"},
			},
			["fra"] = {--France
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3a1_scout_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m20_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dodgewc55_fr"},	
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m4halftrack_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m17_fr"},	
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m5a1_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m8_fr"},
			},
			["pol"] = {--Poland
	
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dingo_pol"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_pol"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound_pol"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa2_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_pol"},
			},
			["jap"] = {--Japan
			
			--Wheel_vehicles
				{priority = 2.5, class = UnitClass.Vehicle, unit = "type93"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "type94aa"},
			--Half_tracks
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "type94_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type97_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type95_ha-go"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_chi-ha"},
			},
			["usa"] = {--USA
		    --Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dodgewc55"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m20"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m16"},											  
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m3_satan"},
			},
			["eng"] = {--Britain
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dingo"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_eng"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "humber"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "mk2daimler"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa2"},
			},
			["ita"] = {--Italy
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ab41"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "autocannone10017"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m1441"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m1542"},
			}
		}
	},
	{--purchase 6 infantry attack 2
		waveNumber = 6,
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
		
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border_jag_mid_con(fin)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sissi_mid_con(fin)"},

				{priority = 1.5, class = UnitClass.ATInfantry, unit = "squad_at_late_con(fin)"},

			},
			["rus"] = {--Russia
			--Infantry Singles
		        {priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_assaultsappers_flame_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_pzs_late_con(rus)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at_late_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_marines_con(rus)"},
			},
			["fra"] = {--France
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(fra)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade_late(fra)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(fra)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine_late(fra)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(fra)"},
			},
			["pol"] = {--Poland
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(pol)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(pol)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(pol)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(pol)"},
				-- 4
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_scout_late(pol)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(pol)"},
			},
			["jap"] = {--Japan
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(jap)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(jap)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(jap)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(jap)"},
				-- 4
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(jap)"},
			},
			["usa"] = {--USA
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(usa)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(usa)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(usa)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(usa)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine(usa)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(usa)"},	
			},
			["eng"] = {--Britain
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(eng)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(eng)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(eng)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(eng)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(eng)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_sniper(eng)"},
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_scout_late(eng)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(eng)"},
			},
			["ita"] = {--Italy
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(ita)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ita)"},
			}
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
			["hun"] = {--Hungary
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_sturmtrooper(hun)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_mg(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_sniper(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mortar(hun)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(hun)"},	
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_at(hun)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_bazooker(hun)"},
			--Automatic_weaponry
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "7_5cm_pak97_38_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "8cm_bofors_29m"},
			--Howitzers
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "8cm_feldkanone"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_37m"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "10cm_feldhaubtize"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "krupp_mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba40m"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "csaba39m"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "toldi1_rocket"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
				{priority = 1.0, class = UnitClass.AATank, unit = "nimrod"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2_late"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan3"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3m_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4h_hun"},
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "pz6e_hun"},
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai(fin)"},
				{priority = 0.7, class = UnitClass.Infantry, unit = "squad_heavy_engineer_mid_con_ai(fin)"},			},
			["rus"] = {--Russia
            	{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_1(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_engineer_ai_2(rus)"},
			},
			["fra"] = {--France
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m20_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m17_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "laffly_s15_toe"},
				{priority = 1.0, class = UnitClass.Tank, unit = "laffly_v15t_mg"},	
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "amr35-13mm"},
				{priority = 1.0, class = UnitClass.Tank, unit = "amr35-25mm"},
			},
			["pol"] = {--Poland
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "vickersedw"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "tks-mg"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound_pol"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "wz34"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "cromwell_mk_iv_pol"},
			},
			["jap"] = {--Japan
			--Wheel_vehicles
				{priority = 2.5, class = UnitClass.Vehicle, unit = "type93"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "type94aa"},
			--Half_tracks
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "type94_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type97_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type95_ha-go"},
			},
			["usa"] = {--USA
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "willysmb"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "willys50"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3a1_scout"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m20"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m16"},											  
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "t30hmc"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m22"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m3_stuart"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m3_satan"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m5a1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m8"},
			},
			["eng"] = {--Britain
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dingo"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_eng"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "humber"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "mk2daimler"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound"},
			},
			["ita"] = {--Italy
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ab41"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "autocannone10017"},
			}
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
