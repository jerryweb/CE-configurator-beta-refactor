{"human"		
	{on spawn
		{if not tagged "pilot"
		   	(mod "mp" 
			    {if user_control 
					{call "remove_incorrect_tags_from_player"}
					{call "battlecount"}
					{if tagged "level_8"
					    {if not linked
						    {add_view	"rank01"			"rank01"			"head" not_manual not_scenario}			
						}
					}
				}
				{delay 1
					{call "tag_player_paratroopers_on_plane"}
			    }
			
				{delay 15
				    {if tagged "russoldier"
					    {if not tagged "hasbio"
							{if rand 0.01
								{tags add "biorus1"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus2"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus3"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus4"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus5"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus6"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus7"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus8"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus9"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus10"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus11"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus12"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus13"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus14"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus15"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus16"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus17"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus18"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus19"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus20"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus21"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus22"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus23"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus24"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus25"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus26"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus27"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus28"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus29"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus30"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus31"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus32"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus33"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus34"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus35"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus36"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus37"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus38"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus39"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus40"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus41"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus42"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus43"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus43"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus43"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus44"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus45"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus46"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus47"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus48"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus49"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus50"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus51"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus52"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus53"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus54"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus55"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus56"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus57"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus58"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus59"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus60"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus61"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus62"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus63"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus64"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus65"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus66"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus67"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus68"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus69"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus70"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus71"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus72"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus73"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus74"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus75"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus76"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus77"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus78"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus79"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus80"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus81"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus82"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus83"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus84"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus85"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus86"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus87"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus88"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus89"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus90"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus91"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus92"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus93"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus94"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus95"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus96"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus97"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus98"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "biorus99"}
								{tags add "hasbio"}
							else 
							    {tags add "biorus100"}
								{tags add "hasbio"}
							}
						}
					}
					{if tagged "gersoldier"
					    {if not tagged "hasbio"
							{if rand 0.01
								{tags add "bioger1"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger2"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger3"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger4"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger5"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger6"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger7"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger8"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger9"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger10"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger11"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger12"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger13"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger14"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger15"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger16"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger17"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger18"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger19"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger20"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger21"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger22"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger23"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger24"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger25"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger26"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger27"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger28"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger29"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger30"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger31"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger32"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger33"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger34"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger35"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger36"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger37"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger38"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger39"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger40"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger41"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger42"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger43"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger43"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger43"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger44"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger45"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger46"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger47"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger48"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger49"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger50"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger51"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger52"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger53"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger54"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger55"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger56"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger57"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger58"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger59"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger60"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger61"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger62"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger63"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger64"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger65"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger66"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger67"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger68"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger69"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger70"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger71"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger72"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger73"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger74"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger75"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger76"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger77"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger78"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger79"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger80"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger81"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger82"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger83"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger84"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger85"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger86"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger87"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger88"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger89"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger90"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger91"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger92"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger93"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger94"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger95"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger96"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger97"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger98"}
								{tags add "hasbio"}
							else rand 0.01
							    {tags add "bioger99"}
								{tags add "hasbio"}
							else 
							    {tags add "bioger100"}
								{tags add "hasbio"}
							}
						}
					}
				}
		    
			)
		}	
		{delay 0.2
			{if not user_control
				{if not linked "multi_board"
					{if not linked "airborne"
						{call "tag_ai_crew"}					
					}
				}
			}
		}
	}

	{on "remove_incorrect_tags_from_player"
		{if user_control
			{tags remove "zone1"}
			{tags remove "zone2"}
			{tags remove "zone3"}
			{tags remove "zone4"}
			{tags remove "zone5"}
			{tags remove "stage1"}
			{tags remove "stage2"}
			{tags remove "stage3"}
			{tags remove "stage4"}
			{tags remove "stage5"}
			{tags remove "cmp_def"}
			{tags remove "cmp_mg"}
			{tags remove "freeroam"}
			{tags remove "mine_planted"}
			{tags remove "dcg_mine_sign"}
			{tags remove "1_b_2-3"}
			{tags remove "1_a_2-3"}
			{tags remove "2_b_2-3"}
			{tags remove "2_a_2-3"}
			{tags remove "3_b_2-3"}
			{tags remove "3_a_2-3"}
			{tags remove "4_b_2-3"}
			{tags remove "4_a_2-3"}
			{tags remove "5_b_2-3"}
			{tags remove "5_a_2-3"}
			{tags remove "1_b_3"}
			{tags remove "1_a_3"}
			{tags remove "2_b_3"}
			{tags remove "2_a_3"}
			{tags remove "3_b_3"}
			{tags remove "3_a_3"}
			{tags remove "4_b_3"}
			{tags remove "4_a_3"}
			{tags remove "5_b_3"}
			{tags remove "5_a_3"}
			{tags remove "hmg"}
			{tags remove "aaflak"}
			{tags remove "light_at_gun"}
			{tags remove "medium_at_gun"}
			{tags remove "heavy_at_gun"}
			{tags remove "artillery"}
			{tags remove "fpc1"}
			{tags remove "fpc2"}
			{tags remove "fpc3"}
			{tags remove "fpc4"}
			{tags remove "fpc5"}
			{tags remove "noammo"}
			{tags remove "digging"}
			{tags remove "digging_animation_started"}
			{tags remove "digging_complete"}
			{tags remove "officerai"}
			{tags remove "ai_tank_crew"}
			{tags remove "engineer_ai"}
			{tags remove "ai_engineer"}
			{tags remove "ai_artilleryman"}
			{tags remove "freeroam_tank_target"}
			{tags remove "freeroam_inf_target"}
			{tags remove "freeroam_emplacement_target"}
		}
	}
	   	
	{on "medic_carry" 		;// UI button to toggle engine on/off
		{if operatable
			{if not tagged "1" 
				{if tagged "default" 
				    {tags add "carry"}
				    {tags remove "default"}
				    {view start ally neutral "marker_personage"}
					{view pause "marker_healing"}
				else tagged "carry_off"
				    {tags add "default"}
					{tags remove "carry_off"}
				    {view pause "marker_healing"}
			    else 
				    {tags add "carry_off"}
					{tags remove "carry"}
					{tags remove "default"}
					{view start ally neutral "marker_healing"}
					{view pause "marker_personage"}
				}
			}
		}
	}
	
	{on "tag_medic_reviving"
		{tags add "reviving"}
		{delay 10 
			{if tagged "reviving"
				{tags remove "reviving"}
			}
		}
	}

	{on "stop_healing"
		{if not tagged "carry_off"
		    {view pause "marker_healing"}
		}
		{tags remove "reviving"}
	}

	{on "medic_get_body"
		{tags add "picking_up_body"}
		{delay 15
			{tags remove "picking_up_body"}
		}
	}
	
	{on "stop_personage"
		{view pause "marker_personage"}
		{view pause "marker_healing"}
	}
	
	{on "ai_move_to_repair"
		{tags remove "ai_engineer_going_to_repair"}
	}

	{on "ai_move_to_recrew"
		{if not user_control

			{if tagged "ai_tank_crew"

				{tags remove "idle_ai_tank_crew"}
				{tags remove "ai_tank_crew_selected"}
				
				{if not dead
					{tags add "ai_crew_recrewing"}
				}	
				{delay 120
					{tags remove "ai_crew_recrewing"}
					{if not dead
						{tags add "idle_ai_tank_crew"}
					}
				}
			else tagged "ai_artilleryman"
				{tags remove "idle_ai_artilleryman"}
				{tags remove "ai_emplacement_crew_selected"}
				
				{if not dead
					{tags add "ai_crew_recrewing"}
				}	
				{delay 120
					{tags remove "ai_crew_recrewing"}
					{if not dead
						{tags add "idle_ai_artilleryman"}
					}
				}
			else 
				{tags remove "ai_recrewing_thread_1"}
				{tags remove "ai_recrewing_thread_2"}
				{if not dead
					{tags add "ai_inf_recrewing"}
				}	
				{delay 120
					{tags remove "ai_inf_recrewing"}
				}
			}
		}
	}
	
	{on "go_resupply" 		;// UI button to toggle engine on/off
		{if operatable
			{if not tagged "resupplying" 
				{tags add "resupplying"}
				{tags remove "noresupply"}
				{view pause "marker_ammo_out"}
				{view start ally neutral "start_blinded"}
				{delay 2.5
			        {view pause "start_blinded"}
				}
			else 
				{tags add "noresupply"}
				{tags remove "resupplying"}
				{view pause "marker_ammo_refill"}
				{view start ally neutral "marker_ammo_out"}
				{delay 2.5
			        {view pause "marker_ammo_out"}
				}
			}
		}
	}
	
	{on "start_ammo_out"
		{view start ally neutral "marker_ammo_out"}
		{tags add "noammo"}
	}

	{on "stop_ammo_out"
		{view pause "marker_ammo_out"}
		{tags add "noammo"}
	}
	
	{on "start_ammo_refill"
		{view start ally neutral "marker_ammo_refill"}
		{tags remove "noammo"}
		{delay 2.5
			{view pause "marker_ammo_refill"}
			{tags remove "noammo"}
		}
	}

	{on ground_hit
		
		{if linked "paratrooper_attach"
			{tags remove "can_die"}	
			{unlink}						;// kicks human out of parachute when reaching ground
			{set "not_knocked" 1}			;// helps stops {knock_down} call when thrown off from plane
			{delay 1.0						;// stops sliding after landing on ground. forces soldier to ground
				{physics_work 0}
				{delay 0
					{physics_work 1}
					{throw_off up 0.5 0.2 forward 1 0.5}
				}
			}
			{delay 1.0
				{drop_orders}
				{if user_control
					{tags remove "player_para"}
				else 
					{if not dead
						{tags add "ai_inf"}
						{if rand 0.0  
							{tags add "attacking_radio"}
						else rand 0.0
							{tags add "attacking_arty"}
						else
							{tags add "para_freeroam"}
						}
					}
				}
				{tags remove "eject"}
				{tags remove "deployed"}
			}
		else tagged "can_die"

			{call "die"}
			{kill_delay "parachute"}
			{tags remove "can_die"}
			{tags remove "eject"}

		else
			{if min_speed 10
				{spawn "blood_medium" "basis" x}	;// Fall and hit the ground.
				{spawn "blood"}						;// blood splatter ground texture
			}
		}
	}

	{on board in							;// boarding a vehicle
		{view pause "swim"}
		{tags remove "ai_inf_recrewing"}
		{if linked "airborne"
			{volumes disable blast}					;// stops crew from being killed by AA blast energy
		}
		{if tagged "ai_tank_crew"
			{tags remove "idle_ai_tank_crew"}
		else tagged "ai_artilleryman"
			{tags remove "idle_ai_artilleryman"}
		}	
	}

	{on board out 							;// exiting a vehicle		
		{call "check_if_ai_crew_idle"}
		{if linked "halftrack"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "multi_board"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "m3_usa"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "as37"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "type1_ho-ki_mg"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "type1_ho-ki"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}	
		else linked "zis5"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "t20"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "m3a1e1_scout_mgun"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}	
		else linked "t20_fin"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "ford_3ton"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}
		else linked "ford_v3000"
			{if not user_control
				{if not tagged "player"
				    {delay 0.1
					    {tags add "dismounted_freeroam"}
					    {tags add "ai_inf"}
				    }
				}
			}													
		else linked "airborne"
			{if tagged "player_para"
				{tags remove "player_para"}
			}
			{delay 0.1
				{call "eject"}
				{volumes disable contact}			;// stops humans from "colliding" with plane when ejecting.
				{volumes enable bullet}
				{delay 1 {volumes enable contact blast}}
			}
		}
	}
	
	{on "talk_to_me"
		{tags add "talking"}
	}


	{on "eject" overload
		{if not tagged "player_trooper"
			{tags add "can_die"}
		}
		{if not tagged "player"
			{tags add "deployed"}
		}	
		{tags remove "on_plane_1"}
		{tags remove "on_plane_2"}
		{tags remove "on_plane_3"}
		{tags remove "on_plane_4"}
		{tags remove "on_plane_5"}
		{tags remove "on_plane_6"}
		{tags remove "on_plane_7"}
		{tags remove "on_plane_8"}
		{tags remove "on_plane_9"}
		{tags remove "on_plane_10"}
		{tags remove "on_plane_11"}
		{tags remove "on_plane_12"}
		{tags remove "para_ready"}
		{tags remove "player_para_ready"}
		{tags remove "player_on_plane"}
		{tags remove "player_trooper"}
		{call "pull_chute"}		
	}

	{on "pull_chute"
		{if altitude 1
			{throw_off up 2 forward 0.01}
			{if altitude 56
				{if not dead
					{delay 3.0 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 51
				{if not dead
					{delay 2.7 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 48 		
				{if not dead
					{delay 2.8 0.1 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 43 		
				{if not dead
					{delay 2.4 0.1 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 38 		
				{if not dead
					{delay 2.2 0.1 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 33 		
				{if not dead
					{delay 2.0 0.1 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 28 		
				{if not dead
					{delay 1.2 0.1 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 23 		
				{if not dead
					{delay 1.0 0.1 "parachute"
						{tags add "eject"}	
						{spawn "paratrooper_attach" offset 205 -10 -534}
					}
				}
			else altitude 4 		
				{if not dead
				{delay 0.4 0.1 "parachute"
					{tags add "eject"}	
					{spawn "paratrooper_attach" offset 205 -10 -534}
				}}

		else
			;{tags remove "can_die"}
			{throw_on_ground}
			}
		}
	}

	{on "tag_paratroopers_on_plane" 
		{if not tagged "on_plane_1"
			{if not tagged "on_plane_2"
				{if not tagged "on_plane_3"
					{if not tagged "on_plane_4"
						{if not tagged "on_plane_5"
							{if not tagged "on_plane_6"
								{if not tagged "on_plane_7"
									{if not tagged "on_plane_8"
										{if not tagged "on_plane_9"
											{if not tagged "on_plane_10"
												{if not tagged "on_plane_11"
													{if not tagged "on_plane_12"
														{call "tag_paratrooper_on_plane"}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	{on "tag_paratrooper_on_plane"
		{if not user_control
			{tags add "para"}
		}
		{if linked "bf110_para_plane"
			{tags add "para_need_tag"}
			{delay 45
				{tags remove "para_need_tag"}
			}
		else linked "il2_mod42_para_plane"
			{tags add "para_need_tag"}
			{delay 45
				{tags remove "para_need_tag"}
			}
		else linked "b25_para_plane"
			{tags add "para_need_tag"}
			{delay 45
				{tags remove "para_need_tag"}
			}
		else linked "beaufighter_para_plane"
			{tags add "para_need_tag"}
			{delay 45
				{tags remove "para_need_tag"}
			}	
		else linked "j2m_raiden_para_plane"
			{tags add "para_need_tag"}
			{delay 45
				{tags remove "para_need_tag"}
			}
		else linked "sm79_para_plane"
			{tags add "para_need_tag"}
			{delay 45
				{tags remove "para_need_tag"}
			}					
		else linked "ju-52_para_plane"
			{tags add "para_need_tag"}
			{delay 45
				{tags remove "para_need_tag"}
			}	
		}		
	}	
	
	{on "tag_player_paratroopers_on_plane"
		{if linked "bf110_para_planeplayer"
			{tags add "player_para"}
			{tags add "player"}
			{tags add "player_trooper"}
		else linked "ju-52_para_plane_player"
			{tags add "player_para"}
			{tags add "player"}
			{tags add "player_trooper"}
		else linked "il2_mod42_para_planeplayer"
			{tags add "player_para"}
			{tags add "player"}
			{tags add "player_trooper"}	
		}
	}

	{on "para_attacking"
		{if not dead
			{tags add "para_attacking"}
			{delay 45
				{tags remove "para_attacking"}
			}
		}
	}

	{on "fortification"
	    {if rand 0.08
		    {spawn "soldier_foxhole" "basis" x}
		else rand 0.08 
		    {spawn "mg_foxhole" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_heap_curved" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_heap_straight" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_structured_curved" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_structured_curved_big" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_structured_straight" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_watchtower" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_curved" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_curved_heap" "basis" x}
		else rand 0.08 
		    {spawn "sandbag_straight" "basis" x}
		else 
		    {spawn "sandbag_straight_heap" "basis" x}
		}
	}
	
	{on "start_veterancy"
	    {delay 10{if tagged "level_7"
            {if not tagged "level_8"
			    {tags add "level_8"}
				{tags remove "level_7"}
				{if not linked
				    {add_view	"rank01"	"rank01"	"head" not_manual not_scenario}
				}
				{set "start_veterancy" 0}
			}
		}
		{if tagged "level_6"
            {if not tagged "level_7"
			    {tags add "level_7"}
				{tags remove "level_6"}
				{set "start_veterancy" 0}
		    }
		}
		{if tagged "level_5"
            {if not tagged "level_6"
			    {tags add "level_6"}
				{tags remove "level_5"}
				{set "start_veterancy" 0}
		    }
		}
		{if tagged "level_4"
            {if not tagged "level_5"
			    {tags add "level_5"}
				{tags remove "level_4"}
				{set "start_veterancy" 0}
		    }
		}
		{if tagged "level_3"
            {if not tagged "level_4"
			    {tags add "level_4"}
				{tags remove "level_3"}
				{set "start_veterancy" 0}
		    }
		}
		{if tagged "level_2"
            {if not tagged "level_3"
			    {tags remove "level_2"}
				{tags add "level_3"}
				{set "start_veterancy" 0}
		    }
		}
		{if tagged "level_1"
            {tags add "level_2"}
			{tags remove "level_1"}
			{set "start_veterancy" 0}
		}
		{if not tagged "level_1"
		    {tags add "level_1"}
			{set "start_veterancy" 0}
		}
		}
	}
	
	{on "battlecount"
	    {delay 300
			{if tagged "battle49"
        	    {if not tagged "battle50"
				    {tags add "battle50"}
					{tags remove "battle49"}
					
			    }
			}
			{if tagged "battle48"
        	    {if not tagged "battle49"
				    {tags add "battle49"}
					{tags remove "battle48"}
					
			    }
			}
			{if tagged "battle47"
       	   		{if not tagged "battle48"
				    {tags add "battle48"}
					{tags remove "battle47"}
					
		   		}
			}
			{if tagged "battle46"
 	            {if not tagged "battle47"
				    {tags add "battle47"}
					{tags remove "battle46"}
					
			    }
			}
			{if tagged "battle45"
       	     	{if not tagged "battle46"
				    {tags add "battle46"}
					{tags remove "battle45"}
					
			    }
			}
			{if tagged "battle44"
       	  	    {if not tagged "battle45"
				    {tags add "battle45"}
					{tags remove "battle44"}
					
			    }
			}
			{if tagged "battle43"
     	        {if not tagged "battle44"
			 	    {tags add "battle44"}
					{tags remove "battle43"}
					
			    }
			}
			{if tagged "battle42"
        	    {if not tagged "battle43"
				    {tags add "battle43"}
					{tags remove "battle42"}
					
			    }
			}
			{if tagged "battle41"
       	   	    {if not tagged "battle42"
				    {tags add "battle42"}
					{tags remove "battle41"}
					
		 	   }
			}
			{if tagged "battle40"
       	        {if not tagged "battle41"
				    {tags remove "battle40"}
					{tags add "battle41"}
					
		 	   }
			}
			{if tagged "battle39"
       	        {if not tagged "battle40"
				    {tags remove "battle39"}
					{tags add "battle40"}
					
		 	   }
			}
			{if tagged "battle38"
     	       {if not tagged "battle39"
				    {tags add "battle39"}
					{tags remove "battle38"}
					
			    }
			}
			{if tagged "battle37"
      	      {if not tagged "battle38"
				    {tags add "battle38"}
					{tags remove "battle37"}
					
			    }
			}
			{if tagged "battle36"
        	    {if not tagged "battle37"
				    {tags add "battle37"}
					{tags remove "battle36"}
					
		 	   }
			}
			{if tagged "battle35"
        	    {if not tagged "battle36"
				    {tags add "battle36"}
					{tags remove "battle35"}
					
			    }
			}
			{if tagged "battle34"
        	    {if not tagged "battle35"
				    {tags add "battle35"}
					{tags remove "battle34"}
					
		 	   }
			}
			{if tagged "battle33"
        	    {if not tagged "battle34"
				    {tags add "battle34"}
					{tags remove "battle33"}
					
			    }
			}
			{if tagged "battle32"
           		{if not tagged "battle33"
				    {tags add "battle33"}
					{tags remove "battle32"}
					
		  	 	}
			}
			{if tagged "battle31"
        	    {if not tagged "battle32"
				    {tags add "battle32"}
					{tags remove "battle31"}
					
			    }
			}
			{if tagged "battle30"
        	    {if not tagged "battle31"
				    {tags add "battle31"}
					{tags remove "battle30"}
					
			    }
			}
			{if tagged "battle29"
        	    {if not tagged "battle30"
				    {tags add "battle30"}
					{tags remove "battle29"}
					
			    }
			}
			{if tagged "battle28"
       	   		{if not tagged "battle29"
				    {tags add "battle29"}
					{tags remove "battle28"}
					
		   		}
			}
			{if tagged "battle27"
 	            {if not tagged "battle28"
				    {tags add "battle28"}
					{tags remove "battle27"}
					
			    }
			}
			{if tagged "battle26"
       	     	{if not tagged "battle27"
				    {tags add "battle27"}
					{tags remove "battle26"}
					
			    }
			}
			{if tagged "battle25"
       	  	    {if not tagged "battle26"
				    {tags add "battle27"}
					{tags remove "battle26"}
					
			    }
			}
			{if tagged "battle24"
     	        {if not tagged "battle25"
			 	    {tags add "battle25"}
					{tags remove "battle24"}
					
			    }
			}
			{if tagged "battle23"
        	    {if not tagged "battle24"
				    {tags add "battle24"}
					{tags remove "battle23"}
					
			    }
			}
			{if tagged "battle22"
       	   	    {if not tagged "battle23"
				    {tags add "battle23"}
					{tags remove "battle22"}
					
		 	   }
			}
			{if tagged "battle21"
       	        {if not tagged "battle22"
				    {tags remove "battle21"}
					{tags add "battle22"}
					
		 	   }
			}
			{if tagged "battle20"
        	    {tags add "battle21"}
				{tags remove "battle20"}
				
			}
			{if tagged "battle19"
     	       {if not tagged "battle20"
				    {tags add "battle20"}
					{tags remove "battle19"}
					
			    }
			}
			{if tagged "battle18"
      	      {if not tagged "battle19"
				    {tags add "battle19"}
					{tags remove "battle18"}
					
			    }
			}
			{if tagged "battle17"
        	    {if not tagged "battle18"
				    {tags add "battle18"}
					{tags remove "battle17"}
					
		 	   }
			}
			{if tagged "battle16"
        	    {if not tagged "battle17"
				    {tags add "battle17"}
					{tags remove "battle16"}
					
			    }
			}
			{if tagged "battle15"
        	    {if not tagged "battle16"
				    {tags add "battle16"}
					{tags remove "battle15"}
					
		 	   }
			}
			{if tagged "battle14"
        	    {if not tagged "battle15"
				    {tags add "battle15"}
					{tags remove "battle14"}
					
			    }
			}
			{if tagged "battle13"
           		{if not tagged "battle14"
				    {tags add "battle14"}
					{tags remove "battle13"}
					
		  	 	}
			}
			{if tagged "battle12"
        	    {if not tagged "battle13"
				    {tags add "battle13"}
					{tags remove "battle12"}
					
			    }
			}
			{if tagged "battle11"
        	    {if not tagged "battle12"
				    {tags add "battle12"}
					{tags remove "battle11"}
					
			    }
			}
			{if tagged "battle10"
        	    {if not tagged "battle11"
				    {tags add "battle11"}
					{tags remove "battle10"}
					
			    }
			}
			{if tagged "battle9"
       	   		{if not tagged "battle10"
				    {tags add "battle10"}
					{tags remove "battle9"}
					
		   		}
			}
			{if tagged "battle8"
 	            {if not tagged "battle9"
				    {tags add "battle9"}
					{tags remove "battle8"}
					
			    }
			}
			{if tagged "battle7"
       	     	{if not tagged "battle8"
				    {tags add "battle8"}
					{tags remove "battle7"}
					
			    }
			}
			{if tagged "battle6"
       	  	    {if not tagged "battle7"
				    {tags add "battle7"}
					{tags remove "battle6"}
					
			    }
			}
			{if tagged "battle5"
     	        {if not tagged "battle6"
			 	    {tags add "battle6"}
						{delay 1
						{tags remove "battle5"}
						}
					
					
			    }
			}
			{if tagged "battle4"
        	    {if not tagged "battle5"
				    {tags add "battle5"}
						{delay 1
					{tags remove "battle4"}
						}
					
			    }
			}
			{if tagged "battle3"
       	   	    {if not tagged "battle4"
				    {tags add "battle4"}
						{delay 1
					{tags remove "battle3"}
						}
					
		 	   }
			}
			{if tagged "battle2"
       	        {if not tagged "battle3"
				    {tags remove "battle2"}
						{delay 1
					{tags add "battle3"}
						}
					
		 	   }
			}
			{if tagged "battle1"
        	    {if not tagged "battle2"
					{tags add "battle2"}
						{delay 1
					{tags remove "battle1"}
						}
					
				}
			}
			{if not tagged "battleinfon"
			    {if not tagged "battle1"
					{tags add "battle1"}
					{tags add "battleinfon"}
				}
			
			}
		}
	}
	
	{on "hit-scream"
		{if user_control 
			{call "hitinfo"}
		}
		{if not "talk"
			{set "talk" 1}
			{talk "injuring"}
			{delay 10 2
				{set "talk" 0}
			}
		}
	}
		
	{on "hitinfo"
	;//	{if user_control
	;//	    {delay 3
	;//			{if tagged "hitinf19"
	;//     	       {if not tagged "hitinf20"
	;//				    {tags add "hitinf20"}
	;//					{tags remove "hitinf19"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf18"
	;//      	      {if not tagged "hitinf19"
	;//				    {tags add "hitinf19"}
	;//					{tags remove "hitinf18"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf17"
	;//        	    {if not tagged "hitinf18"
	;//				    {tags add "hitinf18"}
	;//					{tags remove "hitinf17"}
	;//					{set "hitinfo" 0}
	;//		 	   }
	;//			}
	;//			{if tagged "hitinf16"
	;//        	    {if not tagged "hitinf17"
	;//				    {tags add "hitinf17"}
	;//					{tags remove "hitinf16"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf15"
	;//        	    {if not tagged "hitinf16"
	;//				    {tags add "hitinf16"}
	;//					{tags remove "hitinf15"}
	;//					{set "hitinfo" 0}
	;//		 	   }
	;//			}
	;//			{if tagged "hitinf14"
	;//        	    {if not tagged "hitinf15"
	;//				    {tags add "hitinf15"}
	;//					{tags remove "hitinf14"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf13"
	;//           		{if not tagged "hitinf14"
	;//				    {tags add "hitinf14"}
	;//					{tags remove "hitinf13"}
	;//					{set "hitinfo" 0}
	;//		  	 	}
	;//			}
	;//			{if tagged "hitinf12"
	;//        	    {if not tagged "hitinf13"
	;//				    {tags add "hitinf13"}
	;//					{tags remove "hitinf12"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf11"
	;//        	    {if not tagged "hitinf12"
	;//				    {tags add "hitinf12"}
	;//					{tags remove "hitinf11"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf10"
	;//        	    {if not tagged "hitinf11"
	;//				    {tags add "hitinf11"}
	;//					{tags remove "hitinf10"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf9"
	;//       	   		{if not tagged "hitinf10"
	;//				    {tags add "hitinf10"}
	;//					{tags remove "hitinf9"}
	;//					{set "hitinfo" 0}
	;//		   		}
	;//			}
	;//			{if tagged "hitinf8"
	;// 	            {if not tagged "hitinf9"
	;//				    {tags add "hitinf9"}
	;//					{tags remove "hitinf8"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf7"
	;//       	     	{if not tagged "hitinf8"
	;//				    {tags add "hitinf8"}
	;//					{tags remove "hitinf7"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf6"
	;//       	  	    {if not tagged "hitinf7"
	;//				    {tags add "hitinf7"}
	;//					{tags remove "hitinf6"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf5"
	;//     	        {if not tagged "hitinf6"
	;//			 	    {tags add "hitinf6"}
	;//					{tags remove "hitinf5"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf4"
	;//        	    {if not tagged "hitinf5"
	;//				    {tags add "hitinf5"}
	;//					{tags remove "hitinf4"}
	;//					{set "hitinfo" 0}
	;//			    }
	;//			}
	;//			{if tagged "hitinf3"
	;//       	   	    {if not tagged "hitinf4"
	;//				    {tags add "hitinf4"}
	;//					{tags remove "hitinf3"}
	;//					{set "hitinfo" 0}
	;//		 	   }
	;//			}
	;//			{if tagged "hitinf2"
	;//       	        {if not tagged "hitinf3"
	;//				    {tags remove "hitinf2"}
	;//					{tags add "hitinf3"}
	;//					{set "hitinfo" 0}
	;//		 	   }
	;//			}
	;//			{if tagged "hitinf1"
	;//                {tags remove "hitinf1"}        	    
	;//				{if not tagged "hitinf2"
	;//				{delay 5
	;//		       	 	{tags add "hitinf2"}
	;//				}
	;//				}
	;//				{set "hitinfo" 0}
	;//			}
	;//			{if not tagged "hitinf1"
	;//			    {if not tagged "hitinfoon"
	;//					{tags add "hitinf1"}
	;//					{tags add "hitinfoon"}
	;//				}
	;//				{set "hitinfo" 0}
	;//			}
	;//		}
	;//	}
	}
	
	{on "smoking"
		{if user_control
			{call "smokeinfo"}
		}
		{view start "smoke"}
		{delay 1 0.1
			{view pause "smoke"}
		}
	}
	
	{on "smokeinfo"
		{if user_control
			{delay 3
				{if tagged "cigs19"
	     	       {if not tagged "cigs20"
					    {tags add "cigs20"}
						{tags remove "cigs19"}
						
				    }
				}
				{if tagged "cigs18"
	      	      {if not tagged "cigs19"
					    {tags add "cigs19"}
						{tags remove "cigs18"}
						
				    }
				}
				{if tagged "cigs17"
	        	    {if not tagged "cigs18"
					    {tags add "cigs18"}
						{tags remove "cigs17"}
						
			 	   }
				}
				{if tagged "cigs16"
	        	    {if not tagged "cigs17"
					    {tags add "cigs17"}
						{tags remove "cigs16"}
						
				    }
				}
				{if tagged "cigs15"
	        	    {if not tagged "cigs16"
					    {tags add "cigs16"}
						{tags remove "cigs15"}
						
			 	   }
				}
				{if tagged "cigs14"
	        	    {if not tagged "cigs15"
					    {tags add "cigs15"}
						{tags remove "cigs14"}
						
				    }
				}
				{if tagged "cigs13"
	           		{if not tagged "cigs14"
					    {tags add "cigs14"}
						{tags remove "cigs13"}
						
			  	 	}
				}
				{if tagged "cigs12"
	        	    {if not tagged "cigs13"
					    {tags add "cigs13"}
						{tags remove "cigs12"}
						
				    }
				}
				{if tagged "cigs11"
	        	    {if not tagged "cigs12"
					    {tags add "cigs12"}
						{tags remove "cigs11"}
						
				    }
				}
				{if tagged "cigs10"
	        	    {if not tagged "cigs11"
					    {tags add "cigs11"}
						{tags remove "cigs10"}
						
				    }
				}
				{if tagged "cigs9"
	       	   		{if not tagged "cigs10"
					    {tags add "cigs10"}
						{tags remove "cigs9"}
						
			   		}
				}
				{if tagged "cigs8"
	 	            {if not tagged "cigs9"
					    {tags add "cigs9"}
						{tags remove "cigs8"}
						
				    }
				}
				{if tagged "cigs7"
	       	     	{if not tagged "cigs8"
					    {tags add "cigs8"}
						{tags remove "cigs7"}
						
				    }
				}
				{if tagged "cigs6"
	       	  	    {if not tagged "cigs7"
					    {tags add "cigs7"}
						{tags remove "cigs6"}
						
				    }
				}
				{if tagged "cigs5"
	     	        {if not tagged "cigs6"
				 	    {tags add "cigs6"}
						{tags remove "cigs5"}
						
				    }
				}
				{if tagged "cigs4"
	        	    {if not tagged "cigs5"
					    {tags add "cigs5"}
						{tags remove "cigs4"}
						
				    }
				}
				{if tagged "cigs3"
	       	   	    {if not tagged "cigs4"
					    {tags add "cigs4"}
						{tags remove "cigs3"}
						
			 	   }
				}
				{if tagged "cigs2"
	       	        {if not tagged "cigs3"
					    {tags remove "cigs2"}
						{tags add "cigs3"}
						
			 	   }
				}
				{if tagged "cigs1"
	        	    {tags add "cigs2"}
					{tags remove "cigs1"}
					
				}
				{if not tagged "ciginfoon"
				     {if not tagged "cigs1"
						{tags add "cigs1"}
						{tags add "ciginfoon"}
					}
					
				}
			}
		}
	}
	
	{on "start_personage"
		{view pause "marker_personage_acute"}
		{view start ally neutral "marker_personage"}
		{if tagged "bleeding"
		    {delay 5
			    {call "revinfo"}
			}
		}
	}
		
    {on "revinfo"
	    {delay 3
			{if tagged "revcount19"
     	       {if not tagged "revcount20"
				    {tags add "revcount20"}
					{tags remove "revcount19"}
					
			    }
			}
			{if tagged "revcount18"
      	      {if not tagged "revcount19"
				    {tags add "revcount19"}
					{tags remove "revcount18"}
					
			    }
			}
			{if tagged "revcount17"
        	    {if not tagged "revcount18"
				    {tags add "revcount18"}
					{tags remove "revcount17"}
					
		 	   }
			}
			{if tagged "revcount16"
        	    {if not tagged "revcount17"
				    {tags add "revcount17"}
					{tags remove "revcount16"}
					
			    }
			}
			{if tagged "revcount15"
        	    {if not tagged "revcount16"
				    {tags add "revcount16"}
					{tags remove "revcount15"}
					
		 	   }
			}
			{if tagged "revcount14"
        	    {if not tagged "revcount15"
				    {tags add "revcount15"}
					{tags remove "revcount14"}
					
			    }
			}
			{if tagged "revcount13"
           		{if not tagged "revcount14"
				    {tags add "revcount14"}
					{tags remove "revcount13"}
					
		  	 	}
			}
			{if tagged "revcount12"
        	    {if not tagged "revcount13"
				    {tags add "revcount13"}
					{tags remove "revcount12"}
					
			    }
			}
			{if tagged "revcount11"
        	    {if not tagged "revcount12"
				    {tags add "revcount12"}
					{tags remove "revcount11"}
					
			    }
			}
			{if tagged "revcount10"
        	    {if not tagged "revcount11"
				    {tags add "revcount11"}
					{tags remove "revcount10"}
					
			    }
			}
			{if tagged "revcount9"
       	   		{if not tagged "revcount10"
				    {tags add "revcount10"}
					{tags remove "revcount9"}
					
		   		}
			}
			{if tagged "revcount8"
 	            {if not tagged "revcount9"
				    {tags add "revcount9"}
					{tags remove "revcount8"}
					
			    }
			}
			{if tagged "revcount7"
       	     	{if not tagged "revcount8"
				    {tags add "revcount8"}
					{tags remove "revcount7"}
					
			    }
			}
			{if tagged "revcount6"
       	  	    {if not tagged "revcount7"
				    {tags add "revcount7"}
					{tags remove "revcount6"}
					
			    }
			}
			{if tagged "revcount5"
     	        {if not tagged "revcount6"
			 	    {tags add "revcount6"}
					{tags remove "revcount5"}
					
			    }
			}
			{if tagged "revcount4"
        	    {if not tagged "revcount5"
				    {tags add "revcount5"}
					{tags remove "revcount4"}
					
			    }
			}
			{if tagged "revcount3"
       	   	    {if not tagged "revcount4"
				    {tags add "revcount4"}
					{tags remove "revcount3"}
					
		 	   }
			}
			{if tagged "revcount2"
       	        {if not tagged "revcount3"
				    {tags remove "revcount2"}
					{tags add "revcount3"}
					
		 	   }
			}
			{if tagged "revcount1"
        	    {tags remove "revcount1"}
				{if not tagged "revcount2"
				{delay 5
		        {tags add "revcount2"}
				}
				}
				
			}
			{if not tagged "revinfoon"
			    {if not tagged "revcount1"
					{tags add "revcount1"}
					{tags add "revinfoon"}
				}
				
			}
		}
	}
	
	(define "knock_out"
		{if not water_level -0.1
			{knockdown %t %r}
		}
	)

	{on "throw_off_end"				;// from {crew_throw_off} in vehicle.inc and cannon.inc
		{call "knockinfo"}
		{if "not_knocked"
			;// do nothing
		else
			;//{start_sound "human/talk/impulse"} ;//?
			{##if not user_control
				{health_damage_count 50
					{effects "" "hit" "damage" "die" "die"}
				}
			}
			("knock_out" t(12) r(3))	;// time unconsious. 12 ±3 seconds
		}
	}
	
	{on "knockinfo"
	    {delay 3
			{if tagged "knockcount19"
     	       {if not tagged "knockcount20"
				    {tags add "knockcount20"}
					{tags remove "knockcount19"}
					
			    }
			}
			{if tagged "knockcount18"
      	      {if not tagged "knockcount19"
				    {tags add "knockcount19"}
					{tags remove "knockcount18"}
					
			    }
			}
			{if tagged "knockcount17"
        	    {if not tagged "knockcount18"
				    {tags add "knockcount18"}
					{tags remove "knockcount17"}
					
		 	   }
			}
			{if tagged "knockcount16"
        	    {if not tagged "knockcount17"
				    {tags add "knockcount17"}
					{tags remove "knockcount16"}
					
			    }
			}
			{if tagged "knockcount15"
        	    {if not tagged "knockcount16"
				    {tags add "knockcount16"}
					{tags remove "knockcount15"}
					
		 	   }
			}
			{if tagged "knockcount14"
        	    {if not tagged "knockcount15"
				    {tags add "knockcount15"}
					{tags remove "knockcount14"}
					
			    }
			}
			{if tagged "knockcount13"
           		{if not tagged "knockcount14"
				    {tags add "knockcount14"}
					{tags remove "knockcount13"}
					
		  	 	}
			}
			{if tagged "knockcount12"
        	    {if not tagged "knockcount13"
				    {tags add "knockcount13"}
					{tags remove "knockcount12"}
					
			    }
			}
			{if tagged "knockcount11"
        	    {if not tagged "knockcount12"
				    {tags add "knockcount12"}
					{tags remove "knockcount11"}
					
			    }
			}
			{if tagged "knockcount10"
        	    {if not tagged "knockcount11"
				    {tags add "knockcount11"}
					{tags remove "knockcount10"}
					
			    }
			}
			{if tagged "knockcount9"
       	   		{if not tagged "knockcount10"
				    {tags add "knockcount10"}
					{tags remove "knockcount9"}
					
		   		}
			}
			{if tagged "knockcount8"
 	            {if not tagged "knockcount9"
				    {tags add "knockcount9"}
					{tags remove "knockcount8"}
					
			    }
			}
			{if tagged "knockcount7"
       	     	{if not tagged "knockcount8"
				    {tags add "knockcount8"}
					{tags remove "knockcount7"}
					
			    }
			}
			{if tagged "knockcount6"
       	  	    {if not tagged "knockcount7"
				    {tags add "knockcount7"}
					{tags remove "knockcount6"}
					
			    }
			}
			{if tagged "knockcount5"
     	        {if not tagged "knockcount6"
			 	    {tags add "knockcount6"}
					{tags remove "knockcount5"}
					
			    }
			}
			{if tagged "knockcount4"
        	    {if not tagged "knockcount5"
				    {tags add "knockcount5"}
					{tags remove "knockcount4"}
					
			    }
			}
			{if tagged "knockcount3"
       	   	    {if not tagged "knockcount4"
				    {tags add "knockcount4"}
					{tags remove "knockcount3"}
					
		 	   }
			}
			{if tagged "knockcount2"
       	        {if not tagged "knockcount3"
				    {tags remove "knockcount2"}
					{tags add "knockcount3"}
					
		 	   }
			}
			{if tagged "knockcount1"
        	    {tags remove "knockcount1"}
				{if not tagged "knockcount2"
					{delay 5
				{tags add "knockcount2"}
					}
				}
				
			}
			{if not tagged "knockinfoon"
			    {if not tagged "knockcount1"
					{tags add "knockcount1"}
					{tags add "knockinfoon"}
				}
				
			}
		}
	}

	;// {on "build_foxhole_for_chat_wheel_old"
	;// 	{tags add "digging"}
	;// 	{ani_play "stand_dig_trench" loop callback}
	;// 	{tags add "digging_animation_started"}	
	;// 	{delay 18
	;// 		{tags add "digging_complete"}	
	;// 		{ani_stop "stand_dig_trench"}
	;// 		{tags remove "digging"}
	;// 		{tags remove "digging_animation_started"}	
	;// 		{delay 2
	;// 			{tags remove "digging_complete"}
	;// 		}
	;// 	}
	;// 	
	;// }

	{on animation_end "stand_dig_trench"
	 	{if tagged "digging_complete"
	        {spawn "placement_foxhole" "basis" x}
			{tags remove "digging_complete"}
		}			
   	}

	;// {on "build_foxhole_for_chat_wheel"
	;// 	{tags add "digging"}
	;// 	{delay 3
	;// 		{tags add "digging_animation_started"}		
	;// 	}
	;// 	{delay 18
	;// 		{tags add "digging_complete"}
	;// 		{tags remove "digging"}
	;// 		{tags remove "digging_animation_started"}
	;// 		{delay 2 
	;// 			{tags remove "digging_complete"}
	;// 		}
	;// 	}
	;// }

	{on animation_event "shovel"
	    {if tagged "digging_complete"
	    	{spawn "placement_foxhole" "basis" x}
	    	{tags remove "digging_complete"}
	    }
	}

	{on "ai_officer_callin"
		{if tagged "officerai"
			{if operatable
				{if not user_control
					{delay 1
						{spawn "ai_waypoint_pole" offset 50 50 -200}
						{spawn "ai_waypoint_pole" offset 100 0 -200}
						{spawn "ai_waypoint_pole" offset 0 100 -200}
						{spawn "ai_waypoint_pole" offset 70 0 -200}
						{spawn "ai_waypoint_pole" offset 0 200 -200}
						{spawn "ai_waypoint_pole" offset 200 0 -200}
					}
				}
			}
		}
	}

	{on "mark_ai_officer_on_minimap"
		{if tagged "officerai"
			{if operatable
				{call "spawn_officer_marker"}
				{tags add "identified_by_player"}
				{if difficulty "normal"
					{delay 3
						{call "spawn_officer_marker"}
					}
				else difficulty "easy"
					{delay 3
						{call "spawn_officer_marker"}
					}
				}
			}	
		}
	}

	{on "spawn_officer_marker"
		{if rand 0.25
			{delay 3
				{spawn "artillery_warning_heavy" offset 350 -205 0}
			}
		else rand 0.25
		    {delay 3
				{spawn "artillery_warning_heavy" offset 350 -205 0}
		     }
		else rand 0.25
			{delay 3
				{spawn "artillery_warning_heavy" offset 350 -205 0}
			}
		else 
			{delay 3
				{spawn "artillery_warning_heavy" offset 350 -205 0}
			}
		}
	}	

	{on "throw_smoke_grenade"
		{if not dead
			{if not user_control
				{tags add "throwing_smoke_grenade"}
				{tags add "throwing_grenade"}
			}
			{delay 60
				{tags remove "throwing_smoke_grenade"}
				{tags remove "throwing_grenade"}
				{if not dead
					{tags add "freeroam"}
				}
			}
		}
	}

	{on "throw_at_grenade"
		{if not dead
			{if not user_control
				{tags add "throwing_at_grenade"}
				{tags add "throwing_grenade"}
			}
			{delay 60
				{tags remove "throwing_at_grenade"}
				{tags remove "throwing_grenade"}
				{if not dead
					{tags add "freeroam"}
				}
			}
		}
	}

	{on "tag_ai_crew"
		{delay 0.5
			{if not dead
				{if not user_control
					{if linked "tank"
						{tags add "ai_tank_crew"}
						;{call "check_if_ai_crew_idle"}	
					else linked "car"						
						{tags add "ai_tank_crew"}
						;{call "check_if_ai_crew_idle"}	
					else linked "cannon"
						{tags add "ai_artilleryman"}
						;{call "check_if_ai_crew_idle"}	
					else linked "cannon_sandbag_standard"
						{tags add "ai_artilleryman"}
						;{call "check_if_ai_crew_idle"}
					else linked "cannon_small"
						{tags add "ai_artilleryman"}
						;{call "check_if_ai_crew_idle"}
					else linked "detect_atgun"
						{tags add "ai_artilleryman"}
						;{call "check_if_ai_crew_idle"}					
					else linked "mortar"
						{tags add "ai_artilleryman"}
						;{call "check_if_ai_crew_idle"}		
					}
				}	
			}
		}
	}

	{on "check_if_ai_crew_idle"		
		{delay 2
			{if not user_control
				{delay 35
					{if not tagged "repairing"
						{if not dead
							{if not linked "vehicle"
								{if tagged "ai_tank_crew"
									{tags add "idle_ai_tank_crew"}
									{tags remove "ai_inf"}
								else tagged "ai_artilleryman"
									{tags add "idle_ai_artilleryman"}
									{tags remove "ai_inf"}
								}
							}
						}
					}
				}		
			}
		}
	}

	{on "link_weapon"
		{if effector "stuff weapon"		;// see interaction_entity/stuff.inc
				{if not user_control
					{call "tag_breed"}		
				}
				{with_effector
					{call "link_human"}
				}
		}
		{if effector "stuff grenade"		;// see interaction_entity/stuff.inc
				{if not user_control
					{call "tag_breed"}		
				}
			
		}
	}

	{on "tag_breed"
		{if effector "binocular"
			{tags add "officerai"}
		else effector "engineer_tagger"
			{tags add "ai_engineer"}
		}
	}

	{on "remove_dismount_tags"
		{tags remove "dismount_getting_orders"}
		{tags remove "dismounted_freeroam"}
	}

	{on "freeroaming"
		{tags remove "freeroam_inf_selected"}

		{if not linked
			{if not user_control 
				{if not "hidden"
					{if not tagged "ai_engineer"
						{if not tagged "ai_tank_crew"
							{if not tagged "cookie_hawk"
								{if not dead			
									{tags remove "freeroam"}

									{delay 120
										{if not dead
											{if not "hidden"
												{tags add "freeroam"}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}	
	}
}

{"antitank_1"
    {on spawn
	    {tags add "automatic_weaponary"}
	}
}

{"bandage_rus"
    {on spawn
	    {with_linked_entity "human" {tags add "tank_cover"}}
	}
	
	{on contact sync
	    {if effector "human"
		    {tags add "test2"}
		}
	}
}

{"spawn_pointflag11-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "1_a_1-3_mg"}
		{tags add "1_b_1-3_mg"}
	}
}

{"spawn_pointflag12-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "1_a_2-3_mg"}
		{tags add "1_b_2-3_mg"}
	}
}

{"spawn_pointflag13"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "1_a_3_mg"}
		{tags add "1_b_3_mg"}
	}
}

{"spawn_pointflag21-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "2_a_1-3_mg"}
		{tags add "2_b_1-3_mg"}
	}
}

{"spawn_pointflag22-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "2_a_2-3_mg"}
		{tags add "2_b_2-3_mg"}
	}
}

{"spawn_pointflag23"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "2_a_3_mg"}
		{tags add "2_b_3_mg"}
	}
}

{"spawn_pointflag31-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "3_a_1-3_mg"}
		{tags add "3_b_1-3_mg"}
	}
}

{"spawn_pointflag32-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "3_a_2-3_mg"}
		{tags add "3_b_2-3_mg"}
	}
}

{"spawn_pointflag33"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "3_a_3_mg"}
		{tags add "3_b_3_mg"}
	}
}

{"spawn_pointflag41-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "4_a_1-3_mg"}
		{tags add "4_b_1-3_mg"}
	}
}

{"spawn_pointflag42-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "4_a_2-3_mg"}
		{tags add "4_b_2-3_mg"}
	}
}

{"spawn_pointflag43"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "4_a_3_mg"}
		{tags add "4_b_3_mg"}
	}
}
 
{"spawn_pointflag51-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "5_a_1-3_mg"}
		{tags add "5_b_1-3_mg"}
	}
}

{"spawn_pointflag52-3"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "5_a_2-3_mg"}
		{tags add "5_b_2-3_mg"}
	}
}

{"spawn_pointflag53"
    {on spawn
	    {tags add "cmp_def"}
		{tags add "5_a_3_mg"}
		{tags add "5_b_3_mg"}
	}
}

