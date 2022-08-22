			{"ai_spawn/side_1/side_a_1_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a1_thread_1}
											}
											{tag
												{tag ready_to_move_a1_thread_2}
											}
											{tag
												{tag ready_to_move_a1_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a1_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a1_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a1_thread_1}
											}
											{tag
												{tag ready_to_move_a1_thread_2}
											}
											{tag
												{tag ready_to_move_a1_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a1_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a1_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a1_thread_1}
											}
											{tag
												{tag ready_to_move_a1_thread_2}
											}
											{tag
												{tag ready_to_move_a1_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a1_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a1_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{move_mode free}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_1/side_a_1_inf"}
					}
				}
			}
			{"ai_spawn/side_1/side_a_1_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a1_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a1_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a1_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a1_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a1_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a1_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a1_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_1/side_a_1_veh"}
					}
				}
			}
			{"ai_spawn/side_1/side_a_1_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a1_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a1_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a1_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a1_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a1_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a1_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a1_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a1_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a1_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea1}
								{tag_remove ready_to_move_a1_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_1/side_a_1_emplacements"}
					}
				}
			}
			{"ai_spawn/side_2/side_a_2_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a2_thread_1}
											}
											{tag
												{tag ready_to_move_a2_thread_2}
											}
											{tag
												{tag ready_to_move_a2_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a2_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a2_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a2_thread_1}
											}
											{tag
												{tag ready_to_move_a2_thread_2}
											}
											{tag
												{tag ready_to_move_a2_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a2_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a2_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a2_thread_1}
											}
											{tag
												{tag ready_to_move_a2_thread_2}
											}
											{tag
												{tag ready_to_move_a2_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a2_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a2_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{drop senseless}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_2/side_a_2_inf"}
					}
				}
			}
			{"ai_spawn/side_2/side_a_2_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a2_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a2_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a2_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a2_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a2_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a2_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a2_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_2/side_a_2_veh"}
					}
				}
			}
			{"ai_spawn/side_2/side_a_2_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a2_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a2_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a2_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a2_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a2_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a2_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a2_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a2_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a2_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea2}
								{tag_remove ready_to_move_a2_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_2/side_a_2_emplacements"}
					}
				}
			}
			{"ai_spawn/side_3/side_a_3_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a3_thread_1}
											}
											{tag
												{tag ready_to_move_a3_thread_2}
											}
											{tag
												{tag ready_to_move_a3_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a3_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a3_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a3_thread_1}
											}
											{tag
												{tag ready_to_move_a3_thread_2}
											}
											{tag
												{tag ready_to_move_a3_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a3_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a3_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a3_thread_1}
											}
											{tag
												{tag ready_to_move_a3_thread_2}
											}
											{tag
												{tag ready_to_move_a3_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a3_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a3_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{drop senseless}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_3/side_a_3_inf"}
					}
				}
			}
			{"ai_spawn/side_3/side_a_3_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a3_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a3_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a3_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a3_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a3_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a3_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a3_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_3/side_a_3_veh"}
					}
				}
			}
			{"ai_spawn/side_3/side_a_3_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a3_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a3_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a3_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a3_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a3_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a3_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a3_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a3_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a3_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea3}
								{tag_remove ready_to_move_a3_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_3/side_a_3_emplacements"}
					}
				}
			}
			{"ai_spawn/side_4/side_a_4_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a4_thread_1}
											}
											{tag
												{tag ready_to_move_a4_thread_2}
											}
											{tag
												{tag ready_to_move_a4_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a4_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a4_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a4_thread_1}
											}
											{tag
												{tag ready_to_move_a4_thread_2}
											}
											{tag
												{tag ready_to_move_a4_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a4_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a4_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_a4_thread_1}
											}
											{tag
												{tag ready_to_move_a4_thread_2}
											}
											{tag
												{tag ready_to_move_a4_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_a4_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_a4_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{drop senseless}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_4/side_a_4_inf"}
					}
				}
			}
			{"ai_spawn/side_4/side_a_4_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a4_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a4_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a4_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a4_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_1}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_2}
											}
											{tag
												{tag ready_to_move_a4_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_a4_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a4_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_4/side_a_4_veh"}
					}
				}
			}
			{"ai_spawn/side_4/side_a_4_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sidea4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sidea1}
										}
										{tag
											{tag sidea2}
										}
										{tag
											{tag sidea3}
										}
										{tag
											{tag sidea4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a4_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a4_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a4_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a4_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sidea4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_a4_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_a4_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_a4_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "1004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_a4_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_a4_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sidea1}
											}
											{tag
												{tag sidea2}
											}
											{tag
												{tag sidea3}
											}
											{tag
												{tag sidea4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sidea4}
								{tag_remove ready_to_move_a4_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_4/side_a_4_emplacements"}
					}
				}
			}
			{"ai_spawn/side_1/side_b_1_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b1_thread_1}
											}
											{tag
												{tag ready_to_move_b1_thread_2}
											}
											{tag
												{tag ready_to_move_b1_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b1_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b1_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b1_thread_1}
											}
											{tag
												{tag ready_to_move_b1_thread_2}
											}
											{tag
												{tag ready_to_move_b1_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b1_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b1_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b1_thread_1}
											}
											{tag
												{tag ready_to_move_b1_thread_2}
											}
											{tag
												{tag ready_to_move_b1_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b1_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b1_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{drop senseless}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_1/side_b_1_inf"}
					}
				}
			}
			{"ai_spawn/side_1/side_b_1_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b1_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b1_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b1_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b1_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b1_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b1_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b1_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_1/side_b_1_veh"}
					}
				}
			}
			{"ai_spawn/side_1/side_b_1_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb1"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b1_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b1_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b1_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b1_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb1"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b1_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b1_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b1_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2001"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b1_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b1_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb1}
								{tag_remove ready_to_move_b1_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_1/side_b_1_emplacements"}
					}
				}
			}
			{"ai_spawn/side_2/side_b_2_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b2_thread_1}
											}
											{tag
												{tag ready_to_move_b2_thread_2}
											}
											{tag
												{tag ready_to_move_b2_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b2_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b2_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b2_thread_1}
											}
											{tag
												{tag ready_to_move_b2_thread_2}
											}
											{tag
												{tag ready_to_move_b2_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b2_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b2_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b2_thread_1}
											}
											{tag
												{tag ready_to_move_b2_thread_2}
											}
											{tag
												{tag ready_to_move_b2_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b2_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b2_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{drop senseless}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_2/side_b_2_inf"}
					}
				}
			}
			{"ai_spawn/side_2/side_b_2_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b2_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b2_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b2_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b2_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b2_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b2_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b2_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_2/side_b_2_veh"}
					}
				}
			}
			{"ai_spawn/side_2/side_b_2_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb2"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b2_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b2_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b2_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b2_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb2"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b2_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b2_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b2_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2002"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b2_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b2_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb2}
								{tag_remove ready_to_move_b2_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_2/side_b_2_emplacements"}
					}
				}
			}
			{"ai_spawn/side_3/side_b_3_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b3_thread_1}
											}
											{tag
												{tag ready_to_move_b3_thread_2}
											}
											{tag
												{tag ready_to_move_b3_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b3_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b3_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b3_thread_1}
											}
											{tag
												{tag ready_to_move_b3_thread_2}
											}
											{tag
												{tag ready_to_move_b3_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b3_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b3_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b3_thread_1}
											}
											{tag
												{tag ready_to_move_b3_thread_2}
											}
											{tag
												{tag ready_to_move_b3_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b3_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b3_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{drop senseless}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_3/side_b_3_inf"}
					}
				}
			}
			{"ai_spawn/side_3/side_b_3_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b3_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b3_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b3_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b3_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b3_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b3_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b3_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_3/side_b_3_veh"}
					}
				}
			}
			{"ai_spawn/side_3/side_b_3_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb3"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b3_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b3_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b3_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b3_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb3"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b3_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b3_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b3_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2003"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b3_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b3_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb3}
								{tag_remove ready_to_move_b3_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_3/side_b_3_emplacements"}
					}
				}
			}
			{"ai_spawn/side_4/side_b_4_inf"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_engineer}
										}
										{tag
											{tag ai_artilleryman}
										}
										{with_item
											{type existance}
											{item "pickaxe"}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b4_thread_1}
											}
											{tag
												{tag ready_to_move_b4_thread_2}
											}
											{tag
												{tag ready_to_move_b4_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b4_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b4_thread_1}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b4_thread_1}
											}
											{tag
												{tag ready_to_move_b4_thread_2}
											}
											{tag
												{tag ready_to_move_b4_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b4_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b4_thread_2}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag ready_to_move_b4_thread_1}
											}
											{tag
												{tag ready_to_move_b4_thread_2}
											}
											{tag
												{tag ready_to_move_b4_thread_3}
											}
											{tag
												{tag ai_engineer}
											}
											{tag
												{tag ai_artilleryman}
											}
											{with_item
												{type existance}
												{item "pickaxe"}
											}
										}
									}
									{amount 6
									}
								}
								{tag_add ready_to_move_b4_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{tag ready_to_move_b4_thread_3}
									{type human}
									{state operatable}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{tag ai_inf}
								{type human}
								{state "not dead"}
							}
							{drop senseless}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
							}
							{ai
								{no_retreat on}
								{advance_ratio "0.01"}
								{retreat_ratio 200}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_4/side_b_4_inf"}
					}
				}
			}
			{"ai_spawn/side_4/side_b_4_veh"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{tag
											{tag hmg}
										}
										{tag
											{tag light_at_gun}
										}
										{tag
											{tag medium_at_gun}
										}
										{tag
											{tag heavy_at_gun}
										}
										{tag
											{tag aaflak}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b4_veh_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_veh_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b4_veh_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_veh_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_veh_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b4_veh_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_veh_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b4_veh_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_veh_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_veh_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hmg}
											}
											{tag
												{tag light_at_gun}
											}
											{tag
												{tag medium_at_gun}
											}
											{tag
												{tag heavy_at_gun}
											}
											{tag
												{tag aaflak}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_1}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_2}
											}
											{tag
												{tag ready_to_move_b4_veh_thread_3}
											}
										}
									}
									{amount 3
									}
								}
								{tag_add ready_to_move_b4_veh_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_veh_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b4_veh_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_veh_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_veh_thread_3}
							}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_4/side_b_4_veh"}
					}
				}
			}
			{"ai_spawn/side_4/side_b_4_emplacements"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state user_control}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"1.cmp_i"
							{var "flag count$"}
							{op ">"}
							{value 1}
						}
						{"3.cmp_i"
							{var "disable_advanced_ai_pathing_logic$"}
							{op "<<"}
							{value 1}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "sideb4"}
										}
									}
									{include
										{state
											{state operatable}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag rus}
										}
										{tag
											{tag ger}
										}
										{tag
											{tag cmp_def}
										}
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag sideb1}
										}
										{tag
											{tag sideb2}
										}
										{tag
											{tag sideb3}
										}
										{tag
											{tag sideb4}
										}
										{tag
											{tag katy}
										}
										{tag
											{tag enemyarty}
										}
										{state
											{state linked}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag 
											{tag ai_engineer}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
									}
								}
							}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b4_emplacements_thread_1}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_emplacements_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b4_emplacements_thread_1}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_emplacements_thread_1}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_emplacements_thread_1}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b4_emplacements_thread_2}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_emplacements_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b4_emplacements_thread_2}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_emplacements_thread_2}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_emplacements_thread_2}
							}
						}
						{"delay"
							{time 1}
						}
						{"thread"
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "sideb4"}
											}
										}
										{include
											{state
												{state operatable}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
											{state
												{state linked}
											}
											{tag
												{tag rocket_artillery}
											}
											{tag
												{tag artillery}
											}
											{tag
												{tag freeroam}
											}
											{state
												{state dead}
											}
											{state
												{state user_control}
											}
											{prop
												{prop car}
											}
											{prop
												{prop tank}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_1}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_2}
											}
											{tag
												{tag ready_to_move_b4_emplacements_thread_3}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add ready_to_move_b4_emplacements_thread_3}
							}
							{"delay"
								{time 1}
							}
							{"waypoint"
								{who
									{type actor}
									{actors
										{source advanced}
										{group
											{select
												{tag
													{tag ready_to_move_b4_emplacements_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag squad}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
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
												{tag
													{tag engine_count_1}
												}
												{tag
													{tag engine_count_2}
												}
											}
										}
									}
								}
								{action
									{type start}
									{waypoint "2004"}
									{make_squad}
									{name_squad "1"}
									{copy_squad "2"}
									{approach force}
								}
							}
							{"delay"
								{time 1}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ready_to_move_b4_emplacements_thread_3}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{state
												{state operatable}
											}
										}
									}
								}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
								}
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
												{tag ready_to_move_b4_emplacements_thread_3}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{tag
												{tag cmp_def}
											}
											{tag
												{tag player}
											}
											{tag
												{tag player_armor}
											}
											{tag
												{tag player_car}
											}
											{tag
												{tag player_veh}
											}
											{tag
												{tag engine_count_1}
											}
											{tag
												{tag engine_count_2}
											}
											{tag
												{tag sideb1}
											}
											{tag
												{tag sideb2}
											}
											{tag
												{tag sideb3}
											}
											{tag
												{tag sideb4}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag enemyarty}
											}
										}
									}
								}
								{tag_add sideb4}
								{tag_remove ready_to_move_b4_emplacements_thread_3}
							}
						}
						{"delay"
							{time 1}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_spawn/side_4/side_b_4_emplacements"}
					}
				}
			}
			
			{"ai_spawn/move_spawns/tag_ai_spawns"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag user_team}
							}
						}
						{"2.cmp_i"
							{var "user_team$"}
							{op ">"}
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
								{type cmp_i}
								{var "user_team$"}
								{op "=="}
								{value 1}
							}
							{"entity_state"
								{selector
									{tag spawn_b}
								}
								{tag_add ai_spawn}
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
												{tag spawn_b}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_1}
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
												{tag spawn_b}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_2}
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
												{tag spawn_b}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_3}
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
												{tag spawn_b}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_4}
							}
						}
						{"default"
							{"entity_state"
								{selector
									{tag spawn_a}
								}
								{tag_add ai_spawn}
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
												{tag spawn_a}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_1}
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
												{tag spawn_a}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_2}
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
												{tag spawn_a}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_3}
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
												{tag spawn_a}
											}
										}
										{exclude
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add spawn_4}
							}
						}
					}
				}
			}
			{"ai_spawn/move_spawns/init_rear_flank_attack"
				{condition
					{expression "1 & 2 & !3"}
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
											{relation enemy}
											{player "1"}
										}
									}
								}
							}
						}
						{"2.rand"
							{value 0.2}
						}
						{"3.difficulty"
							{level normal}
						}
					}
				}
				{actions
					{"delay"
						{time 300}
					}
					{"talk"
						{selector
							{tag player}
							{state operatable}
						}
						{text "mission/multi/flankattack1"}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack1"}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack2"}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack3"}
							}
						}
						{"default"
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack1"}
							}
						}
					}
					{"delay"
						{time 300}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack1"}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack2"}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack3"}
							}
						}
						{"default"
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/flankattack1"}
							}
						}
					}
					{"delay"
						{time 200}
					}
					{"set_i"
						{var "move_ai_spawns_to_player_side$"}
						{op "="}
						{value 1}
					}
				}
			}
			{"ai_spawn/move_spawns/change_spawn_strategy"
				{autoreset}
				{condition
					{terms
						{"1.entities"
							{selector
								{tag ai_spawn}
							}
						}
						{"3.cmp_i"
							{var "user_team$"}
							{op "!="}
							{value 0}
						}
						{"4.cmp_i"
							{var "static_ai_spawn_points$"}
							{op "=="}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"if"
						{condition
							{type rand}
							{value 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type cmp_i}
									{var "move_ai_spawns_to_player_side$"}
									{op ">="}
									{value 1}
								}
								{"switch"
									{"case"
										{condition
											{type rand}
											{value 0.35}
										}
										{"switch"
											{"case"
												{condition
													{type rand}
													{value 0.2}
												}
												{"call"
													{function "rear_move_ai_spawn_to_zones_1_and_2"}
												}
											}
											{"case"
												{condition
													{type rand}
													{value 0.2}
												}
												{"call"
													{function "rear_move_ai_spawn_to_zones_2_and_3"}
												}
											}
											{"case"
												{condition
													{type rand}
													{value 0.2}
												}
												{"call"
													{function "rear_move_ai_spawn_to_zones_3_and_4"}
												}
											}
											{"case"
												{condition
													{type rand}
													{value 0.2}
												}
												{"call"
													{function "rear_move_to_zone_flanks"}
												}
											}
											{"case"
												{condition
													{type rand}
													{value 0.2}
												}
												{"call"
													{function "rear_move_all_ai_spawn_zones"}
												}
											}
											{"default"
												{"call"
													{function "reset_ai_spawn_zones"}
												}
											}
										}
									}
									{"default"
										{"switch"
											{"case"
												{condition
													{type rand}
													{value 0.25}
												}
												{"call"
													{function "move_ai_spawn_to_zones_1_and_2"}
												}
											}
											{"case"
												{condition
													{type rand}
													{value 0.25}
												}
												{"call"
													{function "move_ai_spawn_to_zones_2_and_3"}
												}
											}
											{"case"
												{condition
													{type rand}
													{value 0.25}
												}
												{"call"
													{function "move_ai_spawn_to_zones_3_and_4"}
												}
											}
											{"case"
												{condition
													{type rand}
													{value 0.25}
												}
												{"call"
													{function "move_to_zone_flanks"}
												}
											}
											{"default"
												{"call"
													{function "reset_ai_spawn_zones"}
												}
											}
										}
									}
								}
							}
							{"default"
								{"switch"
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"call"
											{function "move_ai_spawn_to_zones_1_and_2"}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"call"
											{function "move_ai_spawn_to_zones_2_and_3"}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"call"
											{function "move_ai_spawn_to_zones_3_and_4"}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"call"
											{function "move_to_zone_flanks"}
										}
									}
									{"default"
										{"call"
											{function "reset_ai_spawn_zones"}
										}
									}
								}
							}
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
											{tag moved}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{tag_remove moved}
						}
					}
					{"delay"
						{time 120}
					}
					{"trigger"
						{name "ai_spawn/move_spawns/change_spawn_strategy"}
					}
				}
			}
			{"ai_spawn/move_spawns/check_to_set_static_spawns"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag set_static_spawns}
										}
									}
								}
							}
						}
						{"2.cmp_i"
							{var "flag count$"}
							{op "<<"}
							{value 2}
						}
					}
				}
				{actions
					{"delay"
						{time 0.5}
					}
					{"set_i"
						{var "static_ai_spawn_points$"}
						{op "="}
						{value 1}
					}
				}
			}

			{"ai_spawn/check_to_disable_advanced_ai_pathing"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag disable_advanced_pathing}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.5}
					}
					{"set_i"
						{var "disable_advanced_ai_pathing_logic$"}
						{op "="}
						{value 1}
					}
				}
			}
			