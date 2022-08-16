;AUTOMATIC WEAPONRY
{"inf_crate_rus"
	 {on spawn
	   	{tags add "soviet"}
		{tags add "ammocrate"}

	}
}
{"ap_2"
	 {on spawn
	   	{tags add "soviet"}
		{tags add "ammocrate"}

	}
}
{"maxim"
	{on spawn
	    {tags add "HMG"}
		{tags add "soviet"}
		{tags add "maxim"}
        {delay 1
            {if not user_control
        	   {tags add "stage1"}
            }
        }

	}
}
{"dshk_stan"
	{on spawn
	    {tags add "HMG"}
		{tags add "soviet"}
		{tags add "dshk_stan"}
        {delay 1
            {if not user_control
        	   {tags add "stage1"}
            }
        }
	}
}
{"dshk_aa"
	{on spawn
	    {tags add "HMG"}
		{tags add "soviet"}
		{tags add "dshk_aa"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}
{"ds39_stand"
	{on spawn
	    {tags add "HMG"}
		{tags add "soviet"}
		{tags add "ds39_stand"}
	}
}
{"sg43_stand"
	{on spawn
	    {tags add "HMG"}
		{tags add "soviet"}
		{tags add "sg43_stand"}
	}
}
{"25mm_72k"
	{on spawn
	    {tags add "AAFLAK"}
		{tags add "soviet"}
		{tags add "25mm_72k"}
        {delay 1
            {if not user_control
        	   {tags add "stage1"}
            }
        }

	}
}
{"37mm_61k"
	{on spawn
	    {tags add "AAFLAK"}
		{tags add "soviet"}
		{tags add "37mm_61k"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}


; AT WEAPONRY
{"m41_ampulomet"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "soviet"}
		{tags add "m41_ampulomet"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }

	}
}
{"45mm_m37"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "soviet"}
		{tags add "45mm_m37"}
        {delay 1
            {if not user_control
        	   {tags add "stage1"}
            }
        }

	}
}
{"45mm_m42"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "soviet"}
		{tags add "45mm_m42"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}
{"76mm_bpk76"
	{on spawn
	    {tags add "light_at_gun"}
		{tags add "soviet"}
		{tags add "76mm_bpk76"}
	}
}
{"57mm_zis2"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "soviet"}
		{tags add "57mm_zis2"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}
{"76mm_f22"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "soviet"}
		{tags add "76_f22"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}
{"76mm_m1902"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "soviet"}
		{tags add "76mm_m1902"}
	}
}
{"76mm_m1933"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "soviet"}
		{tags add "76mm_m1933"}
	}
}
{"76mm_zis3"
	{on spawn
	    {tags add "medium_at_gun"}
		{tags add "soviet"}
		{tags add "76mm_zis3"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}
{"85mm_52k"
	{on spawn
	    {tags add "heavy_at_gun"}
		{tags add "soviet"}
		{tags add "85mm_52k"}
        {delay 1
            {if not user_control
        	   {tags add "stage3"}
            }
        }

	}
}
{"100mm_bs3"
	{on spawn
	    {tags add "heavy_at_gun"}
		{tags add "soviet"}
		{tags add "100mm_bs3"}
		{delay 1
            {if not user_control
        	   {tags add "stage3"}
            }
        }
	}
}


;HOWITZERS
{"76mm_m1927"
	{on spawn
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "76mm_m1927"}
	}
}
{"76mm_m43"
	{on spawn
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "76mm_m43"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}
{"82mm_bm37"
	{on spawn
		{tags add "artillery"}
		{tags add "soviet"}
		{tags add "82mm_bm37"}
        {delay 1
            {if not user_control
        	   {tags add "stage2"}
            }
        }
	}
}
{"120mm_pm38"
	{on spawn
		{tags add "artillery"}
		{tags add "soviet"}
		{tags add "120mm_pm38"}
		{delay 1
            {if not user_control
        	   {tags add "stage3"}
            }
        }
	}
}
{"122mm_m30"
	{on spawn
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "122mm_m30"}
	}
}
{"107mm_m1910_30"
	{on spawn
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "107mm_m1910_30"}
        {delay 1
            {if not user_control
        	   {tags add "stage3"}
            }
        }

	}
}
{"122mm_m1910"
	{on spawn
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "122mm_m1910"}
	}
}
{"122mm_a19"
	{on spawn
    	{tags add "artillery"}
		{tags add "heavy_artillery"}
		{tags add "soviet"}
		{tags add "122mm_a19"}
	}
}
{"152mm_ml20"
	{on spawn
    	{tags add "artillery"}
		{tags add "heavy_artillery"}
		{tags add "soviet"}
		{tags add "152mm_ml20"}
	}
}
{"203mm_b4"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "203mm_b4"}
	}
}
{"152mm_br2"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "152mm_br2"}
	}
}
{"152mm_br2ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "152mm_br2"}
		{tags add "no_scavenge"}
		{able select 0}
	}
}
{"122mm_m3ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "122mm_m30"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"122mm_a19ai"
	{on spawn
    	{tags add "artillery"}
	    {tags add "super_heavy_artillery"}
		{tags add "soviet"}
		{tags add "122mm_a19"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"152mm_ml20ai"
	{on spawn
    	{tags add "artillery"}
	    {tags add "super_heavy_artillery"}
		{tags add "soviet"}
		{tags add "152mm_ml20"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"203mm_b4ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "203mm_b4"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 0}
	}
}
{"280mm_br5"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "280mm_br5"}
		{tags add "no_scavenge"}
		{able select 0}
	}
}
{"280mm_br5ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
    	{tags add "artillery"}
		{tags add "soviet"}
		{tags add "280mm_br5"}
		{tags add "no_scavenge"}
		{able select 0}
	}
}

;_________________________________________________
;|               Wheeled vehicles                 |
;|________________________________________________|


{"m72"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "m72"}
    }
}
{"gaz_aaa"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "gaz_aaa"}
    }
}
{"gaz_aaa_supply"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "gaz_aaa_supply"}
		{tags add "ammo"}
    }
}
{"gaz_fuel"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "gaz_fuel"}
    }
}
{"gaz_aaa_72k"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "gas_aaa_72k"}
	}
}
{"gaz_aaa_maximx4"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "gaz_aaa_maximx4"}
	}
}
{"zis5_dshk"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "zis5_dshk"}
	}
}
{"zis5"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "zis5"}
	}
}
{"zis5eng"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "zis5eng"}
	}
}
{"bm13_studebaker"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "rocket_artillery"}
		{tags add "soviet"}
		{tags add "bm13_studebaker"}
	}
}
{"bm31_12"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "rocket_artillery"}
		{tags add "soviet"}
		{tags add "bm31_12"}
	}
}
{"bm13_studebakerai"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "rocket_artillery"}
		{tags add "soviet"}
		{tags add "bm13_studebaker"}
		{tags add "no_scavenge"}
	}
}
{"bm31_12ai"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "rocket_artillery"}
		{tags add "soviet"}
		{tags add "bm31_12"}
		{tags add "no_scavenge"}
	}
}
{"gaz67b"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "gaz67b"}
	}
}
{"gaz67"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "gaz67"}
	}
}
{"ba20_command"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "ba20_command"}
		{tags add "radio_car"}
	}
}
{"ba6"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "ba6"}
	}
}
{"fai_m"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "fai_m"}
	}
}
{"ba64"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "ba64"}
	}
}
{"ba10"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "ba10"}
	}
}
{"universal_carrier_rus"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "universal_carrier_rus"}
	}
}
{"mmg_carrier_rus"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "mmg_carrier_rus"}
	}
}
{"m3a1e1_scout_mgun"
	{on spawn
    	{tags add "wheeled_vehicle"}
		{tags add "soviet"}
		{tags add "m3a1e1_scout_mgun"}
	}
}
;_________________________________________________
;|        Main Battle Tanks and SPGs              |
;|________________________________________________|

;LIGHT
{"t27"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t27"}
	}
}
{"t37a"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t37a"}
	}
}
{"t40"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t40"}
	}
}
{"t30"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t30"}
	}
}
{"t60"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t60"}
	}
}
{"t70"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t70"}
	}
}
{"t70m"
	{on spawn
    	{tags add "light_tank"}
		{tags add "t70m"}
	}
}
{"bt2_da2"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "bt2_da2"}
	}
}
{"bt2"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "bt2"}
	}
}
{"bt5"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "bt5"}
	}
}
{"bt7"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "bt7"}
	}
}
{"bt7a"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "bt7a"}
	}
}
{"t26_31"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t26_31"}
	}
}
{"kht26"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "kht26"}
	}
}
{"t26_33"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t26_33"}
	}
}
{"t26_39"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "t26_39"}
	}
}
{"valentine2"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "valentine2"}
	}
}
{"valentine7"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "valentine7"}
	}
}
{"valentine9"
	{on spawn
    	{tags add "light_tank"}
		{tags add "soviet"}
		{tags add "valentine9"}
	}
}

;MEDIUM
{"t28"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t28"}
	}
}
{"t28e"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t28e"}
	}
}
{"t3476_40"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3476_40"}
	}
}
{"t3476_41"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3476_41"}
	}
}
{"t3457_41"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3457_41"}
	}
}
{"t3476_42"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3476_42"}
	}
}
{"t3476_43"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3476_43"}
	}
}
{"t3457_43"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3457_43"}
	}
}
{"t3476_43_flame"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3476_43_flame"}
	}
}
{"t3485_44"
	{on spawn
    	{tags add "medium_tank"}
		{tags add "soviet"}
		{tags add "t3485_44"}
	}
}

;HEAVY
{"churchill3"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "churchill3"}
	}
}
{"kv1_40"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "kv1_40"}
	}
}
{"t35"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "t35"}
	}
}
{"t35_late"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "t35_late"}
	}
}
{"smk"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "smk"}
	}
}
{"kv1_41"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "kv1_41"}
	}
}
{"kv1_39"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "kv1_39"}
	}
}
{"kv1_40e"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "kv1_40e"}
	}
}
{"kv2_40"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "kv2_40"}
	}
}
{"kv1s"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "kv1s"}
	}
}
{"kv85"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "kv85"}
	}
}
{"is1_43"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "is1_43"}
	}
}
{"is2_43"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "is2_43"}
	}
}
{"is2_44"
	{on spawn
    	{tags add "heavy_tank"}
		{tags add "soviet"}
		{tags add "is2_44"}
	}
}

;SPG
{"zis30"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "zis30"}
	}
}
{"su76"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "su76"}
	}
}
{"su85"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "su85"}
	}
}
{"su100"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "su100"}
	}
}
{"su122"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "su122"}
	}
}
{"su152"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "su152"}
	}
}
{"isu122s"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "isu122s"}
	}
}
{"isu152"
	{on spawn
    	{tags add "spg"}
		{tags add "soviet"}
		{tags add "isu152"}
	}
}
;_______________________________________________
;|					Aircraft					|
;|______________________________________________|

{"conquest_il2"
	{on spawn
    	{tags add "aircraft"}
		{tags add "conquest_il2"}
	}
}

{"il2_mod42" 
	{on spawn
    	{tags add "aircraft"}
	}
}

{"il2_mod42player" 
	{on spawn
    	{tags add "playerplane"}
		{call "takeoff"}
		{call"takeoff_load"}	
	}
}

{"il2_mod42_para_plane" 
	{on spawn
    	{tags add "aircraft"}
    	{tags add "soviet"}
		{tags add "drop_plane"}
		{tags add "ready_to_move"}
	}
}

{"il2_mod42_para_planeplayer" 
	{on spawn
    	{tags add "player_drop_plane"}
    	{tags add "aircraft"}
    	{tags add "soviet"}
    }
}

{"yak1_ser69" 
	{on spawn
    	{tags add "yak1_ser69"}
    	{tags add "fighter"}
		;{call "takeoff"}
		;{call"takeoff_load"}	
		{tags add "aircraft"}
    	{tags add "soviet"}
	}
}
{"po2"
	{on spawn
    	{tags add "aircraft"}
		{tags add "po2"}
		{tags add "scout_plane"}
	}
}