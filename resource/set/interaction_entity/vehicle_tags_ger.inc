;AUTOMATIC WEAPONRY
{"inf_crate_ger"
	 {on spawn
	   	{tags add "german"}
		{tags add "ammocrate"}

	}
}
{"ammo_trailer"
	 {on spawn
	   	{tags add "german"}
		{tags add "ammo_trailer"}

	}
}
{"mg34_lafette"
	 {on spawn
	    {tags add "HMG"}
		{tags add "german"}
		{tags add "mg34_lafette"}
        {if not user_control
        	{delay 1
            	{tags add "stage1"}
        	}
        }


	}
}
{"mg42_lafette"
	 {on spawn
	    {tags add "HMG"}
		{tags add "german"}
		{tags add "mg42_lafette"}
        {if not user_control
        	{delay 1
            	{tags add "stage1"}
        	}
        }


	}
}
{"20mm_flak30"
	 {on spawn
	    {tags add "AAFLAK"}
		{tags add "german"}
		{tags add "20mm_flak30"}
        {if not user_control
        	{delay 1
            	{tags add "stage1"}
        	}
        }


	}
}
{"37mm_flak37"
	 {on spawn
	    {tags add "AAFLAK"}
		{tags add "german"}
		{tags add "37mm_flak37"}
        {if not user_control
        	{delay 1
            	{tags add "stage1"}
        	}
        }
	}
}
{"50mm_flak41"
	 {on spawn
	    {tags add "AAFLAK"}
		{tags add "german"}
		{tags add "50mm_flak41"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }

	}
}

; AT WEAPONRY
{"28mm_pzb41"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "german"}
		{tags add "28mm_pzb41"}
        {if not user_control
        	{delay 1
            	{tags add "stage1"}
        	}
        }


	}
}
{"37mm_pak36"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "german"}
		{tags add "37mm_pak36"}
        {if not user_control
        	{delay 1
            	{tags add "stage1"}
        	}
        }


	}
}
{"37mm_pak36_late"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "german"}
		{tags add "37mm_pak36_late"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }

	}
}
{"47mm_pakt"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "german"}
		{tags add "47mm_pakt"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }

	}
}
{"50mm_pak38"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "german"}
		{tags add "50mm_pak38"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }

	}
}
{"75mm_pak40"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "german"}
		{tags add "75mm_pak40"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }
	}
}
{"75mm_lg40"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "german"}
		{tags add "75mm_lg40"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }

	}
}
{"88mm_flak18"
	{on spawn
	    {tags add "heavy_at_gun"}
		{tags add "german"}
		{tags add "88mm_flak18"}
        {if not user_control
        	{delay 1
            	{tags add "stage3"}
        	}
        }


	}
}
{"88mm_flak36"
	{on spawn
	    {tags add "heavy_at_gun"}
		{tags add "german"}
		{tags add "88mm_flak36"}
        {if not user_control
        	{delay 1
            	{tags add "stage3"}
        	}
        }


	}
}


;HOWITZERS
{"75mm_leig18"
	{on spawn
    	{tags add "medium_at_gun"}
		{tags add "german"}
		{tags add "75mm_leig18"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }

	}
}
{"80mm_sgrw34"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "80mm_sgrw34"}
        {if not user_control
        	{delay 1
            	{tags add "stage2"}
        	}
        }

	}
}
{"100mm_nbw35"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "100mm_nbw35"}
		{if not user_control
			{delay 1
            	{tags add "stage2"}
			}
        }
		
	}
}
{"120mm_sgrw42"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "120mm_sgrw42"}
		{if not user_control
			{delay 1
            	{tags add "stage3"}
			}
        }
		
	}
}
{"105mm_lefh18"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "105mm_lefh18"}
        {if not user_control
        	{delay 1
            	{tags add "stage3"}
        	}
        }

	}
}
{"105mm_sk18"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "105mm_sk18"}
	}
}
{"150mm_nebelwerfer41"
	{on spawn
		{tags add "rocket_artillery"}
		{tags add "german"}
		{tags add "150mm_nebelwerfer41"}
	}
}
{"150mm_sig33"
	{on spawn
    	{tags add "heavy_at_gun"}
		{tags add "german"}
		{tags add "150mm_sig33"}
	}
}
{"150mm_sfh18"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "150_sfh18"}
	}
}
{"200mm_ldgw40"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "200mm_ldgw40"}

	}
}
{"210mm_nebelwerfer42"
	{on spawn
		{tags add "rocket_artillery"}
		{tags add "german"}
		{tags add "210mm_nebelwerfer42"}

	}
}
{"210mm_morser18"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "210mm_morser18"}

	}
}
{"300mm_nebelwerfer42"
	{on spawn
		{tags add "rocket_artillery"}
		{tags add "german"}
		{tags add "300mm_nebelwerfer42"}

	}
}
{"105mm_lefh18ai"
	{on spawn
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "105mm_lefh18ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"105mm_sk18ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "105mm_sk18"}
		{tags add "no_scavenge"}
		{able emit_passangers_on_enemy 0}
	}
}
{"150mm_nebelwerfer41ai"
	{on spawn
		{tags add "rocket_artillery"}
		{tags add "german"}
		{tags add "150mm_nebelwerfer41ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"150mm_sig33ai"
	{on spawn
    	{tags add "heavy_at_gun"}
		{tags add "german"}
		{tags add "150mm_sig33ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}
{"150mm_sfh18ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "150_sfh18ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"210mm_morser18ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "german"}
		{tags add "210mm_morser18ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}

	}
}
{"210mm_nebelwerfer42ai"
	{on spawn
		{tags add "rocket_artillery"}
		{tags add "german"}
		{tags add "210mm_nebelwerfer42"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"300mm_nebelwerfer42ai"
	{on spawn
		{tags add "rocket_artillery"}
		{tags add "german"}
		{tags add "300mm_nebelwerfer42ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}

	}
}

;_________________________________________________
;|               Wheeled vehicles                 |
;|________________________________________________|

{"kubelwagen"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "kubelwagen"}
	}
}
{"bmw_r71"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "bmw_r71"}
	}
}
{"kubelwagen_mg"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "kubelwagen_mg"}
	}
}
{"kubelwagen_dak"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "kubelwagen_dak"}
	}
}
{"kettenkrad_eng"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "kettenkrad_eng"}
	}
}

{"blitz3_6"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "blitz3_6"}
	}
}
{"sdkfz250a_3"
	{on spawn
    	{if not tagged "radioger"
		    {tags add "radio_car"}
		}
		{tags add "german"}
		{tags add "sdkfz250a_3"}
	}
}
{"sdkfz10"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz10"}
	}
}
{"sdkfz251c"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz251c"}
	}
}
{"sdkfz250a_3"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz250a_3"}
	}
}
{"sdkfz250a_11"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz250a_11"}
	}
}
{"sdkfz221"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz221"}
	}
}
{"sdkfz222a"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz222a"}
	}
}
{"blitz3_6_flak30"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "blitz3_6_flak30"}
	}
}
{"sdkfz231"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz231"}
	}
}
{"p204_f"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "p204_f"}
	}
}
{"sdkfz234_2"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz234_2"}
	}
}
{"kfz15"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "kfz15"}
	}
}
{"sdkfz10_pak38"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz10_pak38"}
	}
}
{"sdkfz8_flak18"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz8_flak18"}
	}
}
{"blitz3_6_art_ammo"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "blitz3_6_art_ammo"}
		{tags add "ammo"}
	}
}
{"blitz3_6_fuel"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "blitz3_6_fuel"}
	}
}
{"blitz3_6_engineering"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "blitz3_6_engineering"}
	}
}
{"sdkfz10_4"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz10_4"}
	}
}
{"sdkfz6_2"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz6_2"}
	}
}
{"kfz13"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "kfz13"}
	}
}
{"kfz14"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "kfz14"}
		{tags add "radio_car"}
	}
}
{"sdkfz251c_2"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "german"}
		{tags add "sdkfz251c_2"}
	}
}


;_________________________________________________
;|        Main Battle Tanks and SPGs              |
;|________________________________________________|

;LIGHT
{"panzer1b"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "panzer1b"}
	}
}
{"panzer1f"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "panzer1f"}
	}
}
{"panzer2c"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "panzer2c"}
	}
}
{"panzer2f"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "panzer2f"}
	}
}
{"panzer2l"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "panzer2l"}
	}
}
{"pz35t"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "pz35t"}
	}
}
{"pz38t_a"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "pz38t_a"}
	}
}
{"pz38t_f"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "pz38t_f"}
	}
}
{"pz38t_g"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "pz38t_g"}
	}
}
{"pz38h_735"
	{on spawn
    	{tags add "light_tank"}
		{tags add "german"}
		{tags add "pz38h_735"}
	}
}

;MEDIUM

{"panzer35s"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer35s"}
	}
}
{"panzer3e"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3e"}
	}
}
{"panzer3f"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3f"}
	}
}
{"panzer3j"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3j"}
	}
}
{"panzer3j1"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3j1"}
	}
}
{"panzer3l"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3l"}
	}
}
{"panzer3m"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3m"}
	}
}
{"panzer3n"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3n"}
	}
}
{"panzer3_flamm"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer3_flamm"}
	}
}
{"panzer4d"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer4d"}
	}
}
{"panzer4f1"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer4f1"}
	}
}
{"panzer4f2"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer4f2"}
	}
}
{"panzer4g"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer4g"}
	}
}
{"panzer4h"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer4b"}
	}
}
{"panzer4j"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "german"}
		{tags add "panzer4j"}
	}
}
{"panzer5d"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "panzer5d"}
	}
}
{"panzer5a"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "panzer5a"}
	}
}
{"panzer5g"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "panzer5g"}
	}
}

;HEAVY
{"pz756r"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "pz756r"}
	}
}
{"panzerb2"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "panzerb2"}
	}
}
{"tiger1h"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "tiger1h"}
	}
}
{"tiger1e"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "tiger1e"}
	}
}
{"tiger1hunt"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "tiger1hunt"}
	}
}
{"tiger2h"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "tiger2h"}
	}
}
{"tiger2p"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "german"}
		{tags add "tiger2p"}
	}
}

;SPG
{"panzerjager1"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "panzerjager1"}
	}
}
{"stug3b"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "stug3b"}
	}
}
{"marder2"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "marder2"}
	}
}
{"marder3m"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "marder3m"}
	}
}
{"hetzer"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "hetzer"}
	}
}
{"grille_m"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "grille_m"}
	}
}
{"stug3f"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "stug3f"}
	}
}
{"stug3g"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "stug3g"}
	}
}
{"stug3g_late"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "stug3g_late"}
	}
}
{"stuh42"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "stuh42"}
	}
}
{"bison"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "bison"}
	}
}
{"sig33b"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "sig33b"}
	}
}
{"sturmpanzer4"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "sturmpanzer4"}
	}
}
{"ferdinand"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "ferdinand"}
	}
}
{"jagdpanther"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "jagdpanther"}
	}
}
{"sturmtiger"
	{on spawn
    	{tags add "spg"}
		{tags add "german"}
		{tags add "sturmtiger"}
	}
}

;_______________________________________________
;|					Aircraft					|
;|______________________________________________|

{"conquest_bf110"
	{on spawn
    	{tags add "aircraft"}
		{tags add "conquest_bf110"}
	}
}
{"fi156"
	{on spawn
    	{tags add "aircraft"}
		{tags add "fi156"}
		{tags add "scout_plane"}
	}
}
{"bf110_e2" 
	{on spawn
    	{tags add "aircraft"}
	}
}

{"bf110_para_plane" 
	{on spawn
    	{tags add "aircraft"}
    	{tags add "german"}
    	{tags add "drop_plane"}
    	{tags add "ready_to_move"}
	}
}

{"bf110_playerplane" 
	{on spawn
    	{tags add "playerplane"}
    	{tags add "aircraft"}
    	{tags add "german"}
	}
}

{"bf110_para_planeplayer" 
	{on spawn
    	{tags add "player_drop_plane"}
    	{tags add "aircraft"}
    	{tags add "german"}
	}
}

{"ju-52" 
	{on spawn
    	{tags add "aircraft"}
    	{tags add "german"}
	}
}
{"ju-52_para_plane" 
	{on spawn
    	{tags add "drop_plane"}
    	{tags add "aircraft"}
    	{tags add "german"}
    	{tags add "ready_to_move"}
	}
}
{"ju-52_para_plane_player" 
	{on spawn
    	{tags add "player_drop_plane"}
    	{tags add "aircraft"}
    	{tags add "german"}
	}
}