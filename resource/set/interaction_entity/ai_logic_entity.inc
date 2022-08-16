{"ai_waypoint_pole"
	{on spawn 
		{tags add "logic_post"}
	}

	{on "ai_call_light_mortar_barrage_cover"
		{tags add "ai_light_mortar_barrage_used"}

		{delay 700
			{tags remove "ai_light_mortar_barrage_used"}
		}
			
	}

	{on "ai_call_heavy_mortar_barrage_cover"
		{tags add "ai_heavy_mortar_barrage_used"}

		{delay 1000
			{tags remove "ai_heavy_mortar_barrage_used"}
		}	
	}

	{on "ai_call_full_arty_barrage_cover"
		{tags add "ai_full_arty_barrage_used"}

		{delay 1300
			{tags remove "ai_full_arty_barrage_used"}
		}
				
		
	}

	{on "ai_call_smoke_barrage_cover"
		{if not tagged "ai_smoke_barrage_used"
			{tags add "ai_smoke_barrage_used"}

			{delay 300
				{tags remove "ai_smoke_barrage_used"}
			}							
		}
	}

	{on "ai_call_scout_plane"
		{if not tagged "ai_call_scout_plane_used"
			{tags add "ai_call_scout_plane_used"}

			{delay 800
				{tags remove "ai_call_scout_plane_used"}
			}							
		}
	}

	{on "ai_call_destory_obstacles"
		{if not tagged "ai_call_destory_obstacles_used"
			{tags add "ai_call_destory_obstacles_used"}

			{delay 450
				{tags remove "ai_call_destory_obstacles_used"}
			}							
		}
	}

	{on "ai_big_bertha"
		{if not tagged "ai_big_bertha_used"
			{tags add "ai_big_bertha_used"}

			{delay 1800
				{tags remove "ai_big_bertha_used"}
			}							
		}
	}
}


{"ai_waypoint_pole_side_a_row_1"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_a_row_1"}
		{tags add "side_b_row_4"}
	}
}

{"ai_waypoint_pole_side_b_row_1"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_b_row_1"}
		{tags add "side_a_row_4"}
	}
}

{"ai_waypoint_pole_side_a_row_2"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_a_row_2"}
		{tags add "side_b_row_3"}
	}
}

{"ai_waypoint_pole_side_b_row_2"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_b_row_2"}
		{tags add "side_a_row_3"}
	}
}

{"ai_waypoint_pole_side_a_row_3"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_a_row_3"}
		{tags add "side_b_row_2"}
	}
}

{"ai_waypoint_pole_side_b_row_3"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_b_row_3"}
		{tags add "side_a_row_2"}
	}
}

{"ai_waypoint_pole_side_a_row_4"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_a_row_4"}
		{tags add "side_b_row_1"}
	}
}

{"ai_waypoint_pole_side_b_row_4"
	{on spawn 
		{tags add "drop_zone"}
		{tags add "side_b_row_4"}
		{tags add "side_a_row_1"}
	}
}


{"ce_spawn_point"
	{on spawn 
		{tags add "ce_spawn_point"}
		{tags add "rus"}
		{delay 1 
			{call "spawn_defense_tier_1"}
			{hide 1}
		}
	}









	{on "spawn_defense_tier_1"
		{if tagged "rus"
			{if rand 0.14 
				{spawn "dshk_stan"}
			else rand 0.14 
				{spawn "dshk_aa"}
			else rand 0.14 
				{spawn "ds39_stand"}
			else rand 0.14 
				{spawn "sg43_stand"}
			else rand 0.14 
				{spawn "25mm_72k"}	
			else rand 0.14 
				{spawn "45mm_m37"}
			else 
				{spawn "maxim"}	
			}
		}
	}

	{on "spawn_defense_tier_2"
		{if tagged "rus"
			{if rand 0.11
				{spawn "37mm_61k"}
			else rand 0.11 
				{spawn "m41_ampulomet"}
			else rand 0.11 
				{spawn "45mm_m42"}
			else rand 0.11 
				{spawn "57mm_zis2"}
			else rand 0.11 
				{spawn "76mm_f22"}
			else rand 0.11 
				{spawn "76mm_zis3"}	
			else rand 0.11 
				{spawn "76mm_m43"}
			else rand 0.11 
				{spawn "82mm_bm37"}
			else 
				{spawn "dshk_stan"}
			}
		}
	}

	{on "spawn_defense_tier_3"
		{if tagged "rus"
			{if rand 0.25
				{spawn "85mm_52k"}
			else rand 0.25
				{spawn "100mm_bs3"}
			else rand 0.25
				{spawn "120mm_pm38"}
			else  
				{spawn "107mm_m1910_30"}
			}
		}
	}	
}

