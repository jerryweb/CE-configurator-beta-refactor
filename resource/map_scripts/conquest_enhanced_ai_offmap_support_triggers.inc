; ========== Setup Scripts ==========			
			{"ai_offmap/select_ai_callin"
				{condition
					{terms
						{"1.cmp_i"
							{var "ai_officer_callin_active$"}
							{op ">"}
							{value 0}
						}
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag officerai}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 2}
					}
					{"while"
						{condition
							{type cmp_i}
							{var "ai_officer_callin_active$"}
							{op ">"}
							{value 0}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag logic_post}
										}
									}
									{include
										{tag
											{tag post_tagged}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add current_callin_post}
						}
						{"delay"
							{time 1}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag current_callin_post}
												}
											}
											{include
												{tag
													{tag callin_1}
												}
											}
										}
									}
								}
								{"call"
									{function "ai_destroy_obstacle_module"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag current_callin_post}
												}
											}
											{include
												{tag
													{tag callin_2}
												}
											}
										}
									}
								}
								{"call"
									{function "ai_smoke_barrage_module"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag current_callin_post}
												}
											}
											{include
												{tag
													{tag callin_3}
												}
											}
										}
									}
								}
								{"call"
									{function "ai_light_mortar_module"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag current_callin_post}
												}
											}
											{include
												{tag
													{tag callin_4}
												}
											}
										}
									}
								}
								{"call"
									{function "ai_heavy_mortar_module"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag current_callin_post}
												}
											}
											{include
												{tag
													{tag callin_5}
												}
											}
										}
									}
								}
								{"call"
									{function "ai_scout_plane_module"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag current_callin_post}
												}
											}
											{include
												{tag
													{tag callin_6}
												}
											}
										}
									}
								}
								{"call"
									{function "ai_full_arty_module"}
								}
							}
						}
						{"delay"
							{time 60}
						}
						{"entity_state"
							{selector
								{tag current_callin_post}
							}
							{tag_remove current_callin_post}
						}
						{"delay"
							{time 1}
						}
						{"if"
							{condition
								{type entities}
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag officerai}
											}
										}
										{include
											{prop
												{prop human}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{state
												{state inactive}
											}
											{state
												{state user_control}
											}
											{tag
												{tag player}
											}
										}
									}
								}
								{count
									{op "=="}
									{value 0}
								}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"delay"
										{time 10}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"delay"
										{time 39}
									}
								}
								{"default"
									{"delay"
										{time 17.5}
									}
								}
							}
							{"set_i"
								{var "ai_offmap_callin_id$"}
								{op "="}
								{value 0}
							}
							{"trigger"
								{name "ai_offmap/select_ai_callin"}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.33}
							}
							{"delay"
								{time 10}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.33}
							}
							{"delay"
								{time 39}
							}
						}
						{"default"
							{"delay"
								{time 17.5}
							}
						}
					}
					{"set_i"
						{var "ai_offmap_callin_id$"}
						{op "="}
						{value 0}
					}
					{"trigger"
						{name "ai_offmap/select_ai_callin"}
					}
				}
			}
			{"ai_offmap/enable_callin"
				{condition
					{terms
						{"3.cmp_i"
							{var "ai_officer_callin_active$"}
							{op "=="}
							{value 0}
						}
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag officerai}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
										{state
											{state inactive}
										}
									}
								}
							}
						}
						{"2.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
					}
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type difficulty}
								{level heroic}
							}
							{"delay"
								{time 180}
							}
						}
						{"case"
							{condition
								{type difficulty}
								{level hard}
							}
							{"delay"
								{time 240}
							}
						}
						{"default"
							{"delay"
								{time 300}
							}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{tag logic_post}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag officerai}
										}
									}
									{include
										{tag
											{tag ai_inf}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
										{state
											{state inactive}
										}
									}
								}
								{amount 1
								}
							}
							{effect ai_officer_callin}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "tag_logic_posts_for_callins"}
						}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type difficulty}
								{level heroic}
							}
							{"set_i"
								{var "ai_officer_callin_active$"}
								{op "="}
								{value 3}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"delay"
										{time 120}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.66}
									}
									{"delay"
										{time 160}
									}
								}
								{"default"
									{"delay"
										{time 140}
									}
								}
							}
						}
						{"case"
							{condition
								{type difficulty}
								{level hard}
							}
							{"set_i"
								{var "ai_officer_callin_active$"}
								{op "="}
								{value 2}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"delay"
										{time 160}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.66}
									}
									{"delay"
										{time 200}
									}
								}
								{"default"
									{"delay"
										{time 180}
									}
								}
							}
						}
						{"default"
							{"set_i"
								{var "ai_officer_callin_active$"}
								{op "="}
								{value 1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"delay"
										{time 200}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.66}
									}
									{"delay"
										{time 260}
									}
								}
								{"default"
									{"delay"
										{time 220}
									}
								}
							}
						}
					}
					{"trigger"
						{name "ai_offmap/enable_callin"}
					}
				}
			}			

			{"ai_offmap/set_extraplanes_to_ai_player"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
										{tag
											{tag ai_armor}
										}
										{tag
											{tag ai_car}
										}
										{tag
											{tag ai_veh}
										}
									}
									{exclude
										{state
											{state user_control}
										}
									}
								}
							}
						}
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state user_control}
										}
										{relation
											{relation ally}
											{player "1"}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"call"
						{function "set_ai_planes_to_ai_team"}
					}
				}
			}
			{## "ai_offmap/set_extraplanes_to_ai_player_simple"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
										{zone_ex
											{zone "gamezone"}
										}
									}
									{include
										{state
											{state user_control}
										}
										{relation
											{relation enemy}
											{player "1"}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"player"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag extraplanes}
									}
								}
								{include
									{state
										{state inactive}
									}
								}
							}
						}
						{operation set}
						{player "1"}
					}
					{"delay"
						{time 1}
					}
					{"player"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag air_vehicle}
									}
								}
								{include
									{state
										{state inactive}
									}
								}
							}
						}
						{operation set}
						{player "1"}
					}
					{"delay"
						{time 1}
					}
					{"player"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag air_recon_vehicle}
									}
								}
								{include
									{state
										{state inactive}
									}
								}
							}
						}
						{operation set}
						{player "1"}
					}
					{"delay"
						{time 1}
					}
					{"player"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag pilot}
									}
								}
								{include
									{state
										{state inactive}
									}
								}
							}
						}
						{operation set}
						{player "1"}
					}
				}
			}
			{## "ai_offmap/disable_logic_post_minimap"
				{condition
				}
				{actions
					{"delay"
						{time 1}
					}
					{"ables"
						{selector
							{tag logic_post}
						}
						{add entity_manager_notouch}
						{remove "select fight minimap"}
					}
				}
			}
			{"ai_offmap/artillery/random_delay_ai_attack"
				{condition
					{expression "1 & 2 & 3 & !4"}
					{terms
						{"1.event"
							{id "attack_start"}
						}
						{"2.rand"
							{value 0.8}
						}
						{"4.difficulty"
							{level normal}
						}
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
										{zone_ex
											{zone "gamezone"}
										}
									}
									{include
										{state
											{state user_control}
										}
										{relation
											{relation ally}
											{player "1"}
										}
									}
									{exclude
										{tag
											{tag ai_inf}
										}
										{tag
											{tag ai_car}
										}
										{tag
											{tag ai_veh}
										}
										{tag
											{tag ai_armor}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 200}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 300}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 400}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 500}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"default"
							{"delay"
								{time 600}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
					}
				}
			}
			{"ai_offmap/artillery/random_delay_ai_defend"
				{condition
					{expression "2 & !4 & 1"}
					{terms
						{"2.rand"
							{value 0.8}
						}
						{"4.difficulty"
							{level normal}
						}
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
										{zone_ex
											{zone "gamezone"}
										}
									}
									{include
										{state
											{state user_control}
										}
										{relation
											{relation enemy}
											{player "1"}
										}
									}
									{exclude
										{tag
											{tag ai_inf}
										}
										{tag
											{tag ai_veh}
										}
										{tag
											{tag ai_car}
										}
										{tag
											{tag ai_armor}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 600}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 750}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 950}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"delay"
								{time 1100}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
						{"default"
							{"delay"
								{time 800}
							}
							{"set_i"
								{var "randomtimer$"}
								{op "="}
								{value 1}
							}
						}
					}
				}
			}

			{"dcg/ai_air_chance"
				{condition
					{terms
						{"1.event"
							{id "dcg"}
						}
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state inactive}
										}
									}
								}
							}
						}
						{"3.event"
							{id "attack_start"}
						}
						{"4.rand"
							{value 0.3}
						}
						{"5.cmp_i"
							{var "flag count$"}
							{op ">="}
							{value 2}
						}
						{"6.entities"
							{selector
								{tag early_attack}
							}
							{count
								{op "<<"}
								{value 0}
							}
						}
					}
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.25}
							}
							{"delay"
								{time 60}
							}
							{"event"
								{event "ai_air_possible"}
								{mode set}
								{delay 0}
							}
						}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.25}
							}
							{"delay"
								{time 200}
							}
							{"event"
								{event "ai_air_possible"}
								{mode set}
								{delay 0}
							}
						}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.25}
							}
							{"delay"
								{time 500}
							}
							{"event"
								{event "ai_air_possible"}
								{mode set}
								{delay 0}
							}
						}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.25}
							}
							{"delay"
								{time 350}
							}
							{"event"
								{event "ai_air_possible"}
								{mode set}
								{delay 0}
							}
						}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.33}
							}
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "ai_air_possible"}
								{mode set}
								{delay 0}
							}
						}
						{"default"
							{"delay"
								{time 444}
							}
							{"event"
								{event "ai_air_possible"}
								{mode set}
								{delay 0}
							}
						}
					}
				}
			}
			{"dcg/ai_air_on"
				{condition
					{terms
						{"1.event"
							{id "dcg"}
						}
						{"2.cmp_i"
							{var "enemyid$"}
							{op ">"}
							{value 0}
						}
						{"3.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag player}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
						}
						{"4.cmp_i"
							{var "ai_air_on$"}
							{op ">"}
							{value 0}
						}
						{"5.cmp_i"
							{var "dcg_on$"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "ai_air_on"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag ai_air_target}
						}
						{tag_remove ai_air_target}
					}
					{"delay"
						{time 5}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
										}
										{include
											{zone
												{zone "gamezone"}
											}
											{prop
												{prop vehicle}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag destroyed}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 1}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_car}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "1"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 2}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_car}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "2"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 3}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_car}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "3"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_car}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "4"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_car}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{zone
														{zone "combat"}
													}
													{prop
														{prop vehicle}
													}
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag destroyed}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "5"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 1}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player}
													}
												}
												{include
													{zone
														{zone "gamezone"}
													}
													{prop
														{prop human}
													}
												}
												{exclude
													{state
														{state dead}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "1"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 2}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player}
													}
												}
												{include
													{zone
														{zone "gamezone"}
													}
													{prop
														{prop human}
													}
												}
												{exclude
													{state
														{state dead}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "2"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 3}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player}
													}
												}
												{include
													{zone
														{zone "gamezone"}
													}
													{prop
														{prop human}
													}
												}
												{exclude
													{state
														{state dead}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "3"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"case"
									{condition
										{type cmp_i}
										{var "ai_air_on$"}
										{op "=="}
										{value 4}
									}
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player}
													}
												}
												{include
													{zone
														{zone "gamezone"}
													}
													{prop
														{prop human}
													}
												}
												{exclude
													{state
														{state dead}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "4"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"entity_state"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag player}
													}
												}
												{include
													{zone
														{zone "gamezone"}
													}
													{prop
														{prop human}
													}
												}
												{exclude
													{state
														{state dead}
													}
												}
											}
											{sort
												{type waypoint}
												{wpid "5"}
											}
											{amount 6
											}
										}
										{tag_add ai_air_target}
									}
								}
							}
						}
					}
				}
			}
			{"dcg/ai_air_decide"
				{condition
					{terms
						{"1.event"
							{id "ai_air_possible"}
						}
						{"2.cmp_i"
							{var "ai_air_on$"}
							{op "=="}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag fpc1}
									{zone "gamezone"}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag player}
											{zone "fpc1"}
											{type human}
											{state "not dead"}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"set_i"
										{var "ai_air_on$"}
										{op "="}
										{value 1}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "ai_air_on$"}
								{op "=="}
								{value 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag fpc2}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag player}
													{zone "fpc2"}
													{type human}
													{state "not dead"}
												}
											}
											{"delay"
												{time 0.1}
											}
											{"set_i"
												{var "ai_air_on$"}
												{op "="}
												{value 2}
											}
										}
										{"default"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "ai_air_on$"}
								{op "=="}
								{value 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag fpc3}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag player}
													{zone "fpc3"}
													{type human}
													{state "not dead"}
												}
											}
											{"delay"
												{time 0.1}
											}
											{"set_i"
												{var "ai_air_on$"}
												{op "="}
												{value 3}
											}
										}
										{"default"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "ai_air_on$"}
								{op "=="}
								{value 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag fpc4}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag player}
													{zone "fpc4"}
													{type human}
													{state "not dead"}
												}
											}
											{"delay"
												{time 0.1}
											}
											{"set_i"
												{var "ai_air_on$"}
												{op "="}
												{value 4}
											}
										}
										{"default"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 2}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "ai_air_on$"}
								{op "=="}
								{value 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{ignore_captured_by_user 0}
											{tag fpc5}
											{zone "gamezone"}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{ignore_captured_by_user 0}
													{tag player}
													{zone "fpc5"}
													{type human}
													{state "not dead"}
												}
											}
											{"delay"
												{time 0.1}
											}
											{"set_i"
												{var "ai_air_on$"}
												{op "="}
												{value 5}
											}
										}
										{"default"}
									}
								}
								{"default"}
							}
						}
						{"default"}
					}
					{"delay"
						{time 50}
					}
					{"trigger"
						{name "dcg/ai_air_decide"}
					}
				}
			}

; ========== Air Callin Scripts ==========
			{"ai_offmap/artillery/recon_plane_set_target_priority"
				{condition
					{type 1}
					{terms
						{"3.see_actors"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag air_recon_vehicle}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{enemy
								{source advanced}
								{group
									{select
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag heavy_tank}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag artillery}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag rocket_artillery}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag radio_car}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{amount 1
								}
							}
							{distance
								{mode near_than}
								{meters 115}
							}
							{detection visible}
							{tag
								{"tag pair"}
								{"for enemy" priority_target}
							}
						}
					}
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type difficulty}
								{level heroic}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}	
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{tag ai_big_bertha_used}
												}
												{count
													{op "=="}
													{value 0}
												}
											}
											{"set_i"
												{var "ai_call_big_bertha$"}
												{op "="}
												{value 1}
											}
											{"delay"
												{time 0.2}
											}
											{"entity_state"
												{selector
													{source advanced}
													{group
														{select
															{tag
																{tag officerai}
															}
														}
														{include
															{tag
																{tag ai_inf}
															}
															{prop
																{prop human}
															}
														}
														{exclude
															{state
																{state dead}
															}
															{state
																{state inactive}
															}
															{state
																{state user_control}
															}
														}
													}
													{amount 1
													}
												}
												{tag_add active_officer}
											}
										}
										{"default"
											{"call"
												{function "ai_standard_priority_targeting"}
											}
										}
									}
								}
								{"default"
									{"call"
										{function "ai_standard_priority_targeting"}
									}
								}
							}
						}
						{"case"
							{condition
								{type difficulty}
								{level hard}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}		
									{"switch"
										{"case"
											{condition
												{type entities}
												{selector
													{tag ai_big_bertha_used}
												}
												{count
													{op "=="}
													{value 0}
												}
											}
											{"set_i"
												{var "ai_call_big_bertha$"}
												{op "="}
												{value 1}
											}
											{"delay"
												{time 0.2}
											}
											{"entity_state"
												{selector
													{source advanced}
													{group
														{select
															{tag
																{tag officerai}
															}
														}
														{include
															{tag
																{tag ai_inf}
															}
															{prop
																{prop human}
															}
														}
														{exclude
															{state
																{state dead}
															}
															{state
																{state inactive}
															}
															{state
																{state user_control}
															}
														}
													}
													{amount 1
													}
												}
												{tag_add active_officer}
											}
										}
										{"default"
											{"call"
												{function "ai_standard_priority_targeting"}
											}
										}
									}
								}
								{"default"
									{"call"
										{function "ai_standard_priority_targeting"}
									}
								}
							}
						}
						{"default"
							{"call"
								{function "ai_standard_priority_targeting"}
							}
						}
					}
					{"delay"
						{time 60}
					}
					{"trigger"
						{name "ai_offmap/artillery/recon_plane_set_target_priority"}
					}
				}
			}
			{"ai_offmap/artillery/planearty"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag planebarrage}
								{zone "combat"}
								{state operatable}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 20}
					}
					{"switch"
						{"case"
							{condition
								{type difficulty}
								{level heroic}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc1}
											{zone "fpc1"}
										}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "7"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "7"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "7"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "7"}
									}
								}
							}
							{"delay"
								{time 10}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc2}
											{zone "fpc2"}
										}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "8"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "8"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "8"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "8"}
									}
								}
							}
							{"delay"
								{time 10}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc3}
											{zone "fpc3"}
										}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "9"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "9"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "9"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "9"}
									}
								}
							}
							{"delay"
								{time 4}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc4}
											{zone "fpc4"}
										}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "10"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "10"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "10"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "10"}
									}
								}
							}
							{"delay"
								{time 2}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc5}
											{zone "gamezone"}
										}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "11"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "11"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "11"}
									}
									{"spawn"
										{entity "artillery_single_150_dummy"}
										{waypoint "11"}
									}
								}
							}
						}
						{"case"
							{condition
								{type difficulty}
								{level hard}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc1}
											{zone "fpc1"}
										}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "7"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "7"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "7"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "7"}
									}
								}
							}
							{"delay"
								{time 10}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc2}
											{zone "fpc2"}
										}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "8"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "8"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "8"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "8"}
									}
								}
							}
							{"delay"
								{time 10}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc3}
											{zone "fpc3"}
										}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "9"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "9"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "9"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "9"}
									}
								}
							}
							{"delay"
								{time 4}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc4}
											{zone "fpc4"}
										}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "10"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "10"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "10"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "10"}
									}
								}
							}
							{"delay"
								{time 2}
							}
							{"switch"
								{"case"
									{condition
										{type entities}
										{selector
											{tag fpc5}
											{zone "gamezone"}
										}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "11"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "11"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "11"}
									}
									{"spawn"
										{entity "mortar_single_120_dummy"}
										{waypoint "11"}
									}
								}
							}
						}
					}
					{"delay"
						{time 20}
					}
					{"trigger"
						{name "ai_offmap/artillery/planearty"}
					}
				}
			}
			{"ai_offmap/artillery/planeartyon"
				{condition
					{expression "1 & 2 & !3 & 4"}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{relation
											{relation ally}
											{player "1"}
										}
									}
								}
							}
						}
						{"2.cmp_i"
							{var "flag count$"}
							{op ">="}
							{value 2}
						}
						{"3.difficulty"
							{level normal}
						}
						{"4.cmp_i"
							{var "randomtimer$"}
							{op "=="}
							{value 1}
						}
					}
				}
				{actions
					{"if"
						{condition
							{type rand}
							{value 0.35}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag fpc1}
										{zone "fpc1"}
									}
								}
								{"delay"
									{time 0.1}
								}
								{"air_attack"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{tag
													{tag hidden}
												}
											}
										}
									}
									{enemies
										{tag fpc1}
									}
									{clone}
									{move_from_back}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 40}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag hidden}
												}
											}
										}
									}
									{tag_add planebarrage}
									{tag_remove air_recon_vehicle}
								}
								{"delay"
									{time 0.1}
								}
								{"action"
									{selector
										{tag planebarrage}
									}
									{drop "orders sensor senseless"}
									{action move}
									{waypoint "1"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{tag fpc2}
										{zone "fpc2"}
									}
								}
								{"delay"
									{time 0.1}
								}
								{"air_attack"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{tag
													{tag hidden}
												}
											}
										}
									}
									{enemies
										{tag fpc2}
									}
									{clone}
									{move_from_back}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 40}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag hidden}
												}
											}
										}
									}
									{tag_add planebarrage}
									{tag_remove air_recon_vehicle}
								}
								{"delay"
									{time 0.1}
								}
								{"action"
									{selector
										{tag planebarrage}
									}
									{drop "orders sensor senseless"}
									{action move}
									{waypoint "2"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{tag fpc3}
										{zone "fpc3"}
									}
								}
								{"delay"
									{time 0.1}
								}
								{"air_attack"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{tag
													{tag hidden}
												}
											}
										}
									}
									{enemies
										{tag fpc3}
									}
									{clone}
									{move_from_back}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 40}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag hidden}
												}
											}
										}
									}
									{tag_add planebarrage}
									{tag_remove air_recon_vehicle}
								}
								{"delay"
									{time 0.1}
								}
								{"action"
									{selector
										{tag planebarrage}
									}
									{drop "orders sensor senseless"}
									{action move}
									{waypoint "3"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{tag fpc4}
										{zone "fpc4"}
									}
								}
								{"delay"
									{time 0.1}
								}
								{"air_attack"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{tag
													{tag hidden}
												}
											}
										}
									}
									{enemies
										{tag fpc4}
									}
									{clone}
									{move_from_back}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 40}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag hidden}
												}
											}
										}
									}
									{tag_add planebarrage}
									{tag_remove air_recon_vehicle}
								}
								{"delay"
									{time 0.1}
								}
								{"action"
									{selector
										{tag planebarrage}
									}
									{drop "orders sensor senseless"}
									{action move}
									{waypoint "4"}
								}
							}
							{"case"
								{condition
									{type entities}
									{selector
										{tag fpc5}
										{zone "fpc5"}
									}
								}
								{"delay"
									{time 0.1}
								}
								{"air_attack"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{tag
													{tag hidden}
												}
											}
										}
									}
									{enemies
										{tag fpc5}
									}
									{clone}
									{move_from_back}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 40}
								}
								{"delay"
									{time 0.1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag air_recon_vehicle}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag hidden}
												}
											}
										}
									}
									{tag_add planebarrage}
									{tag_remove air_recon_vehicle}
								}
								{"delay"
									{time 0.1}
								}
								{"action"
									{selector
										{tag planebarrage}
									}
									{drop "orders sensor senseless"}
									{action move}
									{waypoint "5"}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"effect"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag air_recon_vehicle}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect takeoff_load}
						}
						{"delay"
							{time 10}
						}
						{"talk"
							{selector
								{amount 1
								}
								{tag player}
								{state operatable}
							}
							{text "mission/multi/shoot it down"}
						}
						{"delay"
							{time 400}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag planebarrage}
										{zone "gamezone"}
										{state operatable}
									}
								}
								{"actor_to_waypoint"
									{selector
										{tag planebarrage}
										{state operatable}
									}
									{drop "orders sensor senseless"}
									{waypoint "19"}
								}
							}
						}
					}
				}
			}
			{"ai_offmap/air/fighter_strafing_runs"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state user_control}
										}
										{relation
											{relation ally}
											{player "1"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
						}
						{"3.cmp_i"
							{var "randomtimer$"}
							{op "=="}
							{value 1}
						}
						{"5.cmp_i"
							{var "flag count$"}
							{op ">="}
							{value 2}
						}
					}
				}
				{actions
					{"delay"
						{time 45}
					}
					{"if"
						{condition
							{type rand}
							{value 0.35}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_veh}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{prop
											{prop car}
										}
									}
								}
								{amount 5
								}
							}
							{tag_add planetarget}
						}
						{"delay"
							{time 0.2}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{prop
											{prop car}
										}
									}
								}
								{amount 5
								}
							}
							{tag_add planetarget}
						}
						{"delay"
							{time 0.2}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_car}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
								}
								{amount 5
								}
							}
							{tag_add planetarget}
						}
						{"loop" 2
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"air_attack"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag extraplanes}
													}
												}
												{include
													{tag
														{tag hidden}
													}
												}
											}
										}
										{enemies
											{source advanced}
											{group
												{select
													{tag
														{tag planetarget}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
											{sort
												{type shuffle}
											}
											{amount 1
											}
										}
										{clone}
										{count 5}
										{move_from_back}
										{force_placement}
										{random_weapon 0}
										{attack_altitude 11}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"air_attack"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag extraplanes}
													}
												}
												{include
													{tag
														{tag hidden}
													}
												}
											}
										}
										{enemies
											{source advanced}
											{group
												{select
													{tag
														{tag planetarget}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
											{sort
												{type shuffle}
											}
											{amount 1
											}
										}
										{clone}
										{count 5}
										{move_from_back}
										{force_placement}
										{random_weapon 0}
										{attack_altitude 15}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.33}
									}
									{"air_attack"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag extraplanes}
													}
												}
												{include
													{tag
														{tag hidden}
													}
												}
											}
										}
										{enemies
											{source advanced}
											{group
												{select
													{tag
														{tag planetarget}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
											{sort
												{type shuffle}
											}
											{amount 1
											}
										}
										{clone}
										{count 5}
										{move_from_back}
										{force_placement}
										{random_weapon 0}
										{attack_altitude 18}
									}
								}
								{"default"
									{"air_attack"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag extraplanes}
													}
												}
												{include
													{tag
														{tag hidden}
													}
												}
											}
										}
										{enemies
											{source advanced}
											{group
												{select
													{tag
														{tag planetarget}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
											{sort
												{type shuffle}
											}
											{amount 1
											}
										}
										{clone}
										{count 5}
										{move_from_back}
										{force_placement}
										{random_weapon 0}
										{attack_altitude 10}
									}
								}
							}
							{"delay"
								{time 0.5}
							}
							{"effect"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag extraplanes}
											}
										}
										{include
											{state
												{state inhabited}
											}
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{state
												{state user_control}
											}
											{state
												{state inactive}
											}
										}
									}
								}
								{effect takeoff_load}
							}
							{"delay"
								{time 3}
							}
						}
						{"delay"
							{time 10}
						}
						{"if"
							{condition
								{type difficulty}
								{level hard}
							}
							{"loop" 2
								{"switch"
									{"case"
										{condition
											{type rand}
											{value 0.33}
										}
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 11}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.33}
										}
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 15}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.33}
										}
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 18}
										}
									}
									{"default"
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 10}
										}
									}
								}
								{"delay"
									{time 0.5}
								}
								{"effect"
									{selector
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag extraplanes}
												}
											}
											{include
												{state
													{state inhabited}
												}
												{state
													{state operatable}
												}
												{prop
													{prop vehicle}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
											}
										}
									}
								}
								{"delay"
									{time 3}
								}
							}
						}
						{"delay"
							{time 10}
						}
						{"if"
							{condition
								{type difficulty}
								{level heroic}
							}
							{"loop" 2
								{"switch"
									{"case"
										{condition
											{type rand}
											{value 0.33}
										}
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 11}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.33}
										}
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 15}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.33}
										}
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 18}
										}
									}
									{"default"
										{"air_attack"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag extraplanes}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
											}
											{enemies
												{source advanced}
												{group
													{select
														{tag
															{tag planetarget}
														}
													}
													{include
														{state
															{state operatable}
														}
													}
												}
												{sort
													{type shuffle}
												}
												{amount 1
												}
											}
											{clone}
											{count 5}
											{move_from_back}
											{force_placement}
											{random_weapon 0}
											{attack_altitude 10}
										}
									}
								}
								{"delay"
									{time 0.5}
								}
								{"effect"
									{selector
										{source advanced}
										{ignore_captured_by_user 0}
										{group
											{select
												{tag
													{tag extraplanes}
												}
											}
											{include
												{state
													{state inhabited}
												}
												{state
													{state operatable}
												}
												{prop
													{prop vehicle}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
											}
										}
									}
								}
								{"delay"
									{time 3}
								}
							}
						}
					}
					{"delay"
						{time 1600}
					}
					{"trigger"
						{name "ai_offmap/air/fighter_strafing_runs"}
					}
				}
			}

			{"dcg/ai_airstrike"
				{condition
					{terms
						{"1.event"
							{id "ai_air_on"}
						}
					}
				}
				{actions
					{"delay"
						{time 120}
					}
					{"event"
						{event "ai_air_on"}
						{mode set}
						{delay 0}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.25}
							}
							{"loop" 3
								{"switch"
									{"case"
										{condition
											{type cmp_i}
											{var "user_team$"}
											{op "=="}
											{value 1}
										}
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "0"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
									{"default"
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "6"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
								}
								{"delay"
									{time 5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 4
								{"switch"
									{"case"
										{condition
											{type cmp_i}
											{var "user_team$"}
											{op "=="}
											{value 1}
										}
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "0"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
									{"default"
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "6"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
								}
								{"delay"
									{time 5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.15}
							}
							{"loop" 5
								{"switch"
									{"case"
										{condition
											{type cmp_i}
											{var "user_team$"}
											{op "=="}
											{value 1}
										}
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "0"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
									{"default"
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "6"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
								}
								{"delay"
									{time 5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"loop" 6
								{"switch"
									{"case"
										{condition
											{type cmp_i}
											{var "user_team$"}
											{op "=="}
											{value 1}
										}
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "0"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
									{"default"
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "6"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
								}
								{"delay"
									{time 5}
								}
							}
						}
						{"default"
							{"loop" 2
								{"switch"
									{"case"
										{condition
											{type cmp_i}
											{var "user_team$"}
											{op "=="}
											{value 1}
										}
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "0"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
									{"default"
										{"delay"
											{time 0.1}
										}
										{"actor_to_waypoint"
											{selector
												{source advanced}
												{ignore_captured_by_user 0}
												{group
													{select
														{tag
															{tag air_vehicle}
														}
													}
													{include
														{tag
															{tag hidden}
														}
													}
												}
												{amount 1
												}
											}
											{waypoint "6"}
											{clone}
											{approach "safe teleport & rotate"}
										}
									}
								}
								{"delay"
									{time 5}
								}
							}
						}
					}
				}
			}
			{"dcg/ai_airstrike_do"
				{condition
					{expression "(1 & 2 & 4) | (1 & 3 & !4)"}
					{terms
						{"1.event"
							{id "ai_air_on"}
						}
						{"2.near"
							{units
								{ignore_captured_by_user 0}
								{tag enemy_air}
								{type vehicle}
								{state inhabited}
							}
							{near_to
								{ignore_captured_by_user 0}
								{amount 1
								}
								{tag spawn_a}
							}
							{distance 76}
						}
						{"3.near"
							{units
								{ignore_captured_by_user 0}
								{tag enemy_air}
								{type vehicle}
								{state inhabited}
							}
							{near_to
								{ignore_captured_by_user 0}
								{amount 1
								}
								{tag spawn_b}
							}
							{distance 76}
						}
						{"4.cmp_i"
							{var "user_team$"}
							{op "=="}
							{value 1}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag enemy_air}
									}
								}
								{include
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag bomber_selected}
									}
									{state
										{state user_control}
									}
									{state
										{state inactive}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag user_team}
								}
							}
							{amount 1
							}
						}
						{tag_add bomber_selected}
						{tag_remove enemy_air}
					}
					{"delay"
						{time 3}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag ai_air_target}
									{zone "gamezone"}
								}
							}
							{"delay"
								{time 0.1}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{state
												{state user_control}
											}
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{state
												{state inactive}
											}
											{prop
												{prop airborne}
											}
											{tag
												{tag ai_air_target}
											}
										}
									}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{state
												{state user_control}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{tag
												{tag "ai_air_target "}
											}
										}
									}
									{amount 5
									}
								}
								{tag_add ai_air_target}
							}
						}
					}
					{"delay"
						{time 1.1}
					}
					{"switch"
						{"default"
							{"delay"
								{time 0.1}
							}
							{"air_attack"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag bomber_selected}
											}
										}
										{include
											{state
												{state inhabited}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state inactive}
											}
										}
									}
								}
								{drop "orders sensor senseless"}
								{enemies
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag ai_air_target}
											}
										}
										{include
											{prop
												{prop vehicle}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{state
												{state linked}
											}
											{state
												{state inactive}
											}
										}
									}
									{group
										{select
											{tag
												{tag ai_air_target}
											}
										}
										{include
											{prop
												{prop human}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
										}
									}
									{amount 1
									}
								}
								{attack_altitude 46}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{tag bomber_selected}
						}
						{tag_remove bomber_selected}
					}
					{"delay"
						{time 3}
					}
					{"trigger"
						{name "dcg/ai_airstrike_do"}
					}
				}
			}

; ========== Misc. Callin Scripts ==========
			{## "ai_offmap/destroy_tank_trap"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag player_hedgehog}
							}
							{count
								{op ">="}
								{value 5}
							}
						}
						{"2.cmp_i"
							{var "ai_offmap_callin_id$"}
							{op "=="}
							{value 6}
						}
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag logic_post}
										}
									}
									{exclude
										{tag
											{tag ai_call_destory_obstacles_used}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"call"
						{function "ai_destroy_obstacle_module"}
					}
					{"delay"
						{time 5}
					}
					{## "delay"
						{time 1}
					}
					{## "entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player_hedgehog}
									}
								}
								{exclude
									{tag
										{tag set_to_blow}
									}
									{tag
										{tag player_hedgehog_target}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add player_hedgehog_target}
						{tag_remove player_hedgehog}
					}
					{## "delay"
						{time 1}
					}
					{## "spawn"
						{entity "pointer_destroy_obstacle"}
						{waypoint "1"}
					}
					{## "delay"
						{time 1}
					}
					{## "placement"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag pointer_destroy_obstacle}
									}
								}
								{exclude
									{tag
										{tag moved_to_obstacle}
									}
								}
							}
							{amount 1
							}
						}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag player_hedgehog_target}
									}
								}
								{exclude
									{tag
										{tag set_to_blow}
									}
								}
							}
							{amount 1
							}
						}
					}
					{## "delay"
						{time 0.5}
					}
					{## "entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player_hedgehog_target}
									}
								}
								{exclude
									{tag
										{tag set_to_blow}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add set_to_blow}
						{tag_remove player_hedgehog_target}
					}
					{"delay"
						{time 20}
					}
					{"trigger"
						{name "ai_offmap/destroy_tank_trap"}
					}
				}
			}
			{"ai_offmap/player_response_to_big_bertha"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag big_bertha_incoming}
							}
						}
					}
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{state
												{state user_control}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{state
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{tag big_bertha_incoming}
										}
									}
									{amount 1
									}
								}
								{text "mission/multi/big_bertha_incoming_1"}
							}
						}
						{"default"
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{state
												{state user_control}
											}
										}
										{exclude
											{state
												{state dead}
											}
											{state
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{tag big_bertha_incoming}
										}
									}
									{amount 1
									}
								}
								{text "mission/multi/big_bertha_incoming_2"}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"talk"
						{selector
							{source advanced}
							{group
								{select
									{zone
										{zone "gamezone"}
									}
								}
								{include
									{state
										{state user_control}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{state
										{state dead}
									}
									{state
										{state inactive}
									}
									{state
										{state linked}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag big_bertha_incoming}
								}
							}
							{amount 7
							}
						}
						{say retreat}
						{text ""}
					}
					{"delay"
						{time 3}
					}
					{"talk"
						{selector
							{source advanced}
							{group
								{select
									{zone
										{zone "gamezone"}
									}
								}
								{include
									{state
										{state user_control}
									}
									{state
										{state linked}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{state
										{state dead}
									}
									{state
										{state inactive}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag big_bertha_incoming}
								}
							}
							{amount 7
							}
						}
						{say tank_retreat}
						{text ""}
					}
					{"delay"
						{time 60}
					}
					{"trigger"
						{name "player_response_to_big_bertha"}
					}
				}
			}			