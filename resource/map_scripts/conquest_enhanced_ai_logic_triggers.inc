; ========== Freeroam Scripts ==========
			{## "ai/freeroam/freeroam_artillery_old"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag freeroam}
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
										{tag
											{tag artillery}
										}
									}
									{exclude
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{tag
											{tag arty_attacking}
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
								{type entities}
								{selector
									{source advanced}
									{group
										{select
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
										}
										{include
											{relation
												{relation ally}
												{player "1"}
											}
											{state
												{state user_control}
											}
										}
									}
								}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation ally}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_1}
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
													{tag artillery_freeroam_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
												{tag artillery_freeroam_thread_1}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_1}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_1}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_1}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_1}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation ally}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_2}
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
													{tag artillery_freeroam_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
												{tag artillery_freeroam_thread_2}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_4}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_2}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_2}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_2}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation ally}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_3}
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
													{tag artillery_freeroam_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
												{tag artillery_freeroam_thread_3}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_3}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_3}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_3}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_3}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation ally}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_4}
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
													{tag artillery_freeroam_thread_4}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
												{tag artillery_freeroam_thread_4}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_4}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_4}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_4}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_4}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation ally}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_5}
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
													{tag artillery_freeroam_thread_5}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
												{tag artillery_freeroam_thread_5}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_5}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_5}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_5}
								}
							}
						}
						{"default"
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation enemy}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_1}
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
													{tag artillery_freeroam_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
													{relation enemy}
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
												{tag artillery_freeroam_thread_1}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_1}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_1}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_1}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_1}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation enemy}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_2}
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
													{tag artillery_freeroam_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
													{relation enemy}
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
												{tag artillery_freeroam_thread_2}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_2}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_2}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_2}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_2}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation enemy}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_3}
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
													{tag artillery_freeroam_thread_3}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
													{relation enemy}
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
												{tag artillery_freeroam_thread_3}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_3}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_3}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_3}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_3}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation enemy}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_4}
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
													{tag artillery_freeroam_thread_4}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
													{relation enemy}
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
												{tag artillery_freeroam_thread_4}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_4}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_4}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_4}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_4}
								}
							}
							{"delay"
								{time 1}
							}
							{"thread"
								{"delay"
									{time 1}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag freeroam}
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
												{tag
													{tag artillery}
												}
											}
											{exclude
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag super_heavy_artillery}
												}
												{state
													{state user_control}
												}
												{state
													{state inactive}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag artillery_freeroam_thread_5}
												}
												{tag
													{tag arty_attacking}
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
														{relation
															{relation enemy}
															{player "1"}
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
															{state inactive}
														}
													}
												}
												{amount 1
												}
											}
										}
										{amount 1
										}
									}
									{tag_add artillery_freeroam_thread_5}
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
													{tag artillery_freeroam_thread_5}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag player_veh}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_car}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{tag
													{tag rocket_artillery}
												}
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
										{amount 1
										}
									}
									{drop orders}
									{action advance}
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
													{relation enemy}
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
												{tag artillery_freeroam_thread_5}
												{state operatable}
											}
											{mode farthest}
										}
										{amount 1
										}
									}
								}
								{"delay"
									{time 1}
								}
								{"effect"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_5}
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
													{state user_control}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag arty_attacking}
												}
											}
										}
									}
									{effect tag_attacking_ai_artillery}
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
													{tag artillery_freeroam_thread_5}
												}
											}
											{include
												{tag
													{tag freeroam}
												}
												{state
													{state operatable}
												}
												{state
													{state inhabited}
												}
											}
											{exclude
												{tag
													{tag player_veh}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
												{tag
													{tag arty_attacking}
												}
												{zone
													{zone "sidea1"}
												}
												{zone
													{zone "sidea2"}
												}
												{zone
													{zone "sidea3"}
												}
												{zone
													{zone "sidea4"}
												}
												{zone
													{zone "sideb1"}
												}
												{zone
													{zone "sideb2"}
												}
												{zone
													{zone "sideb3"}
												}
												{zone
													{zone "sideb4"}
												}
												{state
													{state inactive}
												}
											}
										}
									}
									{tag_add arty_attacking}
								}
								{"delay"
									{time 5}
								}
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag artillery_freeroam_thread_5}
												}
											}
											{exclude
												{tag
													{tag artillery_freeroam_thread_1}
												}
												{tag
													{tag artillery_freeroam_thread_2}
												}
												{tag
													{tag artillery_freeroam_thread_3}
												}
												{tag
													{tag artillery_freeroam_thread_4}
												}
											}
										}
									}
									{tag_remove artillery_freeroam_thread_5}
								}
							}
						}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/freeroam/freeroam_artillery"}
					}
				}
			}
			{## "ai/freeroam/freeroam_artillery"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag freeroam}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{tag
											{tag arty_attacking}
										}
										{state
											{state linked}
										}
										{tag
											{tag artillery_selected}
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
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag freeroam}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{tag
											{tag arty_attacking}
										}
										{state
											{state linked}
										}
										{tag
											{tag artillery_selected}
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
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
										{tag
											{tag freeroam}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{tag
											{tag arty_attacking}
										}
										{state
											{state linked}
										}
										{tag
											{tag artillery_selected}
										}
									}
								}
							}
							{tag_add artillery_selected}
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
											{tag artillery_selected}
										}
									}
									{include
										{state
											{state inhabited}
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
											{tag player_veh}
										}
										{tag
											{tag player_armor}
										}
										{tag
											{tag player_car}
										}
										{state
											{state user_control}
										}
										{tag
											{tag arty_attacking}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{action advance}
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
										{state
											{state linked}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag artillery_selected}
										{state operatable}
									}
								}
								{group
									{select
										{tag
											{tag flag_point}
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
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag artillery_selected}
										}
									}
									{include
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
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_attacking_ai_artillery}
						}
						{"delay"
							{time 5}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "ai/freeroam/freeroam_artillery"}
					}
				}
			}
			{"ai/freeroam/freeroam_dismounted_inf"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{tag dismounted_freeroam}
								{type human}
								{state "not dead"}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 3}
					}
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag dismounted_freeroam}
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
											{state user_control}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state dead}
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
											{tag dismounted_freeroam}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{tag
											{tag freeroam}
										}
									}
								}
								{amount 6
								}
							}
							{tag_add dismount_getting_orders}
							{tag_remove dismounted_freeroam}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag dismount_getting_orders}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
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
								{"switch"
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"waypoint"
											{who
												{type actor}
												{actors
													{source advanced}
													{group
														{select
															{tag
																{tag dismount_getting_orders}
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
															{state
																{state user_control}
															}
															{tag
																{tag freeroam}
															}
														}
													}
												}
											}
											{action
												{type start}
												{waypoint "1002"}
												{make_squad}
												{name_squad dismounted_squad}
												{approach force}
											}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"waypoint"
											{who
												{type actor}
												{actors
													{source advanced}
													{group
														{select
															{tag
																{tag dismount_getting_orders}
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
															{state
																{state user_control}
															}
															{tag
																{tag freeroam}
															}
														}
													}
												}
											}
											{action
												{type start}
												{waypoint "1003"}
												{make_squad}
												{name_squad dismounted_squad}
												{approach force}
											}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"action"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag dismount_getting_orders}
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
														{state
															{state user_control}
														}
														{tag
															{tag freeroam}
														}
													}
												}
											}
											{drop orders}
											{action advance}
											{target
												{amount 1
												}
												{tag spawn_a}
											}
										}
									}
									{"default"
										{"waypoint"
											{who
												{type actor}
												{actors
													{source advanced}
													{group
														{select
															{tag
																{tag dismount_getting_orders}
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
															{state
																{state user_control}
															}
															{tag
																{tag freeroam}
															}
														}
													}
												}
											}
											{action
												{type start}
												{waypoint "1001"}
												{make_squad}
												{name_squad dismounted_squad}
												{approach force}
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
										{"waypoint"
											{who
												{type actor}
												{actors
													{source advanced}
													{group
														{select
															{tag
																{tag dismount_getting_orders}
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
															{state
																{state user_control}
															}
															{tag
																{tag freeroam}
															}
														}
													}
												}
											}
											{action
												{type start}
												{waypoint "2002"}
												{make_squad}
												{name_squad dismounted_squad}
												{approach force}
											}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"waypoint"
											{who
												{type actor}
												{actors
													{source advanced}
													{group
														{select
															{tag
																{tag dismount_getting_orders}
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
															{state
																{state user_control}
															}
															{tag
																{tag freeroam}
															}
														}
													}
												}
											}
											{action
												{type start}
												{waypoint "2003"}
												{make_squad}
												{name_squad dismounted_squad}
												{approach force}
											}
										}
									}
									{"case"
										{condition
											{type rand}
											{value 0.25}
										}
										{"action"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag dismount_getting_orders}
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
														{state
															{state user_control}
														}
														{tag
															{tag freeroam}
														}
													}
												}
											}
											{drop orders}
											{action advance}
											{target
												{amount 1
												}
												{tag spawn_b}
											}
										}
									}
									{"default"
										{"waypoint"
											{who
												{type actor}
												{actors
													{source advanced}
													{group
														{select
															{tag
																{tag dismount_getting_orders}
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
															{state
																{state user_control}
															}
															{tag
																{tag freeroam}
															}
														}
													}
												}
											}
											{action
												{type start}
												{waypoint "2001"}
												{make_squad}
												{name_squad dismounted_squad}
												{approach force}
											}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{## "entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag dismount_getting_orders}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{tag
											{tag freeroam}
										}
									}
								}
							}
							{tag_remove dismount_getting_orders}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag dismount_getting_orders}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{effect remove_dismount_tags}
						}
						{"delay"
							{time 3}
						}
					}
					{"delay"
						{time 7}
					}
					{"trigger"
						{name "ai/freeroam/freeroam_dismounted_inf"}
					}
				}
			}
			{"ai/freeroam/freeroam_emplacement"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag freeroam_emplacemented_selected}
										}
										{tag
											{tag cmp_mg}
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
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag freeroam_emplacemented_selected}
										}
										{tag
											{tag cmp_mg}
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
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{prop
											{prop car}
										}
										{prop
											{prop tank}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag freeroam_emplacemented_selected}
										}
										{tag
											{tag cmp_mg}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add freeroam_emplacemented_selected}
							{tag_remove freeroam}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag freeroam_emplacemented_selected}
								{type vehicle}
								{state inhabited}
							}
							{fire_mode open}
							{move_mode free}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{type normal}
							}
							{cannon move}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag freeroam_emplacemented_selected}
								{type vehicle}
								{state inhabited}
							}
							{action move}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag fpc2}
										}
										{tag
											{tag fpc5}
										}
										{tag
											{tag fpc4}
										}
										{tag
											{tag fpc3}
										}
										{tag
											{tag fpc1}
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
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{tag freeroam_emplacemented_selected}
								{type vehicle}
								{state inhabited}
							}
							{effect freeroaming}
						}
						{"delay"
							{time 5}
						}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/freeroam/freeroam_emplacement"}
					}
				}
			}
			{"ai/freeroam/freeroam_inf"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag freeroam}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{tag
											{tag freeroam_inf_selected}
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
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag freeroam}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{tag
											{tag freeroam_inf_selected}
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
											{tag freeroam}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{tag
											{tag freeroam_inf_selected}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag freeroam_inf_selected}
									}
								}
								{amount 4
								}
							}
							{tag_add freeroam_inf_selected}
							{tag_remove freeroam}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag freeroam_inf_selected}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{action advance}
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
										{amount 1
										}
										{tag freeroam_inf_selected}
										{type human}
										{state "not dead"}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 4}
						}
						{"action"
							{selector
								{tag freeroam_inf_selected}
								{type human}
								{state "not dead"}
							}
							{action advance}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag fpc2}
										}
										{tag
											{tag fpc5}
										}
										{tag
											{tag fpc4}
										}
										{tag
											{tag fpc3}
										}
										{tag
											{tag fpc1}
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
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag freeroam_inf_selected}
								{type human}
								{state "not dead"}
							}
							{fire_mode open}
							{move_mode free}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{tag freeroam_inf_selected}
								{type human}
								{state "not dead"}
							}
							{effect freeroaming}
						}
						{"delay"
							{time 5}
						}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/freeroam/freeroam_inf"}
					}
				}
			}
			{"ai/freeroam/freeroam_tank"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop tank}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag freeroam_tank_selected}
										}
									}
								}
								{group
									{select
										{tag
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{tag
											{tag freeroam_tank_selected}
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
					{"while"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop tank}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag freeroam_tank_selected}
										}
									}
								}
								{group
									{select
										{tag
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{tag
											{tag freeroam_tank_selected}
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
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop tank}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag freeroam_tank_selected}
										}
									}
								}
								{group
									{select
										{tag
											{tag freeroam}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										{tag
											{tag super_heavy_artillery}
										}
										{tag
											{tag freeroam_tank_selected}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add freeroam_tank_selected}
							{tag_remove freeroam}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{state
											{state inhabited}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{prop
											{prop human}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag freeroam_tank_target}
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
										{prop
											{prop human}
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
										{prop
											{prop vehicle}
										}
										{tag
											{tag freeroam_tank_target}
										}
										{state
											{state linked}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag freeroam_tank_selected}
										{type vehicle}
										{state inhabited}
									}
								}
								{amount 1
								}
							}
							{tag_add freeroam_tank_target}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag freeroam_tank_selected}
								{type vehicle}
								{state inhabited}
							}
							{drop orders}
							{action attack}
							{target
								{tag freeroam_tank_target}
								{state "not dead"}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag freeroam_tank_selected}
								{type vehicle}
								{state inhabited}
							}
							{fire_mode open}
							{move_mode free}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{type normal}
							}
							{cannon move}
						}
						{"delay"
							{time 1}
						}
						{"loop" 5
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{prop
												{prop vehicle}
											}
											{state
												{state inhabited}
											}
											{state
												{state user_control}
											}
										}
										{exclude
											{prop
												{prop human}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{tag
												{tag freeroam_tank_target}
											}
											{tag
												{tag freeroam_tank_target_used}
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
											{prop
												{prop human}
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
											{prop
												{prop vehicle}
											}
											{tag
												{tag freeroam_tank_target}
											}
											{state
												{state linked}
											}
											{tag
												{tag freeroam_tank_target_used}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{tag freeroam_tank_selected}
											{type vehicle}
											{state inhabited}
										}
									}
									{amount 1
									}
								}
								{tag_add freeroam_tank_target}
							}
							{"delay"
								{time 2}
							}
							{"action"
								{selector
									{tag freeroam_tank_selected}
									{type vehicle}
									{state inhabited}
								}
								{action attack}
								{target
									{source advanced}
									{group
										{select
											{tag
												{tag freeroam_tank_target}
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
												{tag freeroam_tank_target_used}
											}
										}
									}
									{amount 1
									}
								}
							}
							{"delay"
								{time 2}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag freeroam_tank_target}
											}
										}
										{exclude
											{tag
												{tag freeroam_tank_target_used}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{state
												{state dead}
											}
										}
									}
								}
								{tag_add freeroam_tank_target_used}
								{tag_remove freeroam_tank_target}
							}
							{"delay"
								{time 4}
							}
						}
						{## "action"
							{selector
								{tag freeroam_tank_selected}
								{type vehicle}
								{state inhabited}
							}
							{action move}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag fpc2}
										}
										{tag
											{tag fpc5}
										}
										{tag
											{tag fpc4}
										}
										{tag
											{tag fpc3}
										}
										{tag
											{tag fpc1}
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
							}
						}
						{## "delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag freeroam_tank_selected}
								{type vehicle}
								{state inhabited}
							}
							{fire_mode open}
							{move_mode free}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{type normal}
							}
							{cannon move}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{tag freeroam_tank_selected}
								{type vehicle}
								{state inhabited}
							}
							{effect freeroaming}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag freeroam_tank_target_used}
							}
							{tag_remove freeroam_tank_target_used}
						}
						{"delay"
							{time 5}
						}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/freeroam/freeroam_tank"}
					}
				}
			}
				

; ========== Grenade Scripts ==========			
			{"ai/grenade/at_grenade/throw_at_at_vehicle"
				{condition
					{expression "(4 & 2) | (3 & 1)"}
					{terms
						{"4.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "1"}
										}
										{state
											{state user_control}
										}
									}
								}
							}
						}
						{"2.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "hafthohlladung" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_geballteladung" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "pwm_l" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rpg40" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rpg43" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m32_satchel" "grenade"}
											{min 1}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "molotov_bundle_fin" "grenade"}
											{min 1}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "molotov_cocktail" "grenade"}
											{min 1}
										}
									}
									{exclude
										{state
											{state dead}
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
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "1"}
										}
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
									}
								}
							}
							{distance 35}
						}
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation enemy}
											{player "1"}
										}
										{state
											{state user_control}
										}
									}
								}
							}
						}
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "hafthohlladung" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_geballteladung" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "pwm_l" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rpg40" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rpg43" "grenade"}
											{min 1}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m32_satchel" "grenade"}
											{min 1}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "molotov_bundle_fin" "grenade"}
											{min 1}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "molotov_cocktail" "grenade"}
											{min 1}
										}
									}
									{exclude
										{state
											{state dead}
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
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation enemy}
											{player "1"}
										}
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
									}
								}
							}
							{distance 35}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"thread"
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation ally}
													{player "1"}
												}
												{state
													{state user_control}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "hafthohlladung" "grenade"}
													{min 1}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state user_control}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_geballteladung" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "pwm_l" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg40" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg43" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m32_satchel" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_bundle_fin" "grenade"}
													{min 1}
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
												{tag
													{tag player}
												}
												{tag
													{tag throwing_at_grenade}
												}
											}
										}
										{amount 2
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_cocktail" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag throwing_at_grenade}
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
														{relation
															{relation ally}
															{player "1"}
														}
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
													}
												}
												{amount 1
												}
											}
										}
									}
									{tag_add throw_at_at_vehicle_thread_1}
								}
							}
							{"default"
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag cmp_def}
												}
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "hafthohlladung" "grenade"}
													{min 1}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state user_control}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_geballteladung" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "pwm_l" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg40" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg43" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m32_satchel" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_at_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_bundle_fin" "grenade"}
													{min 1}
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
												{tag
													{tag player}
												}
												{tag
													{tag throwing_at_grenade}
												}
											}
										}
										{amount 2
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_cocktail" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag throwing_at_grenade}
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
														{relation
															{relation ally}
															{player "1"}
														}
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
													}
												}
												{amount 1
												}
											}
										}
									}
									{tag_add throw_at_at_vehicle_thread_1}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_at_at_vehicle_thread_1}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_at_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_at_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_at_at_vehicle_thread_1}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_at_at_vehicle_thread_1}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_at_at_vehicle_thread_1}
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
									{state
										{state user_control}
									}
									{tag
										{tag player}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{source current}
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
										{relation
											{relation ally}
											{player "1"}
										}
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
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag throw_at_at_vehicle_thread_1}
										{type human}
										{state "not dead"}
									}
								}
								{amount 2
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"action"
							{selector
								{source current}
							}
							{action advance}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag flag_point}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{sort
									{type shuffle}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_at_at_vehicle_thread_1}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_at_at_vehicle_thread_1}
							}
							{tag_remove throw_at_at_vehicle_thread_1}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation ally}
													{player "1"}
												}
												{state
													{state user_control}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "hafthohlladung" "grenade"}
													{min 1}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state user_control}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_geballteladung" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "pwm_l" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg40" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg43" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m32_satchel" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_bundle_fin" "grenade"}
													{min 1}
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
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{amount 2
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_cocktail" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
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
														{relation
															{relation ally}
															{player "1"}
														}
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
													}
												}
												{amount 1
												}
											}
										}
									}
									{tag_add throw_at_at_vehicle_thread_2}
								}
							}
							{"default"
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag cmp_def}
												}
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "hafthohlladung" "grenade"}
													{min 1}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state user_control}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_geballteladung" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "pwm_l" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg40" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg43" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m32_satchel" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_bundle_fin" "grenade"}
													{min 1}
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
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{amount 2
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_cocktail" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
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
														{relation
															{relation ally}
															{player "1"}
														}
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
													}
												}
												{amount 1
												}
											}
										}
									}
									{tag_add throw_at_at_vehicle_thread_2}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_at_at_vehicle_thread_2}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_at_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_at_at_vehicle_thread_2}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_at_at_vehicle_thread_2}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_at_at_vehicle_thread_2}
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
									{state
										{state user_control}
									}
									{tag
										{tag player}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{source current}
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
										{relation
											{relation ally}
											{player "1"}
										}
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
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag throw_at_at_vehicle_thread_2}
										{type human}
										{state "not dead"}
									}
								}
								{amount 2
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"action"
							{selector
								{source current}
							}
							{action advance}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag flag_point}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{sort
									{type shuffle}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_at_at_vehicle_thread_2}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_at_at_vehicle_thread_2}
							}
							{tag_remove throw_at_at_vehicle_thread_2}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation ally}
													{player "1"}
												}
												{state
													{state user_control}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "hafthohlladung" "grenade"}
													{min 1}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state user_control}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_geballteladung" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "pwm_l" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg40" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg43" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m32_satchel" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_bundle_fin" "grenade"}
													{min 1}
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
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{amount 2
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_cocktail" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
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
														{relation
															{relation ally}
															{player "1"}
														}
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
													}
												}
												{amount 1
												}
											}
										}
									}
									{tag_add throw_at_at_vehicle_thread_3}
								}
							}
							{"default"
								{"entity_state"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag cmp_def}
												}
												{tag
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "hafthohlladung" "grenade"}
													{min 1}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state user_control}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_geballteladung" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "pwm_l" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg40" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rpg43" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m32_satchel" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
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
													{tag throwing_grenade}
												}
											}
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_bundle_fin" "grenade"}
													{min 1}
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
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
												}
											}
										}
										{amount 2
										}
										{group
											{select
												{tag
													{tag ai_inf}
												}
												{tag
													{tag cmp_def}
												}
											}
											{include
												{with_item
													{type amount}
													{item "molotov_cocktail" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{tag
													{tag player}
												}
												{tag
													{tag throwing_grenade}
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
														{relation
															{relation ally}
															{player "1"}
														}
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
													}
												}
												{amount 1
												}
											}
										}
									}
									{tag_add throw_at_at_vehicle_thread_3}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_at_at_vehicle_thread_3}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_at_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_at_at_vehicle_thread_3}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_at_at_vehicle_thread_3}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_at_at_vehicle_thread_3}
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
									{state
										{state user_control}
									}
									{tag
										{tag player}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{source current}
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
										{relation
											{relation ally}
											{player "1"}
										}
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
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag throw_at_at_vehicle_thread_3}
										{type human}
										{state "not dead"}
									}
								}
								{amount 2
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"action"
							{selector
								{source current}
							}
							{action advance}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag flag_point}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
								{sort
									{type shuffle}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_at_at_vehicle_thread_3}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_at_at_vehicle_thread_3}
							}
							{tag_remove throw_at_at_vehicle_thread_3}
						}
					}
					{"delay"
						{time 75}
					}
					{"trigger"
						{name "ai/grenade/at_grenade/throw_at_at_vehicle"}
					}
				}
			}
			{"ai/grenade/smoke_grenade/throw_smoke_at_human"
				{condition
					{expression "(1 & 3) | (2 & 4)"}
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
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
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "1"}
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
							}
							{distance 100}
						}
						{"2.near"
							{units
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
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
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation enemy}
											{player "1"}
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
							}
							{distance 100}
						}
						{"3.entities"
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
										{relation
											{relation ally}
											{player "1"}
										}
									}
								}
							}
						}
						{"4.entities"
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
						{time 4}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
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
												{relation
													{relation ally}
													{player "1"}
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
										{amount 1
										}
									}
								}
								{amount 2
								}
							}
							{tag_add throw_smoke_at_human_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_smoke_at_human_thread_1}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_smoke_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_smoke_at_human_thread_1}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_human_thread_1}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "nbk39" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_1}
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
													{state linked}
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
									{action take}
									{item "nbk39" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rdg1_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_1}
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
													{state linked}
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
									{action take}
									{item "rdg1_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m43_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_1}
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
													{state linked}
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
									{action take}
									{item "m43_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_1}
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
													{state linked}
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
									{action take}
									{item "m24_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m42_wp" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_1}
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
													{state linked}
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
									{action take}
									{item "m42_wp" "grenade"}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_smoke_at_human_thread_1}
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
										{tag player}
									}
								}
							}
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
												{zone
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
										}
									}
								}
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
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
												{tag throw_smoke_at_human_thread_1}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
							{"default"
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation enemy}
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
												{tag throw_smoke_at_human_thread_1}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
						}
						{"delay"
							{time 5}
						}
						{"action"
							{selector
								{source current}
							}
							{drop orders}
							{action attack}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
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
										{zone
											{zone "gamezone"}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state inactive}
										}
										{tag
											{tag hidden}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag done_throw_smoke_at_human_thread_1}
										{type human}
										{state "not dead"}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_human_thread_1}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_smoke_at_human_thread_1}
							}
							{tag_remove throw_smoke_at_human_thread_1}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
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
												{relation
													{relation ally}
													{player "1"}
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
										{amount 1
										}
									}
								}
								{amount 2
								}
							}
							{tag_add throw_smoke_at_human_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_smoke_at_human_thread_2}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_smoke_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_smoke_at_human_thread_2}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_human_thread_2}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
							{movement
								{type normal}
							}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "nbk39" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_2}
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
													{state linked}
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
									{action take}
									{item "nbk39" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rdg1_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_2}
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
													{state linked}
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
									{action take}
									{item "rdg1_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m43_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_2}
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
													{state linked}
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
									{action take}
									{item "m43_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_2}
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
													{state linked}
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
									{action take}
									{item "m24_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m42_wp" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_2}
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
													{state linked}
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
									{action take}
									{item "m42_wp" "grenade"}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_smoke_at_human_thread_2}
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
										{tag player}
									}
								}
							}
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
												{zone
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
										}
									}
								}
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
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
												{tag throw_smoke_at_human_thread_2}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
							{"default"
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation enemy}
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
												{tag throw_smoke_at_human_thread_2}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
						}
						{"delay"
							{time 5}
						}
						{"action"
							{selector
								{source current}
							}
							{drop orders}
							{action attack}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
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
										{zone
											{zone "gamezone"}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state inactive}
										}
										{tag
											{tag hidden}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag done_throw_smoke_at_human_thread_2}
										{type human}
										{state "not dead"}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_human_thread_2}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_smoke_at_human_thread_2}
							}
							{tag_remove throw_smoke_at_human_thread_2}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{amount 2
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
												{relation
													{relation ally}
													{player "1"}
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
										{amount 3
										}
									}
								}
							}
							{tag_add throw_smoke_at_human_thread_3}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_smoke_at_human_thread_3}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_smoke_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_smoke_at_human_thread_3}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_human_thread_3}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "nbk39" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_3}
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
													{state linked}
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
									{action take}
									{item "nbk39" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rdg1_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_3}
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
													{state linked}
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
									{action take}
									{item "rdg1_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m43_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_3}
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
													{state linked}
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
									{action take}
									{item "m43_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_3}
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
													{state linked}
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
									{action take}
									{item "m24_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m42_wp" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_human_thread_3}
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
													{state linked}
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
									{action take}
									{item "m42_wp" "grenade"}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_smoke_at_human_thread_3}
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
										{tag player}
									}
								}
							}
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
												{zone
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
										}
									}
								}
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
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
												{tag throw_smoke_at_human_thread_3}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
							{"default"
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation enemy}
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
												{tag throw_smoke_at_human_thread_3}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
						}
						{"delay"
							{time 5}
						}
						{"action"
							{selector
								{source current}
							}
							{drop orders}
							{action attack}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
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
										{zone
											{zone "gamezone"}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{state
											{state inactive}
										}
										{tag
											{tag hidden}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag done_throw_smoke_at_human_thread_3}
										{type human}
										{state "not dead"}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_human_thread_3}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_smoke_at_human_thread_3}
							}
							{tag_remove throw_smoke_at_human_thread_3}
						}
					}
					{"delay"
						{time 75}
					}
					{"trigger"
						{name "ai/grenade/smoke_grenade/throw_smoke_at_human"}
					}
				}
			}
			{"ai/grenade/smoke_grenade/throw_smoke_at_vehicle"
				{condition
					{expression "(1 & 3) | (2 & 4)"}
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
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
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation ally}
											{player "1"}
										}
										{prop
											{prop vehicle}
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
											{state linked}
										}
									}
								}
							}
							{distance 100}
						}
						{"2.near"
							{units
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{tag
											{tag ai_inf}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
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
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
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
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{relation
											{relation enemy}
											{player "1"}
										}
										{prop
											{prop vehicle}
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
											{state linked}
										}
									}
								}
							}
							{distance 100}
						}
						{"3.entities"
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
										{relation
											{relation ally}
											{player "1"}
										}
									}
								}
							}
						}
						{"4.entities"
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
						{time 2}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
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
												{relation
													{relation ally}
													{player "1"}
												}
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
											}
										}
										{amount 1
										}
									}
								}
								{amount 2
								}
							}
							{tag_add throw_smoke_at_vehicle_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_smoke_at_vehicle_thread_1}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_smoke_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_smoke_at_vehicle_thread_1}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_1}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "nbk39" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_1}
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
													{state linked}
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
									{action take}
									{item "nbk39" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rdg1_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_1}
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
													{state linked}
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
									{action take}
									{item "rdg1_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m43_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_1}
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
													{state linked}
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
									{action take}
									{item "m43_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_1}
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
													{state linked}
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
									{action take}
									{item "m24_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m42_wp" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_1}
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
													{state linked}
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
									{action take}
									{item "m42_wp" "grenade"}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_smoke_at_vehicle_thread_1}
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
										{tag player}
									}
								}
							}
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
												{zone
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
										}
									}
								}
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation ally}
													{player "1"}
												}
												{prop
													{prop vehicle}
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
										{sort
											{type entity}
											{entity
												{amount 1
												}
												{tag throw_smoke_at_vehicle_thread_1}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
							{"default"
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation enemy}
													{player "1"}
												}
												{prop
													{prop vehicle}
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
										{sort
											{type entity}
											{entity
												{amount 1
												}
												{tag throw_smoke_at_vehicle_thread_1}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
						}
						{"delay"
							{time 5}
						}
						{"action"
							{selector
								{source current}
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
										{relation
											{relation ally}
											{player "1"}
										}
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
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag done_throw_smoke_at_vehicle_thread_1}
										{type human}
										{state "not dead"}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_1}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_1}
							}
							{tag_remove throw_smoke_at_vehicle_thread_1}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
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
												{relation
													{relation ally}
													{player "1"}
												}
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
											}
										}
										{amount 1
										}
									}
								}
								{amount 2
								}
							}
							{tag_add throw_smoke_at_vehicle_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_smoke_at_vehicle_thread_2}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_smoke_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_smoke_at_vehicle_thread_2}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_2}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
							{movement
								{type normal}
							}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "nbk39" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_2}
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
													{state linked}
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
									{action take}
									{item "nbk39" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rdg1_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_2}
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
													{state linked}
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
									{action take}
									{item "rdg1_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m43_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_2}
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
													{state linked}
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
									{action take}
									{item "m43_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_2}
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
													{state linked}
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
									{action take}
									{item "m24_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m42_wp" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_2}
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
													{state linked}
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
									{action take}
									{item "m42_wp" "grenade"}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_smoke_at_vehicle_thread_2}
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
										{tag player}
									}
								}
							}
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
												{zone
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
										}
									}
								}
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation ally}
													{player "1"}
												}
												{prop
													{prop vehicle}
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
										{sort
											{type entity}
											{entity
												{amount 1
												}
												{tag throw_smoke_at_vehicle_thread_2}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
							{"default"
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation enemy}
													{player "1"}
												}
												{prop
													{prop vehicle}
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
										{sort
											{type entity}
											{entity
												{amount 1
												}
												{tag throw_smoke_at_vehicle_thread_2}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
						}
						{"delay"
							{time 5}
						}
						{"action"
							{selector
								{source current}
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
										{relation
											{relation ally}
											{player "1"}
										}
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
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag done_throw_smoke_at_vehicle_thread_2}
										{type human}
										{state "not dead"}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_2}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_2}
							}
							{tag_remove throw_smoke_at_vehicle_thread_2}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "nbk39" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "rdg1_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m43_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m24_smoke" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type amount}
											{item "m42_wp" "grenade"}
											{min 1}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag player}
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
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
									}
								}
								{amount 2
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
												{relation
													{relation ally}
													{player "1"}
												}
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
											}
										}
										{amount 3
										}
									}
								}
							}
							{tag_add throw_smoke_at_vehicle_thread_3}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag throw_smoke_at_vehicle_thread_3}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag throwing_smoke_grenade}
										}
										{tag
											{tag throwing_grenade}
										}
										{state
											{state dead}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect throw_smoke_grenade}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{tag throw_smoke_at_vehicle_thread_3}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_3}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode hold}
							{move_mode hold}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "nbk39" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_3}
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
													{state linked}
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
									{action take}
									{item "nbk39" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "rdg1_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_3}
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
													{state linked}
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
									{action take}
									{item "rdg1_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m43_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_3}
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
													{state linked}
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
									{action take}
									{item "m43_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m24_smoke" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_3}
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
													{state linked}
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
									{action take}
									{item "m24_smoke" "grenade"}
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
													{tag ai_inf}
												}
											}
											{include
												{with_item
													{type amount}
													{item "m42_wp" "grenade"}
													{min 1}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
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
								}
								{"inventory"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag throw_smoke_at_vehicle_thread_3}
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
													{state linked}
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
									{action take}
									{item "m42_wp" "grenade"}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag throw_smoke_at_vehicle_thread_3}
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
										{tag player}
									}
								}
							}
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
												{zone
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
										}
									}
								}
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation ally}
													{player "1"}
												}
												{prop
													{prop vehicle}
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
										{sort
											{type entity}
											{entity
												{amount 1
												}
												{tag throw_smoke_at_vehicle_thread_3}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
							{"default"
								{"actor_fire"
									{selector
										{source current}
									}
									{drop orders}
									{attack enemies}
									{enemies
										{source advanced}
										{group
											{select
												{zone
													{zone "gamezone"}
												}
											}
											{include
												{relation
													{relation enemy}
													{player "1"}
												}
												{prop
													{prop vehicle}
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
										{sort
											{type entity}
											{entity
												{amount 1
												}
												{tag throw_smoke_at_vehicle_thread_3}
												{type human}
												{state "not dead"}
											}
										}
										{amount 2
										}
									}
									{interval 0}
									{time 0}
								}
							}
						}
						{"delay"
							{time 5}
						}
						{"action"
							{selector
								{source current}
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
										{relation
											{relation ally}
											{player "1"}
										}
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
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag done_throw_smoke_at_vehicle_thread_3}
										{type human}
										{state "not dead"}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_3}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{control AI}
							{fire_mode open}
							{move_mode free}
							{weapon_prepare on}
							{ai_move
								{mode enable}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{tag throw_smoke_at_vehicle_thread_3}
							}
							{tag_remove throw_smoke_at_vehicle_thread_3}
						}
					}
					{"delay"
						{time 75}
					}
					{"trigger"
						{name "ai/grenade/smoke_grenade/throw_smoke_at_vehicle"}
					}
				}
			}

; ========== Vehicle Combat Scripts ==========
			{"ai/non_light_vehicle_attack"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag cmp_def}
								{state operatable}
							}
							{count
								{op ">"}
								{value 1}
							}
						}
						{"2.entities"
							{selector
								{tag player}
								{state operatable}
							}
						}
					}
				}
				{actions
					{## "delay"
						{time 10}
					}
					{## "actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ai_armor}
									}
									{tag
										{tag ai_car}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag spg}
									}
									{tag
										{tag is2_44}
									}
									{tag
										{tag katy}
									}
									{tag
										{tag is2_43}
									}
									{tag
										{tag kv2_40}
									}
									{tag
										{tag tiger2p}
									}
									{tag
										{tag tiger2h}
									}
									{tag
										{tag immobile}
									}
								}
							}
						}
						{drop "sensor senseless"}
						{fire_mode hold}
						{move_mode free}
						{ai_move
							{mode enable}
						}
						{movement
							{speed assault}
							{max_speed_kph 50}
						}
					}
					{"delay"
						{time 10}
					}
					{## "actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ai_armor}
									}
									{tag
										{tag ai_car}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag spg}
									}
									{tag
										{tag heavy_tank}
									}
									{tag
										{tag medium_tank}
									}
									{tag
										{tag katy}
									}
									{tag
										{tag immobile}
									}
								}
							}
						}
						{control AI}
						{fire_mode open}
						{move_mode free}
						{weapon_prepare on}
						{ai_move
							{mode enable}
						}
						{movement
							{max_speed_kph 33}
						}
					}
					{## "actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ai_armor}
									}
									{tag
										{tag ai_car}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag spg}
									}
									{tag
										{tag tiger2h}
									}
									{tag
										{tag tiger2p}
									}
									{tag
										{tag kv2_40}
									}
									{tag
										{tag is2_43}
									}
									{tag
										{tag is2_44}
									}
								}
							}
						}
						{control AI}
						{fire_mode open}
						{move_mode free}
						{weapon_prepare on}
						{ai_move
							{mode enable}
						}
						{movement
							{max_speed_kph 33}
						}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "defensetier$"}
								{op "=="}
								{value 2}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.5}
									}
									{"delay"
										{time 3}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
										}
									}
									{"delay"
										{time 7}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 1}
									}
									{"delay"
										{time 4}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
										}
									}
									{"delay"
										{time 4}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "defensetier$"}
								{op "=="}
								{value 3}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.4}
									}
									{"delay"
										{time 3}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
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
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 1}
									}
									{"delay"
										{time 7}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
										}
									}
									{"delay"
										{time 15}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 10}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
											}
											{tag
												{tag ai_car}
											}
										}
										{include
											{state
												{state operatable}
											}
											{state
												{state moveable}
											}
										}
										{exclude
											{tag
												{tag spg}
											}
											{tag
												{tag heavy_tank}
											}
											{tag
												{tag katy}
											}
										}
									}
								}
								{drop "sensor senseless"}
								{fire_mode hold}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
									{max_speed_kph 50}
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
												{tag ai_armor}
											}
											{tag
												{tag ai_car}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag spg}
											}
											{tag
												{tag heavy_tank}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag immobile}
											}
										}
									}
								}
								{control AI}
								{fire_mode open}
								{move_mode free}
								{weapon_prepare on}
								{ai_move
									{mode enable}
								}
								{movement
									{max_speed_kph 33}
								}
							}
						}
					}
					{"trigger"
						{name "ai/non_light_vehicle_attack"}
					}
				}
			}
			{"ai/light_vehicle_attack"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag cmp_def}
								{state operatable}
							}
							{count
								{op ">"}
								{value 1}
							}
						}
						{"2.entities"
							{selector
								{tag player}
								{state operatable}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 10}
					}
					{"actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ai_armor}
									}
									{tag
										{tag ai_car}
									}
								}
								{include
									{state
										{state operatable}
									}
									{tag
										{tag light_tank}
									}
								}
								{exclude
									{tag
										{tag spg}
									}
									{tag
										{tag heavy_tank}
									}
									{tag
										{tag medium_tank}
									}
									{tag
										{tag katy}
									}
									{tag
										{tag immobile}
									}
								}
							}
						}
						{drop "sensor senseless"}
						{fire_mode hold}
						{move_mode free}
						{ai_move
							{mode enable}
						}
						{movement
							{speed assault}
							{max_speed_kph 50}
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
										{tag ai_armor}
									}
									{tag
										{tag ai_car}
									}
								}
								{include
									{state
										{state operatable}
									}
									{tag
										{tag light_tank}
									}
								}
								{exclude
									{tag
										{tag spg}
									}
									{tag
										{tag heavy_tank}
									}
									{tag
										{tag medium_tank}
									}
									{tag
										{tag katy}
									}
									{tag
										{tag immobile}
									}
								}
							}
						}
						{control AI}
						{fire_mode open}
						{move_mode free}
						{weapon_prepare on}
						{ai_move
							{mode enable}
						}
						{movement
							{max_speed_kph 33}
						}
					}
					{## "actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ai_armor}
									}
									{tag
										{tag ai_car}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag spg}
									}
									{tag
										{tag tiger2h}
									}
									{tag
										{tag tiger2p}
									}
									{tag
										{tag kv2_40}
									}
									{tag
										{tag is2_43}
									}
									{tag
										{tag is2_44}
									}
								}
							}
						}
						{control AI}
						{fire_mode open}
						{move_mode free}
						{weapon_prepare on}
						{ai_move
							{mode enable}
						}
						{movement
							{max_speed_kph 33}
						}
					}
					{## "switch"
						{"case"
							{condition
								{type cmp_i}
								{var "flag count$"}
								{op ">="}
								{value 3}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.5}
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
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
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
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 1}
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
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
										}
									}
									{"delay"
										{time 6}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "flag count$"}
								{op ">="}
								{value 4}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.4}
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
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
										}
									}
									{"delay"
										{time 7}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 1}
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
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
													{state
														{state moveable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{drop "sensor senseless"}
										{fire_mode hold}
										{move_mode free}
										{ai_move
											{mode enable}
										}
										{movement
											{speed assault}
											{max_speed_kph 50}
										}
									}
									{"delay"
										{time 8}
									}
									{"actor_state"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag ai_armor}
													}
													{tag
														{tag ai_car}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
												{exclude
													{tag
														{tag spg}
													}
													{tag
														{tag heavy_tank}
													}
													{tag
														{tag katy}
													}
													{tag
														{tag immobile}
													}
												}
											}
										}
										{control AI}
										{fire_mode open}
										{move_mode free}
										{weapon_prepare on}
										{ai_move
											{mode enable}
										}
										{movement
											{max_speed_kph 33}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 10}
							}
							{"actor_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
											}
											{tag
												{tag ai_car}
											}
										}
										{include
											{state
												{state operatable}
											}
											{state
												{state moveable}
											}
										}
										{exclude
											{tag
												{tag spg}
											}
											{tag
												{tag heavy_tank}
											}
											{tag
												{tag medium_tank}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag immobile}
											}
										}
									}
								}
								{drop "sensor senseless"}
								{fire_mode hold}
								{move_mode free}
								{ai_move
									{mode enable}
								}
								{movement
									{speed assault}
									{max_speed_kph 50}
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
												{tag ai_armor}
											}
											{tag
												{tag ai_car}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag spg}
											}
											{tag
												{tag heavy_tank}
											}
											{tag
												{tag medium_tank}
											}
											{tag
												{tag katy}
											}
											{tag
												{tag immobile}
											}
										}
									}
								}
								{control AI}
								{fire_mode open}
								{move_mode free}
								{weapon_prepare on}
								{ai_move
									{mode enable}
								}
								{movement
									{max_speed_kph 33}
								}
							}
						}
					}
					{"trigger"
						{name "ai/light_vehicle_attack"}
					}
				}
			}
			{"ai/rocket_artillery_logic"
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
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
											{tag rocket_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag bm31_12}
										}
										{tag
											{tag bm13_studebaker}
										}
										{tag
											{tag rocket_attacking_thread_1}
										}
										{tag
											{tag rocket_attacking_thread_2}
										}
										{tag
											{tag rocket_attacking_thread_3}
										}
										{tag
											{tag sturmtiger}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag rocket_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag bm31_12}
										}
										{tag
											{tag bm13_studebaker}
										}
										{tag
											{tag rocket_attacking_thread_1}
										}
										{tag
											{tag rocket_attacking_thread_2}
										}
										{tag
											{tag rocket_attacking_thread_3}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add rocket_attacking_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag rocket_attacking_thread_1}
								{type vehicle}
								{state operatable}
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
									}
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 1}
							}
							{"actor_state"
								{selector
									{tag rocket_attacking_thread_1}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_1}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{player
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag rocket_attacking_thread_1}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
							{## "action"
								{selector
									{tag rocket_attacking_thread_1}
									{type vehicle}
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
											{relation
												{relation ally}
												{player "1"}
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
												{state inactive}
											}
										}
									}
								}
							}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 0}
							}
							{"actor_state"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_1}
									{type vehicle}
									{state operatable}
								}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_1}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{relation
												{relation enemy}
												{player "1"}
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
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag rocket_attacking_thread_1}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
								{burst_mode long}
							}
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
										{tag
											{tag rocket_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag bm31_12}
										}
										{tag
											{tag bm13_studebaker}
										}
										{tag
											{tag rocket_attacking_thread_1}
										}
										{tag
											{tag rocket_attacking_thread_2}
										}
										{tag
											{tag rocket_attacking_thread_3}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add rocket_attacking_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag rocket_attacking_thread_2}
								{type vehicle}
								{state operatable}
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
									}
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 1}
							}
							{"actor_state"
								{selector
									{tag rocket_attacking_thread_2}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_2}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{player
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag rocket_attacking_thread_2}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
							{## "action"
								{selector
									{tag rocket_attacking_thread_2}
									{type vehicle}
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
											{relation
												{relation ally}
												{player "1"}
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
												{state inactive}
											}
										}
									}
								}
							}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 0}
							}
							{"actor_state"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_2}
									{type vehicle}
									{state operatable}
								}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_2}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{relation
												{relation enemy}
												{player "1"}
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
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag rocket_attacking_thread_2}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
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
										{tag
											{tag rocket_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag bm31_12}
										}
										{tag
											{tag bm13_studebaker}
										}
										{tag
											{tag rocket_attacking_thread_1}
										}
										{tag
											{tag rocket_attacking_thread_2}
										}
										{tag
											{tag rocket_attacking_thread_3}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add rocket_attacking_thread_3}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag rocket_attacking_thread_3}
								{type vehicle}
								{state operatable}
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
									}
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 1}
							}
							{"actor_state"
								{selector
									{tag rocket_attacking_thread_3}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_3}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{player
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag rocket_attacking_thread_3}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
							{## "action"
								{selector
									{tag rocket_attacking_thread_3}
									{type vehicle}
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
											{relation
												{relation ally}
												{player "1"}
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
												{state inactive}
											}
										}
									}
								}
							}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 0}
							}
							{"actor_state"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_3}
									{type vehicle}
									{state operatable}
								}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag rocket_attacking_thread_3}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{relation
												{relation enemy}
												{player "1"}
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
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag rocket_attacking_thread_3}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
						}
					}
					{"delay"
						{time 30}
					}
					{"entity_state"
						{selector
							{amount 1
							}
							{tag rocket_attacking_thread_1}
						}
						{tag_remove rocket_attacking_thread_1}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{amount 1
							}
							{tag rocket_attacking_thread_2}
						}
						{tag_remove rocket_attacking_thread_2}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{amount 1
							}
							{tag rocket_attacking_thread_3}
						}
						{tag_remove rocket_attacking_thread_3}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "ai/rocket_artillery_logic"}
					}
				}
			}
			{## "ai/super_heavy_artillery_logic"
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
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
											{tag super_heavy_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag super_heavy_artillery_1}
										}
										{tag
											{tag super_heavy_artillery_2}
										}
										{tag
											{tag super_heavy_artillery_3}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag super_heavy_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag super_heavy_artillery_1}
										}
										{tag
											{tag super_heavy_artillery_2}
										}
										{tag
											{tag super_heavy_artillery_3}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add super_heavy_artillery_1}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag super_heavy_artillery_1}
								{type vehicle}
								{state operatable}
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
									}
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 1}
							}
							{"actor_state"
								{selector
									{tag super_heavy_artillery_1}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_1}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{player
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag super_heavy_artillery_1}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
							{## "action"
								{selector
									{tag super_heavy_artillery_1}
									{type vehicle}
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
											{relation
												{relation ally}
												{player "1"}
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
												{state inactive}
											}
										}
									}
								}
							}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 0}
							}
							{"actor_state"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_1}
									{type vehicle}
									{state operatable}
								}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_1}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{relation
												{relation enemy}
												{player "1"}
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
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag super_heavy_artillery_1}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
								{burst_mode long}
							}
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
										{tag
											{tag super_heavy_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag super_heavy_artillery_1}
										}
										{tag
											{tag super_heavy_artillery_2}
										}
										{tag
											{tag super_heavy_artillery_3}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add super_heavy_artillery_2}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag super_heavy_artillery_2}
								{type vehicle}
								{state operatable}
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
									}
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 1}
							}
							{"actor_state"
								{selector
									{tag super_heavy_artillery_2}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_2}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{player
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag super_heavy_artillery_2}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
							{## "action"
								{selector
									{tag super_heavy_artillery_2}
									{type vehicle}
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
											{relation
												{relation ally}
												{player "1"}
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
												{state inactive}
											}
										}
									}
								}
							}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 0}
							}
							{"actor_state"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_2}
									{type vehicle}
									{state operatable}
								}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_2}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{relation
												{relation enemy}
												{player "1"}
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
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag super_heavy_artillery_2}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
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
										{tag
											{tag super_heavy_artillery}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag freeroam}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
										}
										{state
											{state inactive}
										}
										{state
											{state user_control}
										}
										{state
											{state linked}
										}
										{tag
											{tag super_heavy_artillery_1}
										}
										{tag
											{tag super_heavy_artillery_2}
										}
										{tag
											{tag super_heavy_artillery_3}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add super_heavy_artillery_3}
						}
						{"delay"
							{time 1}
						}
						{"action"
							{selector
								{tag super_heavy_artillery_3}
								{type vehicle}
								{state operatable}
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
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
									}
								}
							}
						}
						{"delay"
							{time 15}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 1}
							}
							{"actor_state"
								{selector
									{tag super_heavy_artillery_3}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_3}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{player
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag super_heavy_artillery_3}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
							{## "action"
								{selector
									{tag super_heavy_artillery_3}
									{type vehicle}
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
											{relation
												{relation ally}
												{player "1"}
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
												{state inactive}
											}
										}
									}
								}
							}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "player_defending$"}
								{op "=="}
								{value 0}
							}
							{"actor_state"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_3}
									{type vehicle}
									{state operatable}
								}
								{cannon fire}
							}
							{"delay"
								{time 1}
							}
							{"actor_fire"
								{selector
									{amount 1
									}
									{tag super_heavy_artillery_3}
									{type vehicle}
									{state operatable}
								}
								{drop orders}
								{attack enemies}
								{enemies
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
											{state
												{state inactive}
											}
											{state
												{state dead}
											}
										}
									}
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
										}
										{include
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
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{relation
												{relation enemy}
												{player "1"}
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
												{state inactive}
											}
										}
									}
									{sort
										{type entity}
										{entity
											{amount 1
											}
											{tag super_heavy_artillery_3}
											{type vehicle}
											{state operatable}
										}
									}
									{amount 1
									}
								}
								{interval 1}
								{time 25}
							}
						}
					}
					{"delay"
						{time 30}
					}
					{"entity_state"
						{selector
							{amount 1
							}
							{tag super_heavy_artillery_1}
						}
						{tag_remove super_heavy_artillery_1}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{amount 1
							}
							{tag super_heavy_artillery_2}
						}
						{tag_remove super_heavy_artillery_2}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{amount 1
							}
							{tag super_heavy_artillery_3}
						}
						{tag_remove super_heavy_artillery_3}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/super_heavy_artillery_logic"}
					}
				}
			}

; ========== Infantry Combat Scripts ==========				
			{## "ai/captureflag"
				{condition
					{terms
						{"1.cmp_i"
							{var "player_defending$"}
							{op "=="}
							{value 1}
						}
						{"2.event"
							{id "attack_start"}
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
											{tag fpc1}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state user_control}
										}
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
											{tag fpc1go}
										}
										{tag
											{tag fpc1nogo}
										}
										{tag
											{tag fpc2go}
										}
										{tag
											{tag fpc2nogo}
										}
										{tag
											{tag fpc3go}
										}
										{tag
											{tag fpc3nogo}
										}
										{tag
											{tag fpc4go}
										}
										{tag
											{tag fpc4nogo}
										}
										{tag
											{tag fpc5go}
										}
										{tag
											{tag fpc5nogo}
										}
										{tag
											{tag dismounted_freeroam}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add fpc1go}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{amount 1
									}
									{tag fpc1go}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{name_squad "1"}
								{copy_squad "2"}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{## "action"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag fpc1go}
										}
									}
									{exclude
										{tag
											{tag fpc1nogo}
										}
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
											{tag fpc1}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
									}
								}
							}
						}
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
											{tag fpc2}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state user_control}
										}
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
											{tag fpc1go}
										}
										{tag
											{tag fpc1nogo}
										}
										{tag
											{tag fpc2go}
										}
										{tag
											{tag fpc2nogo}
										}
										{tag
											{tag fpc3go}
										}
										{tag
											{tag fpc3nogo}
										}
										{tag
											{tag fpc4go}
										}
										{tag
											{tag fpc4nogo}
										}
										{tag
											{tag fpc5go}
										}
										{tag
											{tag fpc5nogo}
										}
										{tag
											{tag dismounted_freeroam}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add fpc2go}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{amount 1
									}
									{tag fpc2go}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{name_squad "1"}
								{copy_squad "2"}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{## "action"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag fpc2go}
										}
									}
									{exclude
										{tag
											{tag fpc2nogo}
										}
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
											{tag fpc2}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
									}
								}
							}
						}
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
											{tag fpc3}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state user_control}
										}
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
											{tag fpc1go}
										}
										{tag
											{tag fpc1nogo}
										}
										{tag
											{tag fpc2go}
										}
										{tag
											{tag fpc2nogo}
										}
										{tag
											{tag fpc3go}
										}
										{tag
											{tag fpc3nogo}
										}
										{tag
											{tag fpc4go}
										}
										{tag
											{tag fpc4nogo}
										}
										{tag
											{tag fpc5go}
										}
										{tag
											{tag fpc5nogo}
										}
										{tag
											{tag dismounted_freeroam}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add fpc3go}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{amount 1
									}
									{tag fpc3go}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{name_squad "1"}
								{copy_squad "2"}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{## "action"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag fpc3go}
										}
									}
									{exclude
										{tag
											{tag fpc3nogo}
										}
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
											{tag fpc3}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
									}
								}
							}
						}
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
											{tag fpc4}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state user_control}
										}
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
											{tag fpc1go}
										}
										{tag
											{tag fpc1nogo}
										}
										{tag
											{tag fpc2go}
										}
										{tag
											{tag fpc2nogo}
										}
										{tag
											{tag fpc3go}
										}
										{tag
											{tag fpc3nogo}
										}
										{tag
											{tag fpc4go}
										}
										{tag
											{tag fpc4nogo}
										}
										{tag
											{tag fpc5go}
										}
										{tag
											{tag fpc5nogo}
										}
										{tag
											{tag dismounted_freeroam}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add fpc4go}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{amount 1
									}
									{tag fpc4go}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{name_squad "1"}
								{copy_squad "2"}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{## "action"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag fpc4go}
										}
									}
									{exclude
										{tag
											{tag fpc3nogo}
										}
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
											{tag fpc4}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
									}
								}
							}
						}
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
											{tag fpc5}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{state
											{state user_control}
										}
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
											{tag fpc1go}
										}
										{tag
											{tag fpc1nogo}
										}
										{tag
											{tag fpc2go}
										}
										{tag
											{tag fpc2nogo}
										}
										{tag
											{tag fpc3go}
										}
										{tag
											{tag fpc3nogo}
										}
										{tag
											{tag fpc4go}
										}
										{tag
											{tag fpc4nogo}
										}
										{tag
											{tag fpc5go}
										}
										{tag
											{tag fpc5nogo}
										}
										{tag
											{tag dismounted_freeroam}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add fpc5go}
						}
						{"delay"
							{time 1}
						}
						{"waypoint"
							{who
								{type actor}
								{actors
									{amount 1
									}
									{tag fpc5go}
									{type human}
									{state "not dead"}
								}
							}
							{action
								{type start}
								{waypoint "1"}
								{make_squad}
								{name_squad "1"}
								{copy_squad "2"}
								{approach force}
							}
						}
						{"delay"
							{time 1}
						}
						{## "action"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag fpc5go}
										}
									}
									{exclude
										{tag
											{tag fpc3nogo}
										}
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
											{tag fpc5}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 45}
					}
					{"trigger"
						{name "ai/captureflag"}
					}
				}
			}				
			{## "ai/recon_flag"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 180}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag fpc1}
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
											{tag "1_a_1-3"}
										}
										{tag
											{tag "1_a_2-3"}
										}
										{tag
											{tag "1_a_3"}
										}
										{tag
											{tag "1_b_1-3"}
										}
										{tag
											{tag "1_b_2-3"}
										}
										{tag
											{tag "1_b_3"}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
								{amount 4
								}
							}
							{tag_add will_recon_point}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_recon"
							{selector
								{tag will_recon_point}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{waypoint "1"}
							{radius 1200}
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
											{tag will_recon_point}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
							}
							{tag_add guarding_point}
							{tag_remove will_recon_point}
						}
					}
					{"delay"
						{time 3}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag fpc2}
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
											{tag "2_a_1-3"}
										}
										{tag
											{tag "2_a_2-3"}
										}
										{tag
											{tag "2_a_3"}
										}
										{tag
											{tag "2_b_1-3"}
										}
										{tag
											{tag "2_b_2-3"}
										}
										{tag
											{tag "2_b_3"}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
								{amount 4
								}
							}
							{tag_add will_recon_point}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_recon"
							{selector
								{tag will_recon_point}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{waypoint "2"}
							{radius 1200}
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
											{tag will_recon_point}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
							}
							{tag_add guarding_point}
							{tag_remove will_recon_point}
						}
					}
					{"delay"
						{time 3}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag fpc3}
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
											{tag "3_a_1-3"}
										}
										{tag
											{tag "3_a_2-3"}
										}
										{tag
											{tag "3_a_3"}
										}
										{tag
											{tag "3_b_1-3"}
										}
										{tag
											{tag "3_b_2-3"}
										}
										{tag
											{tag "3_b_3"}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
								{amount 4
								}
							}
							{tag_add will_recon_point}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_recon"
							{selector
								{tag will_recon_point}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{waypoint "3"}
							{radius 1200}
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
											{tag will_recon_point}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
							}
							{tag_add guarding_point}
							{tag_remove will_recon_point}
						}
					}
					{"delay"
						{time 3}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag fpc4}
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
											{tag "4_a_1-3"}
										}
										{tag
											{tag "4_a_2-3"}
										}
										{tag
											{tag "4_a_3"}
										}
										{tag
											{tag "4_b_1-3"}
										}
										{tag
											{tag "4_b_2-3"}
										}
										{tag
											{tag "4_b_3"}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
								{amount 4
								}
							}
							{tag_add will_recon_point}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_recon"
							{selector
								{tag will_recon_point}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{waypoint "4"}
							{radius 1200}
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
											{tag will_recon_point}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
							}
							{tag_add guarding_point}
							{tag_remove will_recon_point}
						}
					}
					{"delay"
						{time 3}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
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
							}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag "5_a_1-3"}
										}
										{tag
											{tag "5_a_2-3"}
										}
										{tag
											{tag "5_a_3"}
										}
										{tag
											{tag "5_b_1-3"}
										}
										{tag
											{tag "5_b_2-3"}
										}
										{tag
											{tag "5_b_3"}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
								{amount 4
								}
							}
							{tag_add will_recon_point}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_recon"
							{selector
								{tag will_recon_point}
								{type human}
								{state "not dead"}
							}
							{drop orders}
							{waypoint "5"}
							{radius 1200}
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
											{tag will_recon_point}
										}
									}
									{include
										{tag
											{tag cmp_def}
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
										{state
											{state user_control}
										}
										{tag
											{tag guarding_point}
										}
									}
								}
							}
							{tag_add guarding_point}
							{tag_remove will_recon_point}
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
										{tag guarding_point}
									}
								}
								{include
									{tag
										{tag cmp_def}
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
									{state
										{state user_control}
									}
								}
							}
						}
						{control AI}
						{fire_mode open}
						{move_mode free}
						{move_radius 1000}
						{weapon_prepare on}
						{ai_move
							{mode enable}
						}
						{movement
							{speed normal}
							{kind fast}
						}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{tag will_recon_point}
							{type human}
							{state "not dead"}
						}
						{tag_remove will_recon_point}
					}
				}
			}
			{"ai/randomcoverchange"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag cmp_def}
								{type human}
								{state operatable}
							}
						}
					}
				}
				{actions
					{"thread"
						{"delay"
							{time 0.1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{zone
											{zone "fpc1"}
										}
										{state
											{state operatable}
										}
									}
								}
								{amount 5
								}
							}
							{waypoint "7"}
						}
						{"delay"
							{time 0.1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{zone
											{zone "fpc2"}
										}
										{state
											{state operatable}
										}
									}
								}
								{amount 5
								}
							}
							{waypoint "8"}
						}
						{"delay"
							{time 0.1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{zone
											{zone "fpc3"}
										}
										{state
											{state operatable}
										}
									}
								}
								{amount 5
								}
							}
							{waypoint "9"}
						}
						{"delay"
							{time 0.1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{zone
											{zone "fpc4"}
										}
										{state
											{state operatable}
										}
									}
								}
								{amount 5
								}
							}
							{waypoint "10"}
						}
						{"delay"
							{time 0.1}
						}
						{"actor_to_waypoint"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{zone
											{zone "fpc5"}
										}
										{state
											{state operatable}
										}
									}
								}
								{amount 5
								}
							}
							{waypoint "11"}
						}
					}
					{"delay"
						{time 15}
					}
					{"actor_to_cover"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag cmp_def}
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
										{state linked}
									}
								}
							}
						}
						{mode random}
					}
					{"delay"
						{time 25}
					}
					{"trigger"
						{name "ai/randomcoverchange"}
					}
				}
			}
			{"ai/recrew/recrew_weapon_defend"
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
										{tag
											{tag ai_inf}
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
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_inf_recrewing}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop cannon}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
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
										{prop
											{prop mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{group
									{select
										{tag
											{tag hmg}
										}
										{tag
											{tag mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{prop
											{prop human}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
							}
							{distance 100}
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
										{relation
											{relation enemy}
											{player "1"}
										}
										{state
											{state user_control}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 3}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop cannon}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
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
										{prop
											{prop mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{group
									{select
										{tag
											{tag hmg}
										}
										{tag
											{tag mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{prop
											{prop human}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{amount 1
								}
								{sort
									{type entity}
									{entity
										{source advanced}
										{group
											{select
												{tag
													{tag cmp_def}
												}
												{tag
													{tag ai_inf}
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
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state inactive}
												}
												{tag
													{tag ai_inf_recrewing}
												}
												{state
													{state user_control}
												}
											}
										}
									}
								}
							}
							{tag_add ai_recrew_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{effect clear_veh_tags}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{effect ai_will_recrew_emplacement}
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
											{tag ai_inf}
										}
										{tag
											{tag cmp_def}
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
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_recrewing_thread_1}
										}
										{tag
											{tag ai_recrewing_thread_2}
										}
										{tag
											{tag ai_inf_recrewing}
										}
										{state
											{state user_control}
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
													{tag ai_recrew_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{state
													{state inhabited}
												}
												{tag
													{tag deactivated}
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
								}
								{amount 2
								}
							}
							{tag_add ai_recrewing_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"board"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_1}
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
											{state linked}
										}
										{tag
											{tag player}
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
										{amount 1
										}
										{tag ai_recrew_thread_1}
										{state "not inhabited"}
									}
								}
							}
							{vehicle
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag ai_recrewing_thread_1}
								{type human}
								{state "not dead"}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 20}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add ai_veh}
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
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add freeroam}
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
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{tag_remove ai_recrew_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_1}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{effect ai_move_to_recrew}
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
											{tag ai_recrewing_thread_1}
										}
									}
								}
							}
							{tag_remove ai_recrewing_thread_1}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop cannon}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_recrew_thread_1}
										}
										{tag
											{tag ai_emplacement_recrew}
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
										{prop
											{prop mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_recrew_thread_1}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{group
									{select
										{tag
											{tag hmg}
										}
										{tag
											{tag mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{prop
											{prop human}
										}
										{tag
											{tag ai_recrew_thread_1}
										}
										{tag
											{tag ai_emplacement_recrew}
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
													{tag cmp_def}
												}
												{tag
													{tag ai_inf}
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
												{tag
													{tag player}
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
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{tag_add ai_recrew_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{effect clear_veh_tags}
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
											{tag ai_inf}
										}
										{tag
											{tag cmp_def}
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
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_recrewing_thread_1}
										}
										{tag
											{tag ai_recrewing_thread_2}
										}
										{state
											{state user_control}
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
													{tag ai_recrew_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{state
													{state inhabited}
												}
												{tag
													{tag deactivated}
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
								}
								{amount 2
								}
							}
							{tag_add ai_recrewing_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"board"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_2}
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
											{state linked}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag ai_recrew_thread_2}
										{state "not inhabited"}
									}
								}
							}
							{vehicle
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag ai_recrewing_thread_2}
								{type human}
								{state "not dead"}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 20}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add ai_veh}
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
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add freeroam}
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
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{tag_remove ai_recrew_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_2}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{effect ai_move_to_recrew}
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
											{tag ai_recrewing_thread_2}
										}
									}
								}
							}
							{tag_remove ai_recrewing_thread_2}
						}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/recrew/recrew_weapon_defend"}
					}
				}
			}
			{"ai/recrew/recrew_weapon_attack"
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
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
										{state
											{state user_control}
										}
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_inf_recrewing}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop cannon}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
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
										{prop
											{prop mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{group
									{select
										{tag
											{tag hmg}
										}
										{tag
											{tag mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{prop
											{prop human}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
							}
							{distance 100}
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
										{relation
											{relation ally}
											{player "1"}
										}
										{state
											{state user_control}
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
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop cannon}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
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
										{prop
											{prop mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{group
									{select
										{tag
											{tag hmg}
										}
										{tag
											{tag mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{prop
											{prop human}
										}
										{tag
											{tag ai_emplacement_recrew}
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
													{tag ai_inf}
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
												{tag
													{tag player}
												}
												{state
													{state dead}
												}
												{state
													{state inactive}
												}
												{tag
													{tag ai_inf_recrewing}
												}
												{state
													{state user_control}
												}
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{tag_add ai_recrew_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{effect clear_veh_tags}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{effect ai_will_recrew_emplacement}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_recrewing_thread_1}
										}
										{tag
											{tag ai_recrewing_thread_2}
										}
										{tag
											{tag ai_inf_recrewing}
										}
										{state
											{state user_control}
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
													{tag ai_recrew_thread_1}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{state
													{state inhabited}
												}
												{tag
													{tag deactivated}
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
								}
								{amount 3
								}
							}
							{tag_add ai_recrewing_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"board"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_1}
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
											{state linked}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag ai_recrew_thread_1}
										{state "not inhabited"}
									}
								}
							}
							{vehicle
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag ai_recrewing_thread_1}
								{type human}
								{state "not dead"}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 25}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add ai_veh}
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
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add freeroam}
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
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_1}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{tag_remove ai_recrew_thread_1}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_1}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{effect ai_move_to_recrew}
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
											{tag ai_recrewing_thread_1}
										}
									}
								}
							}
							{tag_remove ai_recrewing_thread_1}
						}
					}
					{"delay"
						{time 3}
					}
					{"thread"
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop cannon}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_recrew_thread_1}
										}
										{tag
											{tag ai_emplacement_recrew}
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
										{prop
											{prop mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_recrew_thread_1}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{group
									{select
										{tag
											{tag hmg}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{prop
											{prop human}
										}
										{tag
											{tag ai_recrew_thread_1}
										}
										{tag
											{tag ai_emplacement_recrew}
										}
									}
								}
								{group
									{select
										{tag
											{tag mortar}
										}
									}
									{exclude
										{tag
											{tag deactivated}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
										{state
											{state inhabited}
										}
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{prop
											{prop human}
										}
										{tag
											{tag ai_recrew_thread_1}
										}
										{tag
											{tag ai_emplacement_recrew}
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
													{tag ai_inf}
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
												{tag
													{tag player}
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
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{tag_add ai_recrew_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{effect clear_veh_tags}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{effect ai_will_recrew_emplacement}
						}
						{"delay"
							{time 1}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
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
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_recrewing_thread_1}
										}
										{tag
											{tag ai_recrewing_thread_2}
										}
										{state
											{state user_control}
										}
										{tag
											{tag ai_inf_recrewing}
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
													{tag ai_recrew_thread_2}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
											{exclude
												{state
													{state inhabited}
												}
												{tag
													{tag deactivated}
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
								}
								{amount 3
								}
							}
							{tag_add ai_recrewing_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"board"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_2}
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
											{state linked}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag ai_recrew_thread_2}
										{state "not inhabited"}
									}
								}
							}
							{vehicle
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag ai_recrewing_thread_2}
								{type human}
								{state "not dead"}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 20}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add ai_veh}
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
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
										{state
											{state linked}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add freeroam}
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
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop cannon}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{prop
											{prop mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag mortar}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_recrew_thread_2}
										}
									}
									{include
										{tag
											{tag hmg}
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
											{state linked}
										}
										{state
											{state user_control}
										}
										{tag
											{tag logic_post}
										}
										{tag
											{tag drop_zone}
										}
									}
								}
							}
							{tag_remove ai_recrew_thread_2}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_recrewing_thread_2}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
										{tag
											{tag player}
										}
									}
								}
							}
							{effect ai_move_to_recrew}
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
											{tag ai_recrewing_thread_2}
										}
									}
								}
							}
							{tag_remove ai_recrewing_thread_2}
						}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/recrew/recrew_weapon_attack"}
					}
				}
			}
			{"ai/recrew/tank_crew_recrew_vehicle"
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
									}
									{include
										{prop
											{prop tank}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag deactivated}
										}
										{tag
											{tag ai_tank_recrew}
										}
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
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
										{prop
											{prop car}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag deactivated}
										}
										{tag
											{tag ai_tank_recrew}
										}
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
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
											{tag ai_tank_crew}
										}
									}
									{include
										{tag
											{tag idle_ai_tank_crew}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_tank_crew_recrewing}
										}
										{tag
											{tag repairing}
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
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag idle_ai_tank_crew}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag ai_tank_crew}
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
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{prop
											{prop tank}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag deactivated}
										}
										{tag
											{tag ai_tank_recrew}
										}
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
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
										{prop
											{prop car}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag deactivated}
										}
										{tag
											{tag ai_tank_recrew}
										}
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
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
													{tag ai_tank_crew}
												}
											}
											{include
												{tag
													{tag idle_ai_tank_crew}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{state
													{state dead}
												}
												{tag
													{tag ai_tank_crew_recrewing}
												}
												{tag
													{tag repairing}
												}
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{tag_add veh_selected_for_recrew}
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
											{tag ai_tank_crew}
										}
									}
									{include
										{tag
											{tag idle_ai_tank_crew}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_tank_crew_recrewing}
										}
										{tag
											{tag repairing}
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
													{tag veh_selected_for_recrew}
												}
											}
											{exclude
												{state
													{state inhabited}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag deactivated}
												}
												{tag
													{tag gun_brake}
												}
												{tag
													{tag immobile}
												}
												{tag
													{tag engine_brake}
												}
												{tag
													{tag turret_brake}
												}
												{tag
													{tag body_break}
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
							{tag_add ai_tank_crew_selected}
						}
						{"delay"
							{time 1}
						}
						{"board"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_tank_crew_selected}
										}
									}
									{include
										{tag
											{tag ai_tank_crew}
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
											{state linked}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag veh_selected_for_recrew}
										{state "not inhabited"}
									}
								}
							}
							{vehicle
								{source advanced}
								{group
									{select
										{tag
											{tag veh_selected_for_recrew}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag ai_tank_crew_selected}
								{type human}
								{state "not dead"}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag veh_selected_for_recrew}
										}
									}
									{exclude
										{state
											{state inhabited}
										}
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag deactivated}
										}
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
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
													{tag ai_tank_crew_selected}
												}
											}
											{include
												{tag
													{tag ai_tank_crew}
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
													{state linked}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{effect ai_will_recrew}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_tank_crew_selected}
										}
									}
									{include
										{tag
											{tag ai_tank_crew}
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
											{state linked}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{effect ai_move_to_recrew}
						}
						{"delay"
							{time 7}
						}
						{"if"
							{condition
								{type entities}
								{selector
									{source advanced}
									{group
										{select
											{zone
												{zone "gamezone"}
											}
										}
										{include
											{prop
												{prop tank}
											}
										}
										{exclude
											{state
												{state inhabited}
											}
											{state
												{state linked}
											}
											{state
												{state inactive}
											}
											{tag
												{tag deactivated}
											}
											{tag
												{tag ai_tank_recrew}
											}
											{tag
												{tag gun_brake}
											}
											{tag
												{tag immobile}
											}
											{tag
												{tag engine_brake}
											}
											{tag
												{tag turret_brake}
											}
											{tag
												{tag body_break}
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
											{prop
												{prop car}
											}
										}
										{exclude
											{state
												{state inhabited}
											}
											{state
												{state linked}
											}
											{state
												{state inactive}
											}
											{tag
												{tag deactivated}
											}
											{tag
												{tag ai_tank_recrew}
											}
											{tag
												{tag gun_brake}
											}
											{tag
												{tag immobile}
											}
											{tag
												{tag engine_brake}
											}
											{tag
												{tag turret_brake}
											}
											{tag
												{tag body_break}
											}
										}
									}
								}
								{count
									{op "=="}
									{value 0}
								}
							}
							{"delay"
								{time 60}
							}
							{"trigger"
								{name "ai/recrew/tank_crew_recrew_vehicle"}
							}
						}
					}
					{"delay"
						{time 60}
					}
					{"trigger"
						{name "ai/recrew/tank_crew_recrew_vehicle"}
					}
				}
			}
			{"ai/recrew/artilleryman_recrew_gun"
				{condition
					{expression "2 & 3"}
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag artillery}
										}
										{tag
											{tag aaflak}
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
									}
									{include
										{zone
											{zone "gamezone"}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{prop
											{prop tank}
										}
										{prop
											{prop car}
										}
										{destroyed_components
											{masks
												"body"
											}
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
											{tag ai_emplacement_recrew}
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
											{tag ai_artilleryman}
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
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_crew_recrewing}
										}
										{tag
											{tag repairing}
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
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_artilleryman}
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
										{state
											{state user_control}
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
											{tag artillery}
										}
										{tag
											{tag rocket_artillery}
										}
										
									}
									{include
										{zone
											{zone "gamezone"}
										}
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{prop
											{prop tank}
										}
										{prop
											{prop car}
										}
										{destroyed_components
											{masks
												"body"
											}
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
											{tag ai_emplacement_recrew}
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
													{tag ai_artilleryman}
												}
											}
											{include
												{tag
													{tag idle_ai_artilleryman}
												}
												{prop
													{prop human}
												}
											}
											{exclude
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{state
													{state dead}
												}
												{tag
													{tag ai_crew_recrewing}
												}
												{tag
													{tag repairing}
												}
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{tag_add emplacement_selected_for_recrew}
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
											{tag ai_artilleryman}
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
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag ai_crew_recrewing}
										}
										{tag
											{tag repairing}
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
													{tag emplacement_selected_for_recrew}
												}
											}
											{exclude
												{state
													{state inhabited}
												}
												{state
													{state linked}
												}
												{state
													{state inactive}
												}
												{tag
													{tag deactivated}
												}
												{destroyed_components
													{masks
														"body"
													}
												}
											}
										}
										{amount 1
										}
									}
								}
								{amount 2
								}
							}
							{tag_add ai_emplacement_crew_selected}
						}
						{"delay"
							{time 1}
						}
						{"board"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_emplacement_crew_selected}
										}
									}
									{include
										{tag
											{tag ai_artilleryman}
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
											{state linked}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag emplacement_selected_for_recrew}
									}
								}
							}
							{vehicle
								{source advanced}
								{group
									{select
										{tag
											{tag emplacement_selected_for_recrew}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag ai_emplacement_crew_selected}
								{type human}
								{state "not dead"}
							}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag emplacement_selected_for_recrew}
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
								{sort
									{type entity}
									{entity
										{source advanced}
										{group
											{select
												{tag
													{tag ai_emplacement_crew_selected}
												}
											}
											{include
												{tag
													{tag ai_artilleryman}
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
													{state linked}
												}
												{tag
													{tag player}
												}
												{state
													{state user_control}
												}
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{effect ai_will_recrew_emplacement}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_emplacement_crew_selected}
										}
									}
									{include
										{tag
											{tag ai_artilleryman}
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
											{state linked}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{effect ai_move_to_recrew}
						}
						{"delay"
							{time 7}
						}
						{"if"
							{condition
								{type entities}
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag artillery}
											}
											{tag
												{tag aaflak}
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
										}
										{include
											{zone
												{zone "gamezone"}
											}
											{state
												{state user_control}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{prop
												{prop tank}
											}
											{prop
												{prop car}
											}
											{destroyed_components
												{masks
													"body"
												}
											}
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{state
												{state inhabited}
											}
										}
									}
									{group
										{select
											{tag
												{tag artillery}
											}
											{tag
												{tag aaflak}
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
										}
										{include
											{zone
												{zone "gamezone"}
											}
											{prop
												{prop vehicle}
											}
										}
										{exclude
											{prop
												{prop tank}
											}
											{prop
												{prop car}
											}
											{destroyed_components
												{masks
													"body"
												}
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
								{count
									{op "=="}
									{value 0}
								}
							}
							{"delay"
								{time 60}
							}
							{"trigger"
								{name "ai/recrew/tank_crew_recrew_vehicle"}
							}
						}
					}
					{"delay"
						{time 60}
					}
					{"trigger"
						{name "ai/recrew/tank_crew_recrew_vehicle"}
					}
				}
			}
			{"ai/repair/ai_engineer_repair"
				{condition
					{terms
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
										}
									}
									{include
										{prop
											{prop tank}
										}
										{zone
											{zone "gamezone"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_repairing}
										}
										{tag
											{tag repair_target}
										}
										{destroyed_components
											{masks
												"body"
											}
										}
										{state
											{state inhabited}
										}
									}
								}
								{group
									{select
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
										}
									}
									{include
										{prop
											{prop car}
										}
										{zone
											{zone "gamezone"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_repairing}
										}
										{tag
											{tag repair_target}
										}
										{destroyed_components
											{masks
												"body"
											}
										}
										{state
											{state inhabited}
										}
									}
								}
							}
						}
						{"4.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_engineer}
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
										{tag
											{tag repairing}
										}
										{state
											{state user_control}
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
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_engineer}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag repairing}
										}
										{state
											{state dead}
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
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
										}
									}
									{include
										{prop
											{prop tank}
										}
										{zone
											{zone "gamezone"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_repairing}
										}
										{tag
											{tag repair_target}
										}
										{destroyed_components
											{masks
												"body"
											}
										}
										{state
											{state inhabited}
										}
									}
								}
								{group
									{select
										{tag
											{tag gun_brake}
										}
										{tag
											{tag immobile}
										}
										{tag
											{tag engine_brake}
										}
										{tag
											{tag turret_brake}
										}
										{tag
											{tag body_break}
										}
									}
									{include
										{prop
											{prop car}
										}
										{zone
											{zone "gamezone"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state linked}
										}
										{tag
											{tag ai_repairing}
										}
										{tag
											{tag repair_target}
										}
										{destroyed_components
											{masks
												"body"
											}
										}
										{state
											{state inhabited}
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
													{tag ai_engineer}
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
												{state
													{state user_control}
												}
												{tag
													{tag player}
												}
												{tag
													{tag repairing}
												}
											}
										}
										{amount 1
										}
									}
								}
								{amount 1
								}
							}
							{tag_add repair_target}
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
											{tag ai_engineer}
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
										{state
											{state user_control}
										}
										{tag
											{tag repairing}
										}
									}
								}
								{amount 1
								}
								{sort
									{type entity}
									{entity
										{source advanced}
										{group
											{select
												{tag
													{tag repair_target}
												}
											}
											{exclude
												{state
													{state inactive}
												}
												{state
													{state linked}
												}
												{destroyed_components
													{masks
														"body"
													}
												}
											}
										}
									}
								}
							}
							{drop orders}
							{action repair}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag repair_target}
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
						{"delay"
							{time 1}
						}
						{"actor_state"
							{selector
								{tag ai_engineer}
								{type human}
								{state "not dead"}
							}
							{fire_mode return}
							{movement
								{speed assault}
								{kind fast}
								{type normal}
							}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{tag repair_target}
								{state "not inhabited"}
							}
							{effect ai_will_repair}
						}
						{"delay"
							{time 10}
						}
						{"if"
							{condition
								{type entities}
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag gun_brake}
											}
											{tag
												{tag immobile}
											}
											{tag
												{tag engine_brake}
											}
											{tag
												{tag turret_brake}
											}
											{tag
												{tag body_break}
											}
										}
										{include
											{prop
												{prop tank}
											}
											{zone
												{zone "gamezone"}
											}
										}
										{exclude
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{tag
												{tag ai_repairing}
											}
											{tag
												{tag repair_target}
											}
											{destroyed_components
												{masks
													"body"
												}
											}
											{state
												{state inhabited}
											}
										}
									}
									{group
										{select
											{tag
												{tag gun_brake}
											}
											{tag
												{tag immobile}
											}
											{tag
												{tag engine_brake}
											}
											{tag
												{tag turret_brake}
											}
											{tag
												{tag body_break}
											}
										}
										{include
											{prop
												{prop car}
											}
											{zone
												{zone "gamezone"}
											}
										}
										{exclude
											{state
												{state inactive}
											}
											{state
												{state linked}
											}
											{tag
												{tag ai_repairing}
											}
											{tag
												{tag repair_target}
											}
											{destroyed_components
												{masks
													"body"
												}
											}
											{state
												{state inhabited}
											}
										}
									}
								}
								{count
									{op "=="}
									{value 0}
								}
							}
							{"delay"
								{time 30}
							}
							{"trigger"
								{name "ai/repair/ai_engineer_repair"}
							}
						}
					}
					{"delay"
						{time 30}
					}
					{"trigger"
						{name "ai/repair/ai_engineer_repair"}
					}
				}
			}
