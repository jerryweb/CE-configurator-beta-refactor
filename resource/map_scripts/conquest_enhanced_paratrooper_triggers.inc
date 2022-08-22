			{"ai_paratroopers/sound/alarm"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag drop_plane}
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
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{## "sound"
						{name "world/alarm/sirene01"}
					}
					{"delay"
						{time 3}
					}
					{"sound"
						{name "world/alarm/alarm"}
					}
					{## "music"
						{start "/sound/world/alarm/alarm.wav"}
						{volume narrator}
					}
				}
			}
			{"ai_paratroopers/sound/siren"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag drop_plane}
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
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"music"
						{start "/sound/world/alarm/sirenlong01.wav"}
						{volume narrator}
					}
					{## "sound"
						{name "world/alarm/sirene01"}
					}
					{## "sound"
						{name "world/alarm/sirenlong01"}
					}
					{## "delay"
						{time 17}
					}
					{## "sound"
						{name "world/alarm/sirene01"}
					}
					{## "delay"
						{time 17}
					}
					{## "sound"
						{name "world/alarm/sirene01"}
					}
				}
			}
			{"ai_paratroopers/set_start_variables"
				{actions
					{"delay"
						{time 5}
					}
					{"set_i"
						{var "para_plane_index$"}
						{op "="}
						{value 1}
					}
					{"set_i"
						{var "para_plane_side_start$"}
						{op "="}
						{value 1}
					}
					{"if"
						{condition
							{type rand}
							{value 0.5}
						}
						{"set_i"
							{var "para_plane_side_start$"}
							{op "="}
							{value 2}
						}
					}
				}
			}
			{"ai_paratroopers/delete_unused_parachutes"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag drop_plane}
										}
									}
									{include
										{state
											{state inhabited}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag base}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{prop
											{prop cannon}
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
					{"delete"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag base}
									}
								}
								{exclude
									{state
										{state inhabited}
									}
									{tag
										{tag _flight}
									}
									{tag
										{tag chute_deployed}
									}
									{prop
										{prop cannon}
									}
								}
							}
						}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "ai_paratroopers/delete_unused_parachutes"}
					}
				}
			}
			{"ai_paratroopers/para_inf_attack_logic/attack_target"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag attacking_radio}
										}
										{tag
											{tag attacking_arty}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag para}
										}
										{tag
											{tag ai_inf}
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
										{state
											{state user_control}
										}
										{tag
											{tag para_given_orders}
										}
										{tag
											{tag freeroam}
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
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag artillery}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag rocket_artillery}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag radio_car}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{tag
											{tag player_car}
										}
										{state
											{state operatable}
										}
										{state
											{state user_control}
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
					}
				}
				{actions
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
											{tag radio_car}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag player_car}
										}
										{state
											{state user_control}
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
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag attacking_radio}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
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
										{state
											{state user_control}
										}
										{tag
											{tag getting_order}
										}
										{tag
											{tag para_attacking}
										}
										{tag
											{tag attacking_arty}
										}
									}
								}
							}
							{tag_add getting_order}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag getting_orders}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
										{tag
											{tag attacking_radio}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag para_attacking}
										}
										{tag
											{tag attacking_arty}
										}
									}
								}
							}
							{drop orders}
							{action advance}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag radio_car}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag player_car}
										}
										{state
											{state user_control}
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
											{tag getting_orders}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
										{tag
											{tag attacking_radio}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag para_attacking}
										}
										{tag
											{tag attacking_arty}
										}
									}
								}
							}
							{tag_add para_attacking}
							{tag_remove getting_orders}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag artillery}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag rocket_artillery}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag attacking_arty}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
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
										{state
											{state user_control}
										}
										{tag
											{tag getting_order}
										}
										{tag
											{tag para_attacking}
										}
										{tag
											{tag attacking_radio}
										}
									}
								}
							}
							{tag_add getting_order}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag getting_orders}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
										{tag
											{tag attacking_arty}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag para_attacking}
										}
										{tag
											{tag attacking_radio}
										}
									}
								}
							}
							{drop orders}
							{action advance}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag artillery}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag rocket_artillery}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
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
											{tag getting_orders}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
										{tag
											{tag attacking_arty}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag para_attacking}
										}
										{tag
											{tag attacking_radio}
										}
									}
								}
							}
							{tag_add para_attacking}
							{tag_remove getting_orders}
						}
					}
					{## "if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag artillery}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag rocket_artillery}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag radio_car}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{tag
											{tag player_car}
										}
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag attacking_arty}
										}
										{tag
											{tag attacking_radio}
										}
										{tag
											{tag getting_order}
										}
										{tag
											{tag para_attacking}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
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
										{state
											{state user_control}
										}
									}
								}
							}
							{tag_add freeroam}
							{tag_remove attacking_arty}
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
											{tag getting_orders}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
									}
								}
							}
							{tag_remove getting_orders}
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
											{tag attacking_radio}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
									}
								}
							}
							{tag_remove attacking_radio}
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
											{tag para_attacking}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
									}
								}
							}
							{tag_remove para_attacking}
						}
					}
					{## "action"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag attacking_radio}
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
							}
						}
						{drop orders}
						{action advance}
						{target
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
									{prop
										{prop human}
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
								}
							}
							{amount 1
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag para_attacking}
									}
								}
								{include
									{prop
										{prop human}
									}
									{tag
										{tag ai_inf}
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
						}
						{control AI}
						{fire_mode open}
						{move_mode free}
						{ai_move
							{mode enable}
						}
						{movement
							{speed assault}
						}
						{ai
							{no_retreat on}
							{advance_ratio 1}
							{retreat_ratio 200}
						}
					}
					{"trigger"
						{name "ai_paratroopers/para_inf_attack_logic/change_objective_from_radio"}
					}
				}
			}			
			{"ai_paratroopers/para_inf_attack_logic/para_freeroam"
				{condition
					{expression "1 | (2 & 3)"}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_freeroam}
										}
									}
									{include
										{tag
											{tag ai_inf}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{tag
											{tag para_on_the_move}
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
											{tag attacking_radio}
										}
										{tag
											{tag attacking_arty}
										}
										{tag
											{tag para_attacking}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_inf}
										}
										{tag
											{tag para}
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
										{state
											{state user_control}
										}
										{tag
											{tag para_given_orders}
										}
										{tag
											{tag freeroam}
										}
									}
								}
							}
						}
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag artillery}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag rocket_artillery}
										}
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag radio_car}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{tag
											{tag player_car}
										}
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 2}
					}
					{"thread"
						{"switch"
							{"case"
								{condition
									{type near}
									{units
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
									}
									{near_to
										{source advanced}
										{group
											{select
												{tag
													{tag artillery}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag radio_car}
												}
											}
											{include
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
												{relation
													{relation ally}
													{player "1"}
												}
												{zone
													{zone "gamezone"}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
									}
									{distance 150}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{tag
															{tag artillery}
														}
														{tag
															{tag rocket_artillery}
														}
														{tag
															{tag radio_car}
														}
													}
													{include
														{state
															{state operatable}
														}
														{state
															{state inhabited}
														}
														{relation
															{relation ally}
															{player "1"}
														}
														{zone
															{zone "gamezone"}
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
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_1}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_1}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{state
													{state operatable}
												}
												{relation
													{relation ally}
													{player "1"}
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
												{amount 2
												}
												{tag para_planning_thread_1}
												{zone "gamezone"}
												{type human}
												{state "not dead"}
											}
										}
										{amount 1
										}
									}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{tag
															{tag fpc1}
														}
														{tag
															{tag fpc2}
														}
														{tag
															{tag fpc3}
														}
														{tag
															{tag fpc4}
														}
														{tag
															{tag fpc5}
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
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_1}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_1}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{tag
													{tag fpc1}
												}
												{tag
													{tag fpc2}
												}
												{tag
													{tag fpc3}
												}
												{tag
													{tag fpc4}
												}
												{tag
													{tag fpc5}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
										{sort
											{type entity}
										}
										{amount 1
										}
									}
								}
							}
							{"default"
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{zone
															{zone "gamezone"}
														}
													}
													{include
														{state
															{state operatable}
														}
														{relation
															{relation ally}
															{player "1"}
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
												{amount 1
												}
											}
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_1}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_1}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{state
													{state operatable}
												}
												{relation
													{relation ally}
													{player "1"}
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
												{amount 1
												}
												{tag para_planning_thread_1}
												{zone "gamezone"}
												{type human}
												{state "not dead"}
											}
										}
										{amount 1
										}
									}
								}
							}
						}
						{"delay"
							{time 3}
						}
						{"effect"
							{selector
								{tag para_planning_thread_1}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{effect para_attacking}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag para_planning_thread_1}
							}
							{tag_remove para_planning_thread_1}
						}
					}
					{"delay"
						{time 4}
					}
					{"thread"
						{"switch"
							{"case"
								{condition
									{type near}
									{units
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
									}
									{near_to
										{source advanced}
										{group
											{select
												{tag
													{tag artillery}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag radio_car}
												}
											}
											{include
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
												{relation
													{relation ally}
													{player "1"}
												}
												{zone
													{zone "gamezone"}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
									}
									{distance 150}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{tag
															{tag artillery}
														}
														{tag
															{tag rocket_artillery}
														}
														{tag
															{tag radio_car}
														}
													}
													{include
														{state
															{state operatable}
														}
														{state
															{state inhabited}
														}
														{relation
															{relation ally}
															{player "1"}
														}
														{zone
															{zone "gamezone"}
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
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_2}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_2}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{state
													{state operatable}
												}
												{relation
													{relation ally}
													{player "1"}
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
												{amount 2
												}
												{tag para_planning_thread_2}
												{zone "gamezone"}
												{type human}
												{state "not dead"}
											}
										}
										{amount 1
										}
									}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{tag
															{tag fpc1}
														}
														{tag
															{tag fpc2}
														}
														{tag
															{tag fpc3}
														}
														{tag
															{tag fpc4}
														}
														{tag
															{tag fpc5}
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
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_2}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_2}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{tag
													{tag fpc1}
												}
												{tag
													{tag fpc2}
												}
												{tag
													{tag fpc3}
												}
												{tag
													{tag fpc4}
												}
												{tag
													{tag fpc5}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
										{sort
											{type entity}
										}
										{amount 1
										}
									}
								}
							}
							{"default"
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{zone
															{zone "gamezone"}
														}
													}
													{include
														{state
															{state operatable}
														}
														{relation
															{relation ally}
															{player "1"}
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
												{amount 1
												}
											}
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_2}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_2}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{state
													{state operatable}
												}
												{relation
													{relation ally}
													{player "1"}
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
												{amount 1
												}
												{tag para_planning_thread_2}
												{zone "gamezone"}
												{type human}
												{state "not dead"}
											}
										}
										{amount 1
										}
									}
								}
							}
						}
						{"delay"
							{time 3}
						}
						{"effect"
							{selector
								{tag para_planning_thread_2}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{effect para_attacking}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag para_planning_thread_2}
							}
							{tag_remove para_planning_thread_2}
						}
					}
					{"delay"
						{time 4}
					}
					{"thread"
						{"switch"
							{"case"
								{condition
									{type near}
									{units
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
									}
									{near_to
										{source advanced}
										{group
											{select
												{tag
													{tag artillery}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag radio_car}
												}
											}
											{include
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
												{relation
													{relation ally}
													{player "1"}
												}
												{zone
													{zone "gamezone"}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
									}
									{distance 150}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{tag
															{tag artillery}
														}
														{tag
															{tag rocket_artillery}
														}
														{tag
															{tag radio_car}
														}
													}
													{include
														{state
															{state operatable}
														}
														{state
															{state inhabited}
														}
														{relation
															{relation ally}
															{player "1"}
														}
														{zone
															{zone "gamezone"}
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
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_3}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_3}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{state
													{state operatable}
												}
												{relation
													{relation ally}
													{player "1"}
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
												{amount 2
												}
												{tag para_planning_thread_3}
												{zone "gamezone"}
												{type human}
												{state "not dead"}
											}
										}
										{amount 1
										}
									}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{tag
															{tag fpc1}
														}
														{tag
															{tag fpc2}
														}
														{tag
															{tag fpc3}
														}
														{tag
															{tag fpc4}
														}
														{tag
															{tag fpc5}
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
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_3}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_3}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{tag
													{tag fpc1}
												}
												{tag
													{tag fpc2}
												}
												{tag
													{tag fpc3}
												}
												{tag
													{tag fpc4}
												}
												{tag
													{tag fpc5}
												}
											}
											{exclude
												{state
													{state inactive}
												}
											}
										}
										{sort
											{type entity}
										}
										{amount 1
										}
									}
								}
							}
							{"default"
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag para_freeroam}
												}
											}
											{include
												{prop
													{prop human}
												}
												{tag
													{tag ai_inf}
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
												{state
													{state user_control}
												}
												{tag
													{tag para_attacking}
												}
											}
										}
										{sort
											{type entity}
											{entity
												{source advanced}
												{group
													{select
														{zone
															{zone "gamezone"}
														}
													}
													{include
														{state
															{state operatable}
														}
														{relation
															{relation ally}
															{player "1"}
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
												{amount 1
												}
											}
										}
										{amount 4
										}
									}
									{tag_add para_planning_thread_3}
								}
								{"delay"
									{time 1}
								}
								{"action"
									{selector
										{tag para_planning_thread_3}
										{zone "gamezone"}
										{type human}
										{state "not dead"}
									}
									{drop orders}
									{action attack}
									{target
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{state
													{state operatable}
												}
												{relation
													{relation ally}
													{player "1"}
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
												{amount 1
												}
												{tag para_planning_thread_3}
												{zone "gamezone"}
												{type human}
												{state "not dead"}
											}
										}
										{amount 1
										}
									}
								}
							}
						}
						{"delay"
							{time 3}
						}
						{"effect"
							{selector
								{tag para_planning_thread_3}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{effect para_attacking}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag para_planning_thread_3}
							}
							{tag_remove para_planning_thread_3}
						}
					}
					{"delay"
						{time 15}
					}
					{"trigger"
						{name "ai_paratroopers/para_inf_attack_logic/para_freeroam"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_1"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_1}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_1}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{"delay"
						{time 0.2}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{"delay"
						{time 0.5}
					}
					{## "loop" 3
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag going_home}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{waypoint "3"}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_1}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_1}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
											{tag
												{tag landed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.4}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_1}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_1}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_1"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_2"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_2}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_2}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_2}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_2}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_2}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_2}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_2}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_2"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_3"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_3}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_3}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_3}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_3}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_3}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_3}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_3}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_3"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_4"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_4}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_4}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_4}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_4}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_4}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_4}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_4}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_4"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_5"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_5}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_5}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_5}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_5}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_5}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_5}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_5}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_5"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_6"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_6}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_6}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_6}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_6}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_6}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_6}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_6}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_6"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_7"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_7}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_7}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_7}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_7}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_7}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_7}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_7}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_7"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_8"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_8}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_8}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_8}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_8}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_8}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_8}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_8}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_8"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_9"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_9}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_9}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_9}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_9}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_9}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_9}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_9}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_9}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_9}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_9}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_9}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_9"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_10"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_10}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_10}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_10}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_10}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_10}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_10}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_10}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_10}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_10}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_10}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_10}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_10"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_11"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_11}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_11}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_11}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_11}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_11}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_11}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_11}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_11}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_11}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_11}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_11}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_11"}
					}
				}
			}
			{"ai_paratroopers/drop_paratroopers/drop_group_12"
				{condition
					{type 1}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_12}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{tag
											{tag plane_assigned}
										}
									}
									{exclude
										{tag
											{tag dropping}
										}
										{tag
											{tag going_home}
										}
									}
								}
							}
							{near_to
								{tag target_para_drop}
							}
							{distance 75}
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
										{tag para_plane_12}
									}
								}
								{include
									{tag
										{tag plane_assigned}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
								}
							}
						}
						{tag_add dropping}
						{tag_remove plane_assigned}
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
										{tag para_plane_12}
									}
								}
								{include
									{tag
										{tag dropping}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag going_home}
									}
								}
							}
						}
						{tag_add going_home}
						{tag_remove dropping}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_12}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3101"}
						}
					}
					{## "if"
						{condition
							{type cmp_i}
							{var "para_plane_side_start$"}
							{op "=="}
							{value 2}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_12}
										}
									}
									{include
										{tag
											{tag going_home}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
							{drop orders}
							{waypoint "3100"}
						}
					}
					{## "loop" 12
						{"delay"
							{time 1}
						}
						{"emit"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_12}
										}
									}
									{include
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
										{tag
											{tag dropping}
										}
									}
									{exclude
										{tag
											{tag plane_assigned}
										}
									}
								}
							}
							{drop orders}
							{emit
								{mode passengers}
								{count 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag current_group_12}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove used}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove current_group_12}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_12}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.5}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_12}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.55}
								}
							}
						}
						{"default"
							{"loop" 12
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag on_plane_12}
											}
										}
										{include
											{state
												{state linked}
											}
											{prop
												{prop human}
											}
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag deployed}
											}
										}
									}
								}
								{"unlink"
									{selector
										{source current}
									}
								}
								{"delay"
									{time 0.7}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai_paratroopers/drop_paratroopers/drop_group_12"}
					}
				}
			}
			{"ai_paratroopers/set_deploy_parachute"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag eject}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state linked}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"select"
						{source advanced}
						{amount}
						{group
							{select
								{tag
									{tag base}
								}
							}
							{exclude
								{state
									{state inhabited}
								}
								{tag
									{tag _flight}
								}
								{tag
									{tag chute_deployed}
								}
							}
						}
						{sort
							{type entity}
							{entity
								{source advanced}
								{group
									{select
										{tag
											{tag deployed}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state linked}
										}
										{tag
											{tag landed}
										}
									}
								}
							}
						}
					}
					{"linker"
						{selector
							{source current}
						}
						{entities
							{source advanced}
							{group
								{select
									{tag
										{tag eject}
									}
								}
								{include
									{prop
										{prop human}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{state
										{state linked}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{group
										{select
											{tag
												{tag base}
											}
										}
										{exclude
											{state
												{state inhabited}
											}
											{tag
												{tag _flight}
											}
										}
									}
								}
							}
						}
					}
					{"effect"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag base}
									}
								}
								{include
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag _flight}
									}
									{tag
										{tag chute_deployed}
									}
								}
							}
						}
						{effect start}
					}
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag base}
									}
								}
								{include
									{tag
										{tag _flight}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag chute_deployed}
									}
								}
							}
						}
						{tag_add chute_deployed}
					}
					{"trigger"
						{name "ai_paratroopers/set_deploy_parachute"}
					}
				}
			}
			{"ai_paratroopers/remove_crashed_use_tag"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag drop_plane}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
								{group
									{select
										{tag
											{tag drop_plane}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_1}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_1}
										}
									}
								}
							}
							{tag_remove current_group_1}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_2}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_2}
										}
									}
								}
							}
							{tag_remove current_group_2}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_3}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_3}
										}
									}
								}
							}
							{tag_remove current_group_3}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_4}
										}
									}
								}
							}
							{tag_remove used}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_4}
										}
									}
								}
							}
							{tag_remove current_group_4}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_5}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_5}
										}
									}
								}
							}
							{tag_remove current_group_5}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_6}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_6}
										}
									}
								}
							}
							{tag_remove current_group_6}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_7}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_7}
										}
									}
								}
							}
							{tag_remove current_group_7}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_8}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_8}
										}
									}
								}
							}
							{tag_remove current_group_8}
						}
					}
					{"trigger"
						{name "ai_paratroopers/remove_crashed_use_tag"}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_1}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_1}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_1}
										}
									}
								}
							}
							{tag_remove current_group_1}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_2}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_2}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_2}
										}
									}
								}
							}
							{tag_remove current_group_2}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_3}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_3}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_3}
										}
									}
								}
							}
							{tag_remove current_group_3}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_4}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_4}
										}
									}
								}
							}
							{tag_remove used}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_4}
										}
									}
								}
							}
							{tag_remove current_group_4}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_5}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_5}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_5}
										}
									}
								}
							}
							{tag_remove current_group_5}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_6}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_6}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_6}
										}
									}
								}
							}
							{tag_remove current_group_6}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_7}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_7}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_7}
										}
									}
								}
							}
							{tag_remove current_group_7}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_8}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_8}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_8}
										}
									}
								}
							}
							{tag_remove current_group_8}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_9}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_9}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_9}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_9}
										}
									}
								}
							}
							{tag_remove current_group_9}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_10}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_10}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_10}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_10}
										}
									}
								}
							}
							{tag_remove current_group_10}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_11}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_11}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_11}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_11}
										}
									}
								}
							}
							{tag_remove current_group_11}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_12}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag para_plane_12}
										}
									}
									{exclude
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag remove_drop_zone_tag}
										}
									}
								}
							}
							{tag_add remove_drop_zone_tag}
						}
						{"delay"
							{time 0.5}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag current_group_12}
										}
									}
								}
							}
							{tag_remove used}
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
											{tag current_group_12}
										}
									}
								}
							}
							{tag_remove current_group_12}
						}
					}
					{"trigger"
						{name "ai_paratroopers/remove_crashed_use_tag"}
					}
				}
			}
			{"ai_paratroopers/find_target_drop_zones"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{tag user_team}
							}
						}
						{"2.cmp_i"
							{var "targeted_drop$"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{tag target_para_drop}
						}
						{tag_remove target_para_drop}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "drop_behind_lines$"}
								{op ">"}
								{value 0}
							}
							{"select"
								{source advanced}
								{group
									{select
										{tag
											{tag drop_zone}
										}
									}
									{exclude
										{tag
											{tag target_para_drop}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag user_team}
									}
								}
								{amount 2
								}
							}
							{"entity_state"
								{selector
									{source current}
								}
								{tag_add target_para_drop}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "targeted_drop$"}
								{op ">"}
								{value 0}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag drop_zone}
											}
										}
										{exclude
											{tag
												{tag target_para_drop}
											}
										}
									}
									{amount 1
									}
								}
								{tag_add target_para_drop}
							}
							{"select"
								{source advanced}
								{group
									{select
										{tag
											{tag drop_zone}
										}
									}
									{exclude
										{tag
											{tag target_para_drop}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag target_para_drop}
									}
								}
								{amount 0
								}
							}
							{"entity_state"
								{selector
									{source current}
								}
								{tag_add target_para_drop}
							}
						}
					}
					{"delay"
						{time 600}
					}
					{"trigger"
						{name "ai_paratroopers/find_target_drop_zones"}
					}
				}
			}
			{"ai_paratroopers/set_para_drop_strategy"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag drop_plane}
										}
									}
									{include
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
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{count
								{op "=="}
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
								{value 0.0}
							}
							{"set_i"
								{var "drop_behind_lines$"}
								{op "="}
								{value 1}
							}
							{"set_i"
								{var "targeted_drop$"}
								{op "="}
								{value 0}
							}
						}
						{## "case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"set_i"
								{var "drop_behind_lines$"}
								{op "="}
								{value 0}
							}
							{"set_i"
								{var "targeted_drop$"}
								{op "="}
								{value 1}
							}
						}
						{"default"
							{"set_i"
								{var "drop_behind_lines$"}
								{op "="}
								{value 0}
							}
							{"set_i"
								{var "targeted_drop$"}
								{op "="}
								{value 1}
							}
						}
					}
					{## "if"
						{condition
							{type difficulty}
							{level hard}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 0.65}
								}
								{"set_i"
									{var "drop_behind_lines$"}
									{op "="}
									{value 1}
								}
								{"set_i"
									{var "targeted_drop$"}
									{op "="}
									{value 0}
								}
							}
							{## "case"
								{condition
									{type rand}
									{value 0.55}
								}
								{"set_i"
									{var "drop_behind_lines$"}
									{op "="}
									{value 0}
								}
								{"set_i"
									{var "targeted_drop$"}
									{op "="}
									{value 1}
								}
							}
							{"default"
								{"set_i"
									{var "drop_behind_lines$"}
									{op "="}
									{value 0}
								}
								{"set_i"
									{var "targeted_drop$"}
									{op "="}
									{value 1}
								}
							}
						}
					}
					{## "if"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 0.6}
								}
								{"set_i"
									{var "drop_behind_lines$"}
									{op "="}
									{value 1}
								}
								{"set_i"
									{var "targeted_drop$"}
									{op "="}
									{value 0}
								}
							}
							{## "case"
								{condition
									{type rand}
									{value 0.65}
								}
								{"set_i"
									{var "drop_behind_lines$"}
									{op "="}
									{value 0}
								}
								{"set_i"
									{var "targeted_drop$"}
									{op "="}
									{value 1}
								}
							}
							{"default"
								{"set_i"
									{var "drop_behind_lines$"}
									{op "="}
									{value 0}
								}
								{"set_i"
									{var "targeted_drop$"}
									{op "="}
									{value 1}
								}
							}
						}
					}
					{"delay"
						{time 800}
					}
					{"trigger"
						{name "ai_paratroopers/set_para_drop_strategy"}
					}
				}
			}
			{"ai_paratroopers/move_para_planes_to_waypoint_new"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ready_to_move}
										}
									}
									{include
										{tag
											{tag drop_plane}
										}
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag going_home}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag dropping}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag drop_plane}
									}
								}
								{include
									{state
										{state operatable}
									}
									{state
										{state inhabited}
									}
								}
								{exclude
									{tag
										{tag plane_assigned}
									}
									{tag
										{tag going_home}
									}
									{tag
										{tag dropping}
									}
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
										{tag player_drop_plane}
									}
								}
							}
						}
						{control AI}
						{fire_mode hold}
						{movement
							{speed fast}
							{kind fast}
						}
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
										{tag ready_to_move}
									}
								}
								{include
									{state
										{state operatable}
									}
									{state
										{state inhabited}
									}
									{tag
										{tag drop_plane}
									}
								}
								{exclude
									{tag
										{tag need_orders}
									}
									{state
										{state inactive}
									}
									{tag
										{tag player_drop_plane}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add moving_to_start_waypoint}
						{tag_remove ready_to_move}
					}
					{"delay"
						{time 0.5}
					}
					{"switch"
						{## "case"
							{condition
								{type entities}
								{selector
									{zone "increase_plane_height"}
									{state "not dead"}
								}
							}
							{"air_attack"
								{selector
									{tag moving_to_start_waypoint}
									{type vehicle}
									{state inhabited}
								}
								{drop orders}
								{enemies
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
											{tag
												{tag player}
											}
										}
										{include
											{state
												{state operatable}
											}
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
									{amount 1
									}
								}
								{move_from_back}
								{force_placement}
								{random_weapon 0}
								{attack_altitude 55}
							}
						}
						{## "case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"air_attack"
								{selector
									{tag moving_to_start_waypoint}
									{type vehicle}
									{state inhabited}
								}
								{drop orders}
								{enemies
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
											{tag
												{tag player}
											}
										}
										{include
											{state
												{state operatable}
											}
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
									{amount 1
									}
								}
								{move_from_back}
								{force_placement}
								{random_weapon 0}
								{attack_altitude 48}
							}
						}
						{## "case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"air_attack"
								{selector
									{tag moving_to_start_waypoint}
									{type vehicle}
									{state inhabited}
								}
								{drop orders}
								{enemies
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
											{tag
												{tag player}
											}
										}
										{include
											{state
												{state operatable}
											}
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
									{amount 1
									}
								}
								{move_from_back}
								{force_placement}
								{random_weapon 0}
								{attack_altitude 48}
							}
						}
						{## "case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"air_attack"
								{selector
									{tag moving_to_start_waypoint}
									{type vehicle}
									{state inhabited}
								}
								{drop orders}
								{enemies
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
											{tag
												{tag player}
											}
										}
										{include
											{state
												{state operatable}
											}
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
									{amount 1
									}
								}
								{move_from_back}
								{force_placement}
								{random_weapon 0}
								{attack_altitude 48}
							}
						}
						{"default"
							{## "air_attack"
								{selector
									{tag moving_to_start_waypoint}
									{type vehicle}
									{state inhabited}
								}
								{drop orders}
								{enemies
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
											{tag
												{tag player}
											}
										}
										{include
											{state
												{state operatable}
											}
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
											{tag user_team}
										}
										{mode farthest}
									}
									{amount 1
									}
								}
								{move_from_back}
								{force_placement}
								{random_weapon 0}
								{attack_altitude 40}
							}
							{"air_attack"
								{selector
									{tag moving_to_start_waypoint}
									{type vehicle}
									{state inhabited}
								}
								{drop orders}
								{enemies
									{amount 1
									}
									{tag target_para_drop}
								}
								{move_from_back}
								{force_placement}
								{random_weapon 0}
								{attack_altitude 40}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{"air_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag moving_to_start_waypoint}
									}
								}
								{include
									{state
										{state inhabited}
									}
								}
								{exclude
									{state
										{state inactive}
									}
								}
							}
						}
						{altitude 40}
					}
					{"delay"
						{time 0.2}
					}
					{"call"
						{function "assign_ai_drop_planes"}
					}
					{"delay"
						{time 2}
					}
					{"trigger"
						{name "ai_paratroopers/move_para_planes_to_waypoint_new"}
					}
				}
			}
			{"ai_paratroopers/undiscover_logic_posts"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag drop_zone}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 5}
					}
					{"entity_state"
						{selector
							{tag drop_zone}
						}
						{discovered off}
					}
				}
			}