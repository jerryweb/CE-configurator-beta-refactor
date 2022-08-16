{"flag"
	{on spawn
		{tags add "flag_point"}
	    (mod "mp"
		    {delay 50
		    	{if tagged "defense_level_3"
		    		{spawn "ammo_point" random_position 1}
		    		{if tagged "ger"
		    			{spawn "ammo_boxes_07ger" random_position 75}
		    		else tagged "fin"
		    			{spawn "ammo_boxes_07ger" random_position 75}
		    		else
		    			{spawn "ammo_boxes_01rus" random_position 75}
		    		}
		    	}  
		    } 
		)
	}
}


{"ammo_boxes_01rus"
    {on spawn    	
		(mod "mp"
		    {tags add "rus"}
		    {tags add "heavy_at"}
		    {tags add "lootbox"}
		    {delay 5
				{spawn "pointer_mines"}
			}
		)   	    
	}
}

{"ammo_boxes_07ger"
    {on spawn
	    (mod "mp"
		    {tags add "ger"}
			{tags add "fin"}
		    {tags add "heavy_at"}
		    {tags add "lootbox"}
			{delay 5
				{spawn "pointer_mines"}			
			}
		)
	}
}

{"pointer_mines"				;// mission objective icon/helper
	{on spawn
		{tags add "pointer_mines"}
		{tags add "quest"}
		{add_view "mines" "mines" "upper"}
		{view start "mines"}
		{delay 120
			{delete}
		}
	}
}

{"ammo_point"
    {on spawn
	    {tags add "mortar"}
		{tags add "ammo_point"}
	}
}

{"parachute_cargo_attach"
	{on "start"
		{animate_place "attach" "paratruper_flight"}
	}
	{on animation_end "landing"
		{with_linked_entity "attach"
			{unlink}
		}
	}
}

{"artillery_aim2"
    {on spawn
	    {delay 2
			{spawn "inf_crate_rus" offset 0 0 -690 }
		}
	}
}

{"artillery_aim3"
    {on spawn
		{delay 2
			{spawn "inf_crate_ger" offset 0 0 -690}
		}
	}
}

{"artillery_aim4"
    {on spawn
		{delay 2
			{spawn "inf_crate_fin" offset 0 0 -690}
		}
	}
}

{"pointer_player_paratrooper"
    {on spawn
		{tags add "pointer_player_paratrooper"}
		{delay 0.6
			{tags add "pointer_used"}
		}
	}
}

{"pointer_destroy_obstacle"	
    {on spawn
    	{tags add "pointer_destroy_obstacle"}
    	{if not tagged "moved_to_obstacle"
			{delay 1
				{tags add "moved_to_obstacle"}
				{delay 1
					{add_view "smoke_flare_green" "smoke" "root"}
					{view start "smoke"}
					{if rand 0.33
						{spawn "dynamite_ger_x7" random_position 10}
					else rand 0.33 
						{spawn "geballteladung_3kg" random_position 10}
					else
						{spawn "satchel_charge_rus" random_position 10}
					}
					{delay 10 2 {view stop "smoke"}
						{spawn "explosion"}
						{delay 1 {delete}}
					}
				}	
			}
		}
	}
}

{"pointer_defend"
	{on spawn
		{tags add "pointer_defend"}
	}
	{on "show"
		{inactive 0}
		{delay 5
			{inactive 1}
		}
	}
}

{"pointer_enemy"
	{on spawn
		{tags add "pointer_enemy"}
		{delay 10
			{tags remove "pointer_enemy"}
		}
	}
}

{"artillery_aim"
	{on spawn
		{tags add "artillery_aim"}
		{delay 10
		    {delete}
		}
	}
}

{"pointer_artillery"
	{on spawn
		{tags add "pointer_artillery"}
	}
}

{"pointer_mortar"
	{on spawn
		{tags add "pointer_mortar"}
	}
}

{"pointer_going"
	{on spawn
		{tags add "pointer_going"}
		{tags add "towing_marker"}
		{delay 6
			{tags add "towing_marker"}
		}
	}
}

{"pointer_watchout"
	{on spawn
		{tags add "pointer_watchout"}
	}
	{on "show"
		{delay 50
			{inactive 0}
		}
	}
}

{"pointer_help"
	{on spawn
		{tags add "medicmarker"}
		{delay 15.5
			{delete}
		}
	}
}

{"pointer_attack"
	{on spawn
		{tags add "pointer_attack"}
	    {delay 1
			{spawn "flare_marker"}
		}
	}
	{on "show"
		{delay 10
			{inactive 0}
		}
	}
}

{"flare_marker"				;// Flare Marker ammo, for special missions scripting
	{on spawn
		{tags add "flare"}
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{delay 6 
			{tags add "acknowledged"}
			}
		{delay 10 2 {view stop "smoke"}}
		{delay 10 {delete}}
	}
}

{"user_guide"
	{on spawn
		{tags add "user_guide"}
		{inactive 0}
		{delay 10
			{hide 5}
		}
	}
}

{"radio_beacon"
	{on spawn
		{add_view "stop_signal" "lamp" "fx_lamp"}
		{view start "lamp"}
	}
}

{"eureka_beacon"
	{on spawn
		{spawn "light_boat_dir" "eureka_beacon_light" x}
		{delay 150.0
			{delete}
		}
	}
}

{"sandstorm"
	{on spawn
		{add_view "desert2_fx" "lamp" "fx_lamp"}
		{view start "super"}
	}
}

{"big_flying_rocket"
	{on spawn
		{link_sound "fly" "weapon/shot/reactive/rocket"}
		{play_sound "fly" 1}
	}
}

{"welding"
	{on spawn
		{add_view "spark_electro02a" "welding" "root"}
		{view start "welding"}
	}
}

{"air_cloud"
	{on spawn
		{add_view "dustrun_snow_big" "air_cloud" "root"}
		{view start "air_cloud"}
	}
}

{"exp_det_dust"
	{on "explode"
		{add_view "ex_det" "detonation" "basis"}
		{view start "detonation"}
	}
}

{"flash_gun_big_entity"
	{on "explode"
		{add_view "flash_gun_big" "detonation" "basis"}
		{view start "detonation"}
	}
}

{"light_plafond_dim_entity"
	{on spawn
		{add_view "light_plafond_dim" "welding" "root"}
		{view start "welding"}
	}
}

{"light_plafond_dim_w_entity"
	{on spawn
		{add_view "light_plafond_dim_w" "welding" "root"}
		{view start "welding"}
	}
}

(define "shellhole_show_with_delay"
	{on spawn
		{view hide "shellhole"}
		{delay %0
			{view show "shellhole"}
		}
	}
)

{"shellhole_dead_moto"
	("shellhole_show_with_delay" args 0.1)
}
{"shellhole_dead_car"
	("shellhole_show_with_delay" args 0.2)
}
{"shellhole_dead_tank"
	("shellhole_show_with_delay" args 0.35)
}

{"foxhole_spawned"
	{on spawn
		{tags add "foxhole_spawned"}		;// mission script helper
	}
}

{"trench_engineer"
	{on spawn
		{tags add "trench_spawned"}		;// mission script helper
	}
}

{"flare"
	{on spawn
		{gravity 1.3}
		{tags add "flare"}
		{add_view "signal_rocket" "flare" "root"}
		{view start "flare"}
		{delay 45.5
			{delete}
		}
	}
}

{"flare_marker"				;// Flare Marker ammo, for special missions scripting
	{on spawn
		{tags add "flare"}
		{add_view "smoke_flare_green" "smoke" "root"}
		{view start "smoke"}
		{delay 6 
			{tags add "acknowledged"}
			}
		{delay 10 2 {view stop "smoke"}}
		{delay 10 {delete}}
	}
}


{"parachute_signal_fire"
	{on spawn
		{add_view "signal_rocket2" "signal" "fx_signal"}
		{view start "signal"}
		{ani_play "flight" 0.5}
		{delay 3
			{ani_stop "flight"}
			{delay 35
				{ani_play "flight" resume callback}
			}
		}
	}
	{on animation_end "flight"
		{delay 0
			{delete}
		}
	}
}

{"map_point2"
    {on spawn 
	    {call "fortification"}
	}
}



{"flare_artillery"			;// Flare that spawns shells that fall to ground. Off-map artillery
	{on spawn
		{add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{tags add "paradrophere"}
		{delay 50 {view stop "smoke"}}
		{delay 50 {delete}}
	}
}

