Purchases["campaign_capture_the_flag"] = {
	{--purchase 1 LIGHT TANK DIVISION
		divisionName = "LIGHT TANK DIVISION",
		waveNumber = 1, -- какая по порядку будет
		minRepeat = 2,
		maxRepeat = 4,
		skipPossible = false,  -- ничего не делает
		waveDuration = 20, -- длительность того, как долго бот будет вызывать данные войска. Каждый юнит вызывается каждые 3 секунды. Если нужно чтобы было только определенное количество то Repeat * 3 < Wave duration  При этом Repeat говорит сколько раз нужно вызвать юнит.
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "kubelwagen_mg"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz222a"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "kfz13"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "sdkfz231"},
			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_armor_con"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_sicherung_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
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
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_civil_guard_early_con(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_early_con(fin)"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba10"},
				{priority = 0.1, class = UnitClass.Vehicle, unit = "l182"},

			},
			["rus"] = {--Russia
			--Infantry Singles
			    {priority = 2.5, class = UnitClass.Infantry, unit = "squad_recon_con(rus)"},
		        {priority = 1.0, class = UnitClass.Infantry, unit = "squad_border(rus)"},
			--Wheel_vehicles
				{priority = 1.5, class = UnitClass.Vehicle, unit = "gaz67b"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "m72"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ba6"},
				{priority = 1.5, class = UnitClass.Vehicle, unit = "ba20"},
			},
			["fra"] = {--France
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m20_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "panhard"},
			},
			["pol"] = {--Poland
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dingo_pol"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_pol"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound_pol"},
			},
			["jap"] = {--Japan
			--Wheel_vehicles
				{priority = 2.5, class = UnitClass.Vehicle, unit = "type93"},
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
			},
			["eng"] = {--Britain
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dingo"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_eng"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "humber"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "mk2daimler"},
			},
			["ita"] = {--Italy
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ab41"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Vehicle, unit = "cv35"},
			}
		}
	},
	{--purchase 2 tank assault group
		waveNumber = 2,
	    minRepeat = 4,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 0.7, class = UnitClass.Tank, unit = "panzer1b"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2c"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer35t"},
				{priority = 1.5, class = UnitClass.Tank, unit = "pz38t_a"},
				{priority = 0.5, class = UnitClass.Tank, unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4d"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3e"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3j"},
				{priority = 0.5, class = UnitClass.Tank, unit = "pz38h_735"},

				{priority = 0.7, class = UnitClass.Tank, unit = "panzer35s"},

				{priority = 0.6, class = UnitClass.HeavyTank, unit = "panzerb2"},
			},
			["hun"] = {--Hungary
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
			},
			["fin"] = {--Finland
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "t37a_fin"},
				{priority = 0.6, class = UnitClass.Tank, unit = "ft17_mg_fin"},
				{priority = 0.6, class = UnitClass.Tank, unit = "ft17_fin"},
				{priority = 1.0, class = UnitClass.Tank, unit = "vickers_6t_altb"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t26e"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t26_33_fin"},
				{priority = 0.1, class = UnitClass.Tank, unit = "kht130_fin"},
				{priority = 0.6, class = UnitClass.Tank, unit = "t50_fin"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt5_fin"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt42"},
			--Tanks_medium
				{priority = 0.5, class = UnitClass.Tank, unit = "t28_38_fin"},
			--Tanks_heavy
				{priority = 0.2, class = UnitClass.HeavyTank, unit = "kv1_42_fin"},
			},
			["rus"] = {--Russia
            --Tanks_light			
				{priority = 1.1, class = UnitClass.Tank, unit = "t37a"},
				{priority = 0.1, class = UnitClass.Tank, unit = "bt2"},
				{priority = 1.5, class = UnitClass.Tank, unit = "bt5"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t60"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t3476_40"},
				{priority = 0.2, class = UnitClass.HeavyTank, unit = "t35_late"},
				{priority = 0.2, class = UnitClass.HeavyTank, unit = "t28e"},
				{priority = 0.1, class = UnitClass.HeavyTank, unit = "kv1_39"},
			},
			["fra"] = {--France				
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "r35"},
				{priority = 1.0, class = UnitClass.Tank, unit = "h39"},				
				{priority = 1.0, class = UnitClass.Tank, unit = "char_d2"},
			--Tanks_heavy	
				{priority = 1.0, class = UnitClass.Tank, unit = "b1bis"},										
			},
			["pol"] = {--Poland							
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "7tp"},
				{priority = 1.0, class = UnitClass.Tank, unit = "r35_pol"},												
			},
			["jap"] = {--Japan
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "type94_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type97_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type95_ha-go"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_chi-ha"},
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_shinhoto_47mm"},
				{priority = 2.5, class = UnitClass.Tank, unit = "type97_shinhoto_120mm"},
			},
			["usa"] = {--USA
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m22"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m3_stuart"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m5a1"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m3lee"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a1"},	
			},
			["eng"] = {--Britain
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa1"},
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_mki"},
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_mk6"},
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
	{--purchase 3 mortar
		waveNumber = 3,
	    minRepeat = 1,
		maxRepeat = 1,
	    skipPossible = false,
	    waveDuration = 5,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
				--Howitzers
				-- {priority = 2.0, class = UnitClass.ATTank, unit = "80mm_sgrw34"},
			},
			["hun"] = {--Hungary
			},
			["fin"] = {--Finland
			},
			["rus"] = {--Russia
			--Howitzers
				-- {priority = 2.0, class = UnitClass.ATTank, unit = "82mm_bm37"},
			},
			["fra"] = {--France
			--Howitzers
				-- {priority = 0.8, class = UnitClass.ArtilleryTank, unit = "81_mm_m1_fr"},
			},
			["pol"] = {--Poland
			--Howitzers
				-- {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_pol"},
			},
			["jap"] = {--Japan
			--Howitzers
				-- {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_jap"},
			},
			["usa"] = {--USA
			--Howitzers			
                -- {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81_mm_m1"},
			},
			["eng"] = {--Britain
			--Howitzers
				-- {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "76mm_mk_ii"},
			},
			["ita"] = {--Italy
			--Howitzers	
				-- {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_ita"},				
			}
		}
	},
	{--purchase 4 infantry support
		waveNumber = 4,
		minRepeat = 5,
		maxRepeat = 10,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_osttruppen_con(ger)"},
				{priority = 0.75, class = UnitClass.Infantry, unit = "squad_strafbatallion_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_luftwaffe_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_sicherung_con(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
					-- {priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(ger)"},
				-- {priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(ger)"},	
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_blau_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
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
			
			},
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at(fin)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_sniper(fin)"},
			
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_civil_guard_early_con(fin)"},
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifle_lmg_early_con(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_early_con(fin)"},
				
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_border_guard_early_con(fin)"},
				
			},
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_partisan_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_penal_con(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_conscripts_con(rus)"},
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				-- {priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(rus)"},
				-- {priority = 1.5, class = UnitClass.ATInfantry, unit = "single_riflegrenade(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_mountainrifles_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
		    },
			["fra"] = {--France
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mg_late(fra)"},				
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade_late(fra)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},								
			},
			["pol"] = {--Poland
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(pol)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(pol)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_mg_late(pol)"},				
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(pol)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
			},
			["jap"] = {--Japan
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light(jap)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(jap)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(jap)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
			},
			["usa"] = {--USA
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light(usa)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(usa)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(usa)"},
			},
			["eng"] = {--Britain
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(eng)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(eng)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_mg_late(eng)"},				
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(eng)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(eng)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(eng)"},
			},
			["ita"] = {--Italy
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(ita)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ita)"},
			}
		}
	},
	{--purchase 5 SPG support
		waveNumber = 5,
		minRepeat = 1,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 0.5, class = UnitClass.ATTank, unit = "panzerjager1"},
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3b"},
			},
			["hun"] = {--Hungary
			--SPG				
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder2_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "hetzer_hun"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_hun"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "zrinyi2"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "zrinyi1"}
			},
			["fin"] = {--Finland
			--Tanks_light
				{priority = 0.8, class = UnitClass.Tank, unit = "l62"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt42"},
			--SPG
				{priority = 0.1, class = UnitClass.ATTank, unit = "stug3g_fin"},
			},
			["rus"] = {--Russia
			--SPG
				{priority = 0.1, class = UnitClass.ATTank, unit = "zis30"},
				{priority = 0.5, class = UnitClass.Tank, unit = "bt7a"},
			},
			["fra"] = {--France
				{priority = 0.7, class = UnitClass.ArtilleryTank, unit = "bs-75"},							
			},
			["pol"] = {--Poland			
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "pf621_75mm"},			
			},
			["jap"] = {--Japan								
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "type1_ho-ni1"},
				{priority = 2.0, class = UnitClass.ArtilleryTank, unit = "type1_ho-ni2"},
			},
			["usa"] = {--USA
			--SPG
				{priority = 1.0, class = UnitClass.Vehicle, unit = "t12gmc"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "t30hmc"},
			},
			["eng"] = {--Britain		
			--SPG
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sexton"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m4a3_105_eng"}
			},
			["ita"] = {--Italy	
			--SPG
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m7518"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "m7534"},
			}
		}
	},
	{--purchase 6 Tank 2
		waveNumber = 6,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 20,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 0.7, class = UnitClass.Tank, unit = "panzer1b"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2c"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer35t"},
				{priority = 1.5, class = UnitClass.Tank, unit = "pz38t_a"},
				{priority = 0.5, class = UnitClass.Tank, unit = "pz38t_f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4d"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3e"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3f"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer3j"},
				{priority = 0.5, class = UnitClass.Tank, unit = "pz38h_735"},
				{priority = 0.7, class = UnitClass.Tank, unit = "panzer35s"},

				{priority = 0.6, class = UnitClass.HeavyTank, unit = "panzerb2"},
			},
			["hun"] = {--Hungary
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "toldi1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pzkpfw38t_hun"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "turan1"},
				{priority = 1.0, class = UnitClass.Tank, unit = "turan2"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4f_hun"},
			},
			["fin"] = {--Finland
			--Tanks_light
				{priority = 0.5, class = UnitClass.Tank, unit = "t37a_fin"},
				{priority = 1.0, class = UnitClass.Tank, unit = "vickers_6t_altb"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t26e"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t26_33_fin"},
				{priority = 0.1, class = UnitClass.Tank, unit = "kht130_fin"},
				{priority = 0.6, class = UnitClass.Tank, unit = "t50_fin"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt5_fin"},
				{priority = 1.0, class = UnitClass.Tank, unit = "bt42"},
				{priority = 0.1, class = UnitClass.Tank, unit = "valentine2"},
			--Tanks_heavy
				{priority = 0.2, class = UnitClass.HeavyTank, unit = "kv1_42_fin"},
			},
			["rus"] = {--Russia
            --Tanks_light			
				{priority = 1.1, class = UnitClass.Tank, unit = "t37a"},
				{priority = 0.1, class = UnitClass.Tank, unit = "bt2"},
				{priority = 1.5, class = UnitClass.Tank, unit = "bt5"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 1.5, class = UnitClass.Tank, unit = "t60"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t3476_40"},
				{priority = 0.2, class = UnitClass.HeavyTank, unit = "t35_late"},
				{priority = 0.2, class = UnitClass.HeavyTank, unit = "t28e"},
				{priority = 0.1, class = UnitClass.HeavyTank, unit = "kv1_39"},
			},
			["fra"] = {--France				
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "r35"},
				{priority = 1.0, class = UnitClass.Tank, unit = "h39"},				
				{priority = 1.0, class = UnitClass.Tank, unit = "char_d2"},
			--Tanks_heavy	
				{priority = 1.0, class = UnitClass.Tank, unit = "b1bis"},										
			},
			["pol"] = {--Poland							
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "7tp"},
				{priority = 1.0, class = UnitClass.Tank, unit = "r35_pol"},												
			},
			["jap"] = {--Japan
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "type94_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type97_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type95_ha-go"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_chi-ha"},
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_shinhoto_47mm"},
				{priority = 2.5, class = UnitClass.Tank, unit = "type97_shinhoto_120mm"},
			},
			["usa"] = {--USA
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m22"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m3_stuart"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m5a1"},
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m3lee"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a1"},	
			},
			["eng"] = {--Britain
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa1"},
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_mki"},
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_mk6"},
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
	{--purchase 7 infantry attack 2
		waveNumber = 7,
		minRepeat = 4,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 35,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_osttruppen_con(ger)"},
				{priority = 0.75, class = UnitClass.Infantry, unit = "squad_strafbatallion_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_luftwaffe_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_sicherung_con(ger)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_con(ger)"},
					-- {priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(ger)"},
				-- {priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(ger)"},	
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular_vet_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_blau_con(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(ger)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_pionier_con(ger)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
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
			
			},
			["fin"] = {--Finland
			--Infantry Singles
				{priority = 1.5, class = UnitClass.ATInfantry, unit = "single_at(fin)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "single_sniper(fin)"},
			
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_civil_guard_early_con(fin)"},
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifle_lmg_early_con(fin)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifle_early_con(fin)"},
				
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_border_guard_early_con(fin)"},
				
			},
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_partisan_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_penal_con(rus)"},

				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_border(rus)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_conscripts_con(rus)"},
				{priority = 2.5, class = UnitClass.Infantry, unit = "squad_rifleunit_alt_con(rus)"},
				-- {priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at(rus)"},
				-- {priority = 1.5, class = UnitClass.ATInfantry, unit = "single_riflegrenade(rus)"},
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_rifleunit_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_mountainrifles_con(rus)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_guardsrifle_con(rus)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_guards_smg_con(rus)"},
		    },
			["fra"] = {--France
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mg_late(fra)"},				
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(fra)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade_late(fra)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},								
			},
			["pol"] = {--Poland
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(pol)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(pol)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_mg_late(pol)"},				
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(pol)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
			},
			["jap"] = {--Japan
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light(jap)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(jap)"},
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(jap)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(jap)"},
			},
			["usa"] = {--USA
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light(usa)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(usa)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(usa)"},
			},
			["eng"] = {--Britain
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_light_late(eng)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(eng)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_mg_late(eng)"},				
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(eng)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(eng)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(eng)"},
			},
			["ita"] = {--Italy
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_light(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(ita)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ita)"},
			}
		}
	},
	{--purchase 8 light tank rush
		waveNumber = 8,
		minRepeat = 6,
		maxRepeat = 8,
        skipPossible = false,		
		waveDuration = 10,
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
			{priority = 0.7, class = UnitClass.Tank, unit = "panzer1b"},
				{priority = 2.0, class = UnitClass.Tank, unit = "panzer2c"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer2f"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer35t"},
				{priority = 2.5, class = UnitClass.Tank, unit = "pz38t_a"},
				{priority = 0.5, class = UnitClass.Tank, unit = "pz38t_f"},
				{priority = 0.1, class = UnitClass.Tank, unit = "pz38h_735"},
				{priority = 1.5, class = UnitClass.Tank, unit = "pz35t"},
			},
			["hun"] = {--Hungary
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
			},
			["fin"] = {--Finland
				--Tanks_light
					{priority = 1.5, class = UnitClass.Vehicle, unit = "t20_fin"},
					{priority = 0.5, class = UnitClass.Tank, unit = "t37a_fin"},
					{priority = 0.5, class = UnitClass.Tank, unit = "ft17_mg_fin"},
					{priority = 0.5, class = UnitClass.Tank, unit = "ft17_fin"},
					{priority = 1.0, class = UnitClass.Tank, unit = "vickers_6t_altb"},
					{priority = 1.0, class = UnitClass.Tank, unit = "t26e"},
					{priority = 1.0, class = UnitClass.Tank, unit = "t26_33_fin"},
					{priority = 0.5, class = UnitClass.Tank, unit = "kht130_fin"}
			},
			["rus"] = {--Russia
            --Tanks_light			
			   {priority = 0.5, class = UnitClass.Tank, unit = "t26_31"},
				{priority = 1.0, class = UnitClass.Tank, unit = "t26_33"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t26_39"},
				{priority = 2.0, class = UnitClass.Tank, unit = "t37a"},
				{priority = 0.1, class = UnitClass.Tank, unit = "bt2"},
				{priority = 2.5, class = UnitClass.Tank, unit = "bt5"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t40"},
				{priority = 3.0, class = UnitClass.Tank, unit = "t60"},
			},
			["fra"] = {--France											
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "amr35-13mm"},
				{priority = 1.0, class = UnitClass.Tank, unit = "amr35-25mm"},															
			},
			["pol"] = {--Poland								
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "wz34"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "tks-20mm"},
				{priority = 1.0, class = UnitClass.Tank, unit = "tks-mg"},				
				{priority = 1.0, class = UnitClass.Tank, unit = "vickersejw"},
				{priority = 1.0, class = UnitClass.Tank, unit = "vickersedw"},									
			},
			["jap"] = {--Japan
			--Wheel_vehicles
				{priority = 2.5, class = UnitClass.Vehicle, unit = "type93"},
				{priority = 2.5, class = UnitClass.Vehicle, unit = "type1_ho-ki_mg"},				
				{priority = 1.0, class = UnitClass.Vehicle, unit = "type94aa"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "type94_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type97_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type95_ha-go"},
			},
			["usa"] = {--USA
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3a1_scout"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m20"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m16"},											  
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound"},
			},
			["eng"] = {--Britain				
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dingo"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_eng"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "humber"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "mk2daimler"},
			},
			["ita"] = {--Italy
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ab41"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "autocannone10017"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Vehicle, unit = "cv35"},
			}
		}
	},
	{--purchase 9 field gun support
		waveNumber = 9,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 8,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, unit = "37mm_pak36"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "75mm_leig18"},
			},
			["hun"] = {--Hungary
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_bofors_36m"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "4cm_40m"},
				
			},
			["fin"] = {--Finland
			--Anti_Tank
				{priority = 2.0, class = UnitClass.ATTank, unit = "76mm_k02"},
			--Infantry_Support
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "76mm_m1927_fin"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "84mm_k18"},
			},
			["rus"] = {--Russia
			--SPG
				{priority = 1.5, class = UnitClass.ATTank, unit = "45mm_m37"},
				{priority = 1.5, class = UnitClass.ArtilleryTank, unit = "76mm_m1927"},
			},
			["fra"] = {--France
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "13mm_hotchkiss"},				
				{priority = 1.0, class = UnitClass.ATTank, unit = "40_mm_m1_fr"},								
			},
			["pol"] = {--Poland							
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "20mm_fka"},			
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf2pdr_pol"},
			},
			["jap"] = {--Japan
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "20mm_type_2"},	
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_type_38"},
			},
			["usa"] = {--USA
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "0_5cal_maxson"},
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "75_mm_m1897a4"},	
			},
			["eng"] = {--Britain
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf40mm"},
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "qf25pdr"},
			},
			["ita"] = {--Italy
			--AT_Weapons
				{priority = 1.0, class = UnitClass.ATTank, unit = "cannone_7527"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "obice_7513"},

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
