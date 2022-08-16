;AUTOMATIC WEAPONRY
{"inf_crate_fin"
     {on spawn
        {tags add "finland"}
        {tags add "ammocrate"}

    }
}
{"150mm_sw34"
     {on spawn
        {tags add "finland"}
        {tags add "150mm_sw34"}
        {tags add "artillery"}
    }
}
{"20mm_itk35"
    {on spawn
        {tags add "finland"}
        {tags add "20mm_itk35"}
        {tags add "hmg"}
        {if not user_control
            {delay 1
                {tags add "stage1"}
            }
        }
    }
}
{"20mm_itk40"
    {on spawn
        {tags add "finland"}
        {tags add "20mm_itk40"}
        {tags add "hmg"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}

{"40mm_itk38b"
    {on spawn
        {tags add "finland"}
        {tags add "40mm_itk38b"}
        {tags add "aaflak"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}
{"75mm_itk37"
    {on spawn
        {tags add "finland"}
        {tags add "75mm_itk37"}
        {tags add "heavy_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}
{"75mm_itk37_stat"
    {on spawn
        {tags add "finland"}
        {tags add "75mm_itk37_stat"}
        {tags add "heavy_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}

;_________________________________________________
;|               Wheeled vehicles                 |
;|________________________________________________|

{"m42_truppenfahrrad"
    {on spawn
        {tags add "finland"}
        {tags add "m42_truppenfahrrad"}
        {tags add "wheeled_vehicle"}
    }
}
{"ford_v3000"
    {on spawn
        {tags add "finland"}
        {tags add "ford_v3000"}
        {tags add "wheeled_vehicle"}
    }
}
{"ford_v3000_ammo"
    {on spawn
        {tags add "finland"}
        {tags add "ford_v3000_ammo"}
        {tags add "wheeled_vehicle"}
    }
}
{"ford_v3000_fuel"
    {on spawn
        {tags add "finland"}
        {tags add "ford_v3000_fuel"}
        {tags add "wheeled_vehicle"}
    }
}
{"ford_v3000_eng"
    {on spawn
        {tags add "finland"}
        {tags add "ford_v3000_eng"}
        {tags add "wheeled_vehicle"}
    }
}
{"ford_3ton_breda"
    {on spawn
        {tags add "finland"}
        {tags add "ford_3ton_breda"}
        {tags add "wheeled_vehicle"}
    }
}
{"t20_fin"
    {on spawn
        {tags add "finland"}
        {tags add "t20_fin"}
        {tags add "wheeled_vehicle"}
    }
}
{"ba10_fin"
    {on spawn
        {tags add "finland"}
        {tags add "ba10_fin"}
        {tags add "wheeled_vehicle"}
    }
}
{"l182"
    {on spawn
        {tags add "finland"}
        {tags add "l182"}
        {tags add "wheeled_vehicle"}
    }
}
{"ba20_command_fin"
    {on spawn
        {tags add "finland"}
        {tags add "ba20_command_fin"}
        {tags add "wheeled_vehicle"}
		{tags add "radio_car"}
    }
}



;// medium_at_gun
{"50mm_pstk38"
    {on spawn
        {tags add "finland"}
        {tags add "50mm_pstk38"}
        {tags add "medium_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}
{"76mm_k02"
    {on spawn
        {tags add "finland"}
        {tags add "76mm_k02"}
        {tags add "medium_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
        {delay 0.1
            {tags remove "76_m1902"}
            {tags remove "soviet"}
        } 
    }
}
{"76mm_k02_30_40"
    {on spawn
        {tags add "finland"}
        {tags add "76mm_k02_30_40"}
        {tags add "medium_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
        {delay 0.1
            {tags remove "76_m1902"}
            {tags remove "soviet"}
        } 
    }
}
{"75mm_pstk9738"
    {on spawn
        {tags add "finland"}
        {tags add "75mm_pstk9738"}
        {tags add "medium_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}
{"76mm_k36"
    {on spawn
        {tags add "finland"}
        {tags add "76mm_k36"}
        {tags add "medium_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
        {delay 0.1
            {tags remove "76_f22"}
            {tags remove "soviet"}
        } 
    }
}
{"75mm_k40"
    {on spawn
        {tags add "finland"}
        {tags add "75mm_k40"}
        {tags add "medium_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}


; artillery
{"50mm_krh38"
    {on spawn
        {tags add "finland"}
        {tags add "50mm_krh38"}
        {tags add "artillery"}
    	{if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}
{"81mm_krh36"
    {on spawn
        {tags add "finland"}
        {tags add "81mm_krh36"}
        {tags add "artillery"}
        {if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}
{"120mm_krh40"
    {on spawn
        {tags add "finland"}
        {tags add "120mm_krh40"}
        {tags add "artillery"}
		{if not user_control
            {delay 1
                {tags add "stage3"}
            }
        }
    }
}
{"76mm_m1927_fin"
    {on spawn
        {tags add "finland"}
        {tags add "76mm_m1927_fin"}
        {tags add "artillery"}
    }
}
{"84mm_k18"
    {on spawn
        {tags add "finland"}
        {tags add "84mm_k18"}
        {tags add "artillery"}
    	{if not user_control
            {delay 1
                {tags add "stage2"}
            }
        }
    }
}
{"84mm_k18_late"
    {on spawn
        {tags add "finland"}
        {tags add "84mm_k18_late"}
        {tags add "artillery"}
    }
}
{"105mm_k13"
    {on spawn
        {tags add "finland"}
        {tags add "105mm_k13"}
        {tags add "artillery"}
    	{if not user_control
            {delay 1
                {tags add "stage3"}
            }
        }
    }
}
{"107mm_k10"
    {on spawn
        {tags add "finland"}
        {tags add "107mm_k10"}
        {tags add "artillery"}
    }
}
{"120mm_k78_31"
    {on spawn
        {tags add "finland"}
        {tags add "120mm_k78_31"}
        {tags add "artillery"}
        {tags add "super_heavy_artillery"}
    }
}
{"122mm_m1910_fin"
    {on spawn
        {tags add "finland"}
        {tags add "122mm_m1910_fin"}
        {tags add "artillery"}
        {tags add "super_heavy_artillery"}
    }
}
{"150mm_h40"
    {on spawn
        {tags add "finland"}
        {tags add "150mm_h40"}
        {tags add "artillery"}
        {tags add "super_heavy_artillery"}
    }
}
{"155mm_h17"
    {on spawn
        {tags add "finland"}
        {tags add "155mm_h17"}
        {tags add "artillery"}
        {tags add "super_heavy_artillery"}
    }
}
{"170mm_minewerfer"
    {on spawn
        {tags add "finland"}
        {tags add "170mm_minewerfer"}
        {tags add "artillery"}
    }
}
{"203mm_h17"
    {on spawn
        {tags add "finland"}
        {tags add "203mm_h17"}
        {tags add "artillery"}
        {tags add "super_heavy_artillery"}
    }
}
{"150mm_rkh41"
    {on spawn
        {tags add "finland"}
        {tags add "150mm_rkh41"}
        {tags add "rocket_artillery"}
    }
}





;// hmg
{"heavy_mg_maxim"
    {on spawn
        {tags add "finland"}
        {tags add "heavy_mg_maxim"}
        {tags add "hmg"}
        {if not user_control
            {delay 1
                {tags add "stage1"}
            }
        }
    }
}
{"ds39_stand_fin"
    {on spawn
        {tags add "finland"}
        {tags add "ds39_stand_fin"}
        {tags add "hmg"}
        {if not user_control
            {delay 1
                {tags add "stage1"}
            }
        }
    }
}
{"panzernest_krab"
    {on spawn
        {tags add "finland"}
        {tags add "panzernest_krab"}
        {tags add "hmg"}
        {if not user_control
            {delay 1
                {tags add "stage1"}
            }
        }
    }
}
{"150mm_sw34"
    {on spawn
        {tags add "finland"}
        {tags add "150mm_sw34"}
        {tags add "artillery"}
        {if not user_control
            {delay 1
                {tags add "stage_1"}
            }
        }
    }
}


;light_at_gun
{"20mm_l39"
    {on spawn
        {tags add "finland"}
        {tags add "20mm_l39"}
        {tags add "light_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage1"}
            }
        }
    }
}
{"37mm_pstk36"
    {on spawn
        {tags add "finland"}
        {tags add "37mm_pstk36"}
        {tags add "light_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage1"}
            }
        }
    }
}
{"45mm_pstk32"
    {on spawn
        {tags add "finland"}
        {tags add "45mm_pstk32"}
        {tags add "light_at_gun"}
        {if not user_control
            {delay 1
                {tags add "stage_1"}
            }
        }
    }
}

;_________________________________________________
;|        Main Battle Tanks and SPGs              |
;|________________________________________________|

;LIGHT
{"ft17_mg_fin"
    {on spawn
        {tags add "finland"}
        {tags add "ft17_mg_fin"}
        {tags add "light_tank"}
    }
}
{"ft17_fin"
    {on spawn
        {tags add "finland"}
        {tags add "ft17_fin"}
        {tags add "light_tank"}
    }
}
{"vickers_6t_altb"
    {on spawn
        {tags add "finland"}
        {tags add "vickers_6t_altb"}
        {tags add "light_tank"}
    }
}
{"t26e"
    {on spawn
        {tags add "finland"}
        {tags add "t26e"}
        {tags add "light_tank"}
    }
}
{"t26_33_fin"
    {on spawn
        {tags add "finland"}
        {tags add "t26_33_fin"}
        {tags add "light_tank"}
        {delay 0.1
            {tags remove "t26_33"}
            {tags remove "soviet"}
        }
    }
}
{"t37a_fin"
    {on spawn
        {tags add "finland"}
        {tags add "t37a_fin"}
        {tags add "light_tank"}
        {delay 0.1
            {tags remove "t37a"}
            {tags remove "soviet"}
        }
    }
}
{"kht130_fin"
    {on spawn
        {tags add "finland"}
        {tags add "kht130_fin"}
        {tags add "light_tank"}
    }
}
{"t50_fin"
    {on spawn
        {tags add "finland"}
        {tags add "t50_fin"}
        {tags add "light_tank"}
    }
}
{"l62"
    {on spawn
        {tags add "finland"}
        {tags add "l62"}
        {tags add "spg"}
    }
}
{"pz38h_735"
    {on spawn
    {   tags  add "finland"}
        {tags add "pz38h_735"}
        {tags add "light_tank"}
    }
}

{"bt5_fin"
    {on spawn
        {tags add "finland"}
        {tags add "bt5_fin"}
        {tags add "light_tank"}
        {delay 0.1
            {tags remove "bt5"}
            {tags remove "soviet"}
        }
    }   
}

;MEDIUM
{"t28_38_fin"
    {on spawn
        {tags add "finland"}
        {tags add "t28_38_fin"}
        {tags add "medium_tank"}
        {delay 0.1
            {tags remove "t28"}
            {tags remove "soviet"}
        }   
    }
}
{"panzer4j_fin"
    {on spawn
        {tags add "finland"}
        {tags add "panzer4j_fin"}
        {tags add "medium_tank"}
        {delay 0.1
            {tags remove "panzer4j"}
            {tags remove "german"}
        }
    }
}
{"t3485_44_fin"
    {on spawn
        {tags add "finland"}
        {tags add "t3485_44_fin"}
        {tags add "medium_tank"}
        {delay 0.1
            {tags remove "t3485_44"}
            {tags remove "soviet"}
        } 
    }
}


;HEAVY
{"kv1_42_fin"
    {on spawn
        {tags add "finland"}
        {tags add "kv1_42_fin"}
        {tags add "heavy_tank"}
    }
}


;SPG
{"bt42"
    {on spawn
        {tags add "finland"}
        {tags add "spg"}
        {tags add "bt42"}
    }
}
{"stug3g_fin"
    {on spawn
        {tags add "finland"}
        {tags add "spg"}
        {tags add "stug3g_fin"}
    }   
}
{"isu152_fin"
    {on spawn
        {tags add "finland"}
        {tags add "spg"}
        {tags add "isu152_fin"}
        {delay 0.1
            {tags remove "isu152"}
            {tags remove "soviet"}
        }
    }   
}
{"107mm_k10ai"
	{on spawn
    	{tags add "artillery"}
        {tags add "super_heavy_artillery"}
		{tags add "finland"}
		{tags add "107mm_k10ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}
{"120mm_k78_31ai"
	{on spawn
    	{tags add "artillery"}
        {tags add "super_heavy_artillery"}
		{tags add "finland"}
		{tags add "120mm_k78_31ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}
{"122mm_m1910_finai"
	{on spawn
    	{tags add "artillery"}
        {tags add "super_heavy_artillery"}
		{tags add "finland"}
		{tags add "122mm_m1910_finai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}
{"150mm_h40ai"
	{on spawn
    	{tags add "artillery"}
        {tags add "super_heavy_artillery"}
		{tags add "finland"}
		{tags add "150mm_h40ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}
{"155mm_h17ai"
    {on spawn
        {tags add "artillery"}
        {tags add "super_heavy_artillery"}
        {tags add "finland"}
        {tags add "155mm_h17ai"}
        {tags add "no_scavenge"}
        {able select 0}
		{able emit_passangers_on_enemy 1}
    }
}

{"170mm_minewerferai"
	{on spawn
    	{tags add "artillery"}
		{tags add "finland"}
		{tags add "170mm_minewerferai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}
{"203mm_h17ai"
	{on spawn
    	{tags add "super_heavy_artillery"}
		{tags add "artillery"}
		{tags add "finland"}
		{tags add "203mm_h17ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}
{"150mm_rkh41ai"
	{on spawn
    	{tags add "rocket_artillery"}
		{tags add "finland"}
		{tags add "150mm_rkh41ai"}
		{tags add "no_scavenge"}
		{able select 0}
		{able emit_passangers_on_enemy 1}
	}
}

{"blenheim_mk1playerplane" 
	{on spawn
    	{tags add "playerplane"}
    	{tags add "aircraft"}
    	{tags add "finland"}
	}
}


;_______________________________________________
;|                  Aircraft                    |
;|______________________________________________|

