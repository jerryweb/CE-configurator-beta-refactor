Purchases["campaign_capture_the_flag"] = {
	{--purchase 1 starting recon wave c 1 по 5 бой
		divisionName = "Condor Late Tank Division",
		waveNumber = 1, -- какая по порядку будет
		minRepeat = 6,
		maxRepeat = 10,
		skipPossible = false,  -- ничего не делает
		waveDuration = 5, -- длительность того, как долго бот будет вызывать данные войска. Каждый юнит вызывается каждые 3 секунды. Если нужно чтобы было только определенное количество то Repeat * 3 < Wave duration  При этом Repeat говорит сколько раз нужно вызвать юнит.
		Units = {
			["ger"] = {--Germany
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz234_2"},
				{priority = 0.3, class = UnitClass.Tank, unit = "panzer2l"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz231"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz222a"},
			--Infantry Squads
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_con(ger)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_recon_armor_con"},				
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
			
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_scout_mid_con(fin)"},
			
				{priority = 0.5, class = UnitClass.Vehicle, unit = "ba10"},
		
			},
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
			["fra"] = {--France
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(fra)"},
				-- 2
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade_late(fra)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},
				-- 5
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier_late(fra)"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m20_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m4halftrack_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m17_fr"},	
			},
			["pol"] = {--Poland
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(pol)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(pol)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
				-- 5
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier_late(pol)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(pol)"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dingo_pol"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3halftrack_pol"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound_pol"},
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
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(jap)"},
			--Tanks_light,
				{priority = 2.0, class = UnitClass.Tank, unit = "type95_ha-go"},
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
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_marine(usa)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(usa)"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "dodgewc55"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m3a1_scout"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m16"},											  
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound"},
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
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(eng)"},
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
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(ita)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ita)"},

			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ab41"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "autocannone10017"},
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
	{--purchase 2  mortar
		waveNumber = 2,
	    minRepeat = 1,
		maxRepeat = 2,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 5,
	    isHeavyArty = true,
		Units = {
			["ger"] = {--Germany
		    --Howitzers
                {priority = 1.0, class = UnitClass.ATTank, unit = "80mm_sgrw34"},
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
		
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_krh40"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "170mm_minewerferai"},
		
			},
			["rus"] = {--Russia
			--Howitzers
                {priority = 1.0, class = UnitClass.ATTank, unit = "82mm_bm37"},
			},
			["fra"] = {--France
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81_mm_m1_fr"},
			},
			["pol"] = {--Poland
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_pol"},
			},
			["jap"] = {--Japan
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_jap"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_type_97"},
			},
			["usa"] = {--USA
			--Howitzers			
                {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81_mm_m1"},
                {priority = 1.0, class = UnitClass.ArtilleryTank, unit = "107_mm_m2"},	
			},
			["eng"] = {--Britain
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "76mm_mk_ii"},
			},
			["ita"] = {--Italy
			--Howitzers				
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_ita"},
			}
		}
	},	
	{--purchase 3 heavy mortar
		waveNumber = 3,
	    minRepeat = 0,
		maxRepeat = 0,
	    skipPossible = true,
	    skipChance = 0.4,
	    waveDuration = 6,
	    isHeavyArty = true,	
		Units = {
			["ger"] = {--Germany
		    --Howitzers
                
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
		
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "120mm_krh40"},
				{priority = 0.5, class = UnitClass.ArtilleryTank, unit = "170mm_minewerferai"},
			
			},
			["rus"] = {--Russia
			--Howitzers
                
			},
			["fra"] = {--France
			--Wheel_vehicles
				{priority = 0.7, class = UnitClass.ArtilleryTank, unit = "bs-75"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m17_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "panhard"},	
			},
			["pol"] = {--Poland
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_pol"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "qf25pdr_pol"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "bl45_pol"},
			},
			["jap"] = {--Japan
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "150mm_type_97"},
			},
			["usa"] = {--USA
			--Howitzers				
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81_mm_m1"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "105_mm_m2a1l"},
			},
			["eng"] = {--Britain
			--Howitzers
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "76mm_mk_ii"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "qf25pdr"},
			},
			["ita"] = {--Italy
			--Howitzers				
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "81mm_brandt_ita"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "obice_10017"},
			}
		}
	},
	{--purchase 4 heavy tank group
		waveNumber = 4,
	    -- Repeat = 17,
	    minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_heavy
				{priority = 0.8, class = UnitClass.HeavyTank, unit = "panzer5d"},
				{priority = 0.4, class = UnitClass.HeavyTank, unit = "panzer5a"},
				{priority = 0.5, class = UnitClass.HeavyTank, unit = "panzer5g"},				
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
		
				{priority = 0.5, class = UnitClass.Tank, unit = "t3485_44_fin"},

			
				{priority = 0.1, class = UnitClass.ATTank, unit = "isu152_fin"},
			},
			["rus"] = {--Russia				
			--Tanks_heavy
			{priority = 2.5, class = UnitClass.Tank, unit = "t3485_44"},
			{priority = 1.5, class = UnitClass.HeavyTank, unit = "is2_43"},
			{priority = 1.0, class = UnitClass.HeavyTank, unit = "is2_44"},
			},
			["fra"] = {--France
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3_76_fr"},
			},
			["pol"] = {--Poland
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_firefly_pol"},
			},
			["jap"] = {--Japan
				{priority = 2.5, class = UnitClass.Tank, unit = "type97_shinhoto_120mm"},
				{priority = 1.0, class = UnitClass.Tank, unit = "type3_chi-nu2"},
			},
			["usa"] = {--USA
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "m4a3e2_jumbo_76w"},	
				{priority = 1.0, class = UnitClass.HeavyTank, unit = "m26e4_pershing"},
			},
			["eng"] = {--Britain
			--Tanks_heavy
				{priority = 1.0, class = UnitClass.Tank, unit = "churchill_mk_iv"},
				{priority = 1.0, class = UnitClass.Tank, unit = "churchill_mk_vii"},
				{priority = 1.5, class = UnitClass.Tank, unit = "churchill_crocodile"},			
			},
			["ita"] = {--Italy
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3n_ita"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4g_ita"},
			}
		}
	},
	{--purchase 5 medium tank group
		waveNumber = 5,
	    -- Repeat = 20,
	    minRepeat = 4,
		maxRepeat = 8,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "panzer4h"},
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j"},
				{priority = 0.2, class = UnitClass.Tank, unit = "panzer4g"},
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
		
				{priority = 0.5, class = UnitClass.Tank, unit = "panzer4j_fin"},
				{priority = 0.5, class = UnitClass.Tank, unit = "t3485_44_fin"},

		
			},
			["rus"] = {--Russia		
			--Tanks_medium					
                {priority = 1.2, class = UnitClass.Tank, unit = "t3485_44"},
				{priority = 0.7, class = UnitClass.Tank, unit = "t3476_43"},
				{priority = 0.1, class = UnitClass.Tank, unit = "t3457_43"},
			},
			["fra"] = {--France
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3_75_fr"},
				{priority = 0.5, class = UnitClass.Tank, unit = "char_d2"},
			},
			["pol"] = {--Poland
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "cromwell_mk_iv_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "challenger_pol"},
			},
			["jap"] = {--Japan
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_shinhoto_47mm"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type1_chi-he"},
				{priority = 0.5, class = UnitClass.Tank, unit = "type2_ho-i_kou"},
			},
			["usa"] = {--USA
			--Tanks_medium
				{priority = 2.0, class = UnitClass.Tank, unit = "m4a3_zippo"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a3e8"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m4a3_105"},	
			},
			["eng"] = {--Britain
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "matilda_mkii_cs"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m4a4"},
				{priority = 1.0, class = UnitClass.Tank, unit = "cromwell_mk_iv"},
				{priority = 1.0, class = UnitClass.Tank, unit = "cromwell_mk_vi"},
				{priority = 1.0, class = UnitClass.Tank, unit = "comet_a34"},
			--Tanks_heavy
				{priority = 0.5, class = UnitClass.Tank, unit = "churchill_avre"},
			},
			["ita"] = {--Italy
			--Tanks_medium
				{priority = 1.0, class = UnitClass.Tank, unit = "pz3n_ita"},
				{priority = 1.0, class = UnitClass.Tank, unit = "pz4g_ita"},
			}
		}
	},
	{--purchase 6 light tank group
		waveNumber = 6,
	    -- Repeat = 10,
	    minRepeat = 2,
		maxRepeat = 4,
	    skipPossible = false,
	    waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Tanks_light
                
				
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
            --Tanks_light
				{priority = 0.2, class = UnitClass.Tank, unit = "t60"},
				{priority = 0.4, class = UnitClass.Tank, unit = "t70"},
				{priority = 0.4, class = UnitClass.Tank, unit = "t70m"},			
			},
			["fra"] = {--France
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m8_grayhound_fr"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m17_fr"},	
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m5a1_fr"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m8_fr"},
			},
			["pol"] = {--Poland
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound_pol"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa2_pol"},
				{priority = 1.0, class = UnitClass.Tank, unit = "crusader_pol"},
			},
			["jap"] = {--Japan
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "type94_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type97_te-ke"},
				{priority = 2.0, class = UnitClass.Tank, unit = "type95_ha-go"},
			--Tanks_medium
				{priority = 1.5, class = UnitClass.Tank, unit = "type97_chi-ha"},
			},
			["usa"] = {--USA
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "m3_satan"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m8"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m24_chaffee"},
			},
			["eng"] = {--Britain
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "mk2daimler"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "staghound"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa2"},
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_mki_cs"},
			},
			["ita"] = {--Italy
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "ab41"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.Tank, unit = "l640"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m1441"},
				{priority = 1.0, class = UnitClass.Tank, unit = "m1542"},
			}
		}
	},
	{--purchase 7 infantry support
		waveNumber = 7,
		-- Repeat = 50,
		minRepeat = 7,
		maxRepeat = 9,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--Infantry Squads
			    {priority = 1.0, class = UnitClass.Infantry, unit = "squad_regular_motor_con"},
				{priority = 0.2, class = UnitClass.Infantry, unit = "squad_pz_pio_con"},
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
		
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_assault_mid_con(fin)"},

			
				{priority = 1.5, class = UnitClass.Infantry, unit = "squad_cav_mid_con(fin)"},

			},
			["rus"] = {--Russia
			--Infantry Squads
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_smg_con(rus)"},
			},
			["fra"] = {--France
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(fra)"},
				-- 2
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade_late(fra)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(fra)"},
				-- 5
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier_late(fra)"},	
			},
			["pol"] = {--Poland
			--Infantry
				-- 1
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_at_late(pol)"},
				-- 2
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular_late(pol)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar_late(pol)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer_late(pol)"},
				-- 5
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier_late(pol)"},
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
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_pionier(jap)"},				
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(jap)"},
			},
			["usa"] = {--USA
			--Infantry
				-- 1
				{priority = 3.5, class = UnitClass.Infantry, unit = "squad_regular(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_mortar(usa)"},
				{priority = 2.0, class = UnitClass.ATInfantry, unit = "single_riflegrenade(usa)"},
				-- 3
				{priority = 1.5, class = UnitClass.Infantry, unit = "single_flamer(usa)"},
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
				-- 5
				{priority = 1.0, class = UnitClass.Infantry, unit = "squad_stormtrooper_late(eng)"},
			},
			["ita"] = {--Italy
			--Infantry
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_regular(ita)"},
				{priority = 2.0, class = UnitClass.Infantry, unit = "squad_stormtrooper(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_mg(ita)"},
				{priority = 1.0, class = UnitClass.ATInfantry, unit = "single_atrifle(ita)"},
				{priority = 1.0, class = UnitClass.Infantry, unit = "single_flamer(ita)"},
			}
		}
	},
	{--purchase 8 SPG support
		waveNumber = 8,
		-- Repeat = 12,
		minRepeat = 2,
		maxRepeat = 4,
        skipPossible = false,		
		waveDuration = 5,
		Units = {
			["ger"] = {--Germany
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "marder3m"},
				{priority = 0.3, class = UnitClass.ArtilleryTank, unit = "sig33b"},
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
		
				{priority = 1.5, class = UnitClass.ATTank, unit = "stug3g_fin"},
				{priority = 0.1, class = UnitClass.ATTank, unit = "isu152_fin"},
			},
			["rus"] = {--Russia
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "su85"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, unit = "su122"},
			},
			["fra"] = {--France
			--SPG
				{priority = 1.0, class = UnitClass.ATTank, unit = "m10wolverine_fr"},
				{priority = 0.2, class = UnitClass.ArtilleryTank, unit = "m7_fr"}
			},
			["pol"] = {--Poland			
			--SPG
				{priority = 0.4, class = UnitClass.ATTank, unit = "achilles_pol"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "sexton_pol"}
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
				{priority = 1.0, class = UnitClass.ATTank, unit = "m10wolverine"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m7"}
			},
			["eng"] = {--Britain
				{priority = 0.5, class = UnitClass.Tank, unit = "churchill_avre"},			
			--SPG
				{priority = 0.1, class = UnitClass.ATTank, unit = "achilles"},
				{priority = 0.7, class = UnitClass.ArtilleryTank, unit = "sexton"}
			},
			["ita"] = {--Italy	
			--SPG
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "m7518"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "m7534"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "stug3g_ita"}
			}
		}
	},
	{--purchase 11 AA support
		waveNumber = 11,
		minRepeat = 1,
		maxRepeat = 3,
        skipPossible = true,		
		waveDuration = 15,
		Units = {
			["ger"] = {--Germany
			--AA
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz6_2"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "sdkfz10_4"},
				{priority = 0.5, class = UnitClass.Vehicle, unit = "sdkfz8_flak18"},
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
		
				{priority = 0.5, class = UnitClass.AATank, unit = "ford_3ton_breda"},
		
			},
			["rus"] = {--Russia
			--AA
		
				{priority = 0.2, class = UnitClass.Vehicle, unit = "gaz_aaa_72k"},
			},
			["fra"] = {--France
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "40_mm_m1_fr"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "13mm_hotchkiss"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m17_fr"},	
			},
			["pol"] = {--Poland
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf40mm_pol"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_aa_wz36"},
			},
			["jap"] = {--Japan
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "20mm_type_2"},	
				{priority = 1.0, class = UnitClass.ATTank, unit = "75mm_type_4"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "type94aa"},
			},
			["usa"] = {--USA
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "0_3cal_m1917a1_aa"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "0_5cal_maxson"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "40_mm_m1"},
			--Wheel_vehicles
				{priority = 1.0, class = UnitClass.Vehicle, unit = "m16"},											  
			},
			["eng"] = {--Britain
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.ATTank, unit = "qf40mm"},
				{priority = 1.0, class = UnitClass.ArtilleryTank, unit = "qf3,7inch"},
			--Tanks_light
				{priority = 1.0, class = UnitClass.AATank, unit = "crusader_aa1"},
			},
			["ita"] = {--Italy
			--Automatic_weaponry
				{priority = 1.0, class = UnitClass.Vehicle, unit = "8mm_fiat_revelli_m1914_35"},
				{priority = 1.0, class = UnitClass.Vehicle, unit = "8mm_breda_37"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "cannone_2065"},
				{priority = 1.0, class = UnitClass.ATTank, unit = "2cm_solothurn"},
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
