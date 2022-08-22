; ========== Initialization Scripts ==========
			{"conquest_enhanced/initialize/randomize_emplacementplayer"
				{condition
					{terms
						{"2.entities"
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
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_mg}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
									}
								}
							}
							{count
								{op ">"}
								{value 18}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 35.1}
					}
					{"delete"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag cmp_mg}
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
										{state "dead user_control"}
									}
									{tag
										{tag hidden}
									}
								}
							}
							{amount 3
							}
						}
					}
					{"trigger"
						{name "conquest_enhanced/initialize/randomize_emplacementplayer"}
					}
				}
			}
			{"conquest_enhanced/initialize/randomize_emplacement_player_infantry"
				{condition
					{expression "1 & 2 & !3"}
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
							{count
								{op ">"}
								{value 45}
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
						{"3.cmp_i"
							{var "defensetier$"}
							{op "=="}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 2.1}
					}
					{"delete"
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
										{state user_control}
									}
									{state
										{state linked}
									}
								}
							}
							{amount 5
							}
						}
					}
					{"trigger"
						{name "conquest_enhanced/initialize/randomize_emplacement_player_infantry"}
					}
				}
			}
			{"conquest_enhanced/initialize/randomize_emplacement_ai_infantry"
				{condition
					{expression "!1 & 2"}
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
							{count
								{op "<<"}
								{value 130}
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
					}
				}
				{actions
					{"delay"
						{time 2.1}
					}
					{"delete"
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
										{state user_control}
									}
									{state
										{state linked}
									}
								}
							}
							{amount 22
							}
						}
					}
					{"delay"
						{time 1.1}
					}
					{"trigger"
						{name "conquest_enhanced/initialize/randomize_emplacement_ai_infantry"}
					}
				}
			}
			{"conquest_enhanced/initialize/clone_tier"
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
						{"3.event"
							{id "init"}
						}
					}
				}
				{actions
					{"delay"
						{time 15}
					}
					{"rt_function"
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
										{prop human}
									}
									{tag
										{tag cmp_def}
									}
								}
								{exclude
									{state
										{state linked}
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
						{call "Clone"
						}
					}
					{"delay"
						{time 15}
					}
					{"if"
						{condition
							{type cmp_i}
							{var "defensetier$"}
							{op "<<"}
							{value 3}
						}
						{"loop" 1
							{"rt_function"
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
												{prop human}
											}
											{tag
												{tag cmp_def}
											}
										}
										{exclude
											{state
												{state linked}
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
								{call "Clone"
								}
							}
							{"delay"
								{time 10}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"actor_to_cover"
						{selector
							{tag cmp_def}
							{type human}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/tierguns"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag cmp_def}
							}
						}
						{"2.cmp_i"
							{var "defensetier$"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 11}
					}
					{"if"
						{condition
							{type cmp_i}
							{var "defensetier$"}
							{op "<<"}
							{value 3}
						}
						{"delete"
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
											{tag stage3}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_armor}
										}
										{prop
											{prop tank}
										}
										{tag
											{tag ai_veh}
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
								{type rand}
								{value 0.6}
							}
							{"delete"
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
												{tag fortifications}
											}
										}
										{exclude
											{state
												{state user_control}
											}
											{prop
												{prop vehicle}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 11.1}
					}
					{"if"
						{condition
							{type cmp_i}
							{var "defensetier$"}
							{op "<<"}
							{value 2}
						}
						{"delete"
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
											{tag stage2}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{tag
											{tag player_veh}
										}
										{tag
											{tag player_armor}
										}
										{prop
											{prop tank}
										}
										{tag
											{tag ai_veh}
										}
									}
								}
							}
						}
						{"delay"
							{time 1}
						}
						{"delay"
							{time 0.1}
						}
						{"delete"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{with_item
											{type existance}
											{item "bazooka_m1a1" "weapon"}
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
											{tag player}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{with_item
											{type existance}
											{item "panzershreck_54" "weapon"}
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
											{tag player}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{with_item
											{type amount}
											{item "panzerfaust_60" "weapon"}
											{min 1}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state linked}
										}
									}
								}
								{group
									{select
										{tag
											{tag cmp_def}
										}
									}
									{include
										{with_item
											{type amount}
											{item "faustpatrone_30" "weapon"}
											{min 1}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{state
											{state linked}
										}
									}
								}
							}
						}
						{"delete"
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
											{tag fortifications}
										}
									}
									{exclude
										{state
											{state user_control}
										}
										{prop
											{prop vehicle}
										}
									}
								}
							}
						}
					}
				}
			}			
			{"conquest_enhanced/initialize/deletecrew"
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
									}
									{include
										{relation
											{relation ally}
											{player "1"}
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
						{"2.cmp_i"
							{var "defensetier$"}
							{op "<<"}
							{value 3}
						}
					}
				}
				{actions
					{"delay"
						{time 10}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "defensetier$"}
								{op "<<"}
								{value 3}
							}
							{"delete"
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
												{prop human}
											}
											{state
												{state "linked"}
											}
											{player
												{player "1"}
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
								}
							}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/game_start_tag_flag"
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
									}
								}
							}
						}
						{"2.cmp_i"
							{var "user_nation$"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"entity_state"
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
						{tag_add game_on}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag fpc1}
											}
										}
										{include
											{state
												{state inactive}
											}
										}
									}
									{group
										{select
											{tag
												{tag fpc2}
											}
										}
										{include
											{state
												{state inactive}
											}
										}
									}
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
								{tag_add rusflag}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag fpc1}
											}
										}
										{include
											{state
												{state inactive}
											}
										}
									}
									{group
										{select
											{tag
												{tag fpc2}
											}
										}
										{include
											{state
												{state inactive}
											}
										}
									}
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
								{tag_add gerflag}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 3}
							}
							{"entity_state"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag fpc1}
											}
										}
										{include
											{state
												{state inactive}
											}
										}
									}
									{group
										{select
											{tag
												{tag fpc2}
											}
										}
										{include
											{state
												{state inactive}
											}
										}
									}
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
								{tag_add gerflag}
							}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/randomize_emplacement"
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
									{exclude
										{tag
											{tag hidden}
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
					}
				}
				{actions
					{"delay"
						{time 45.2}
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
												{tag cmp_mg}
											}
										}
										{exclude
											{tag
												{tag player_veh}
											}
											{tag
												{tag hidden}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{count
									{op "<<"}
									{value 35}
								}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 5
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 4
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 3
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 10
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"default"
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 2
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
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
												{tag cmp_mg}
											}
										}
										{exclude
											{tag
												{tag player_veh}
											}
											{tag
												{tag hidden}
											}
										}
									}
									{sort
										{type shuffle}
									}
								}
								{count
									{op ">"}
									{value 36}
								}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 10
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 12
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.3}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 14
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 18
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
								{"default"
									{"delete"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cmp_mg}
													}
												}
												{exclude
													{tag
														{tag player_veh}
													}
													{tag
														{tag hidden}
													}
													{state
														{state user_control}
													}
												}
											}
											{amount 10
											}
											{sort
												{type shuffle}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delete"
								{selector
									{source advanced}
									{amount 0
									}
									{sort
										{type shuffle}
									}
									{group
										{select
											{tag
												{tag cmp_mg}
											}
										}
										{exclude
											{state
												{state user_control}
											}
											{tag
												{tag player_veh}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/infdefensedelete"
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
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"delete"
						{selector
							{tag infdefense}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"delete"
						{selector
							{tag fortifications}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/infdefenseside"
				{condition
					{type 1}
					{terms
						{"1.cmp_i"
							{var "user_team$"}
							{op "=="}
							{value 1}
						}
						{"2.cmp_i"
							{var "user_team$"}
							{op "=="}
							{value 2}
						}
					}
				}
				{actions
					{"delay"
						{time 5.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_team$"}
								{op "=="}
								{value 1}
							}
							{"delete"
								{selector
									{tag "side b"}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_team$"}
								{op "=="}
								{value 2}
							}
							{"delete"
								{selector
									{tag "side a"}
								}
							}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/environment"
				{condition
				}
				{actions
					{"delay"
						{time 2}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/night1"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/day1"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/day2"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/day3"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/day4"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/day5"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/day6"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/morning1"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/morning2"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/morning3"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/morning4"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/evening"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/evening2"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/evening3"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/evening4"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.02}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/evening5"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.02}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/evening6"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.05}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/night2"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.02}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/autumn/cloudy/evening_1"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.02}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/autumn/cloudy/midday_1b"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.02}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "goh/single/01-ger/1942_09_elbrus/01_storm"}
								{time -1}
								{apply}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.02}
							}
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "goh/single/01-rus/1942_12_winterstorm/evening"}
								{time -1}
								{apply}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"environment"
								{name "dynamic_campaign/mod/day2"}
								{time -1}
								{apply}
							}
						}
					}
				}
			}
			{## "conquest_enhanced/initialize/delet ammo_point"
				{condition
					{terms
						{"4.cmp_i"
							{var "defensetier$"}
							{op "<<"}
							{value 2}
						}
						{"3.cmp_i"
							{var "defensetier$"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 1.7}
					}
					{"delete"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ammo_point}
									}
								}
							}
						}
					}
				}
			}
			{## "conquest_enhanced/initialize/delete ammo_boxes"
				{condition
					{terms
						{"4.cmp_i"
							{var "defensetier$"}
							{op "<<"}
							{value 3}
						}
						{"3.cmp_i"
							{var "defensetier$"}
							{op ">"}
							{value 0}
						}
					}
				}
				{actions
					{"delay"
						{time 1.7}
					}
					{"delete"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag lootbox}
									}
								}
							}
						}
					}
					{"delay"
						{time 1.7}
					}
					{"delete"
						{selector
							{tag "lootbox"}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/delete_inactive_zone_entities"
				{condition
				}
				{actions
					{"delay"
						{time 3}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{tag fpc1}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"delete"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag zone1}
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
					}
					{"delay"
						{time 1}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{tag fpc2}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"delete"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag zone2}
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
					}
					{"delay"
						{time 1}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{tag fpc3}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"delete"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag zone3}
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
					}
					{"delay"
						{time 1}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{tag fpc4}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"delete"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag zone4}
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
					}
					{"delay"
						{time 1}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{tag fpc5}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"delete"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag zone5}
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
					}
					{"delay"
						{time 1}
					}
				}
			}
			{## "conquest_enhanced/initialize/delet light at"
				{disabled}
				{condition
					{terms
						{"1.entities"
							{selector
								{tag "4_b_3"}
								{type human}
								{state operatable}
							}
						}
						{"2.entities"
							{selector
								{tag "1_b_3"}
								{type human}
								{state operatable}
							}
						}
						{"3.entities"
							{selector
								{tag "2_b_3"}
								{type human}
								{state operatable}
							}
						}
						{"4.entities"
							{selector
								{tag "3_b_3"}
							}
						}
						{"5.entities"
							{selector
								{tag "5_b_3"}
								{type human}
								{state operatable}
							}
						}
					}
				}
				{actions
					{"delete"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag "light at"}
									}
								}
							}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/delet rus ger"
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
								}
							}
						}
						{"2.cmp_i"
							{var "user_nation$"}
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
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"delete"
								{selector
									{tag ger}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"delete"
								{selector
									{tag rus}
								}
							}
						}
					}
				}
			}
			{"conquest_enhanced/initialize/delet rus ger attack"
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
							{var "user_nation$"}
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
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"delete"
								{selector
									{tag rus}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 3}
							}
							{"delete"
								{selector
									{tag rus}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"delete"
								{selector
									{tag ger}
								}
							}
						}
					}
				}
			}

; ========== Tagging Scripts ==========
			{"conquest_enhanced/tag/tag_ai_officer"
				{condition
					{terms
						{"1.entities"
							{selector
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
											{item "binocular"}
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
											{tag officerai}
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
									{with_item
										{type amount}
										{item "binocular"}
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
										{state user_control}
									}
									{state
										{state inactive}
									}
									{tag
										{tag player}
									}
								}
							}
						}
						{tag_add officerai}
					}
					{"delay"
						{time 1}
					}
					{"inventory"
						{selector
							{tag officerai}
						}
						{action take}
						{item "binocular"}
					}
					{"delay"
						{time 1}
					}
					{"inventory"
						{selector
							{tag officerai}
						}
						{action remove}
						{item "ppsh41_drum"}
					}
					{"delay"
						{time 1}
					}
					{"inventory"
						{selector
							{tag officerai}
						}
						{action remove}
						{item "mp40_folded"}
					}
					{"delay"
						{time 1}
					}
					{"inventory"
						{selector
							{tag officerai}
						}
						{action remove}
						{item "luger"}
					}
					{"delay"
						{time 1}
					}
					{"inventory"
						{selector
							{tag officerai}
						}
						{action remove}
						{item "nagant_revolver"}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "conquest_enhanced/tag/tag_ai_officer"}
					}
				}
			}
			{"conquest_enhanced/tag/tag_tank_crew"
				{condition
					{type 1}
					{terms
						{"1.entities"
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
											{item "ger_m28_beret"}
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
											{tag ai_tank_crew}
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
											{item "ger_officer_cap_tank"}
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
											{tag ai_tank_crew}
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
											{item "ger_crusher_cap_tank"}
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
											{tag ai_tank_crew}
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
											{item "ger_m34_sidecap_tank"}
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
											{tag ai_tank_crew}
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
											{item "ger_m43_cap_tank"}
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
											{tag ai_tank_crew}
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
											{item "soviet_tankist_cap"}
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
											{tag ai_tank_crew}
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
											{item "soviet_tankovy_helmet"}
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
											{tag ai_tank_crew}
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
											{item "fin_tank_helmet"}
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
											{tag ai_tank_crew}
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
											{tag ai_inf}
										}
									}
									{include
										{with_item
											{type existance}
											{item "ger_m34_sidecap"}
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
											{tag ai_tank_crew}
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
										{with_item
											{type existance}
											{item "k98"}
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
					{"effect"
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
										{item "ger_m28_beret"}
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
										{tag ai_tank_crew}
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
										{item "ger_officer_cap_tank"}
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
										{tag ai_tank_crew}
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
										{item "ger_crusher_cap_tank"}
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
										{tag ai_tank_crew}
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
										{item "ger_m34_sidecap_tank"}
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
										{tag ai_tank_crew}
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
										{item "ger_m43_cap_tank"}
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
										{tag ai_tank_crew}
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
										{item "soviet_tankist_cap"}
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
										{tag ai_tank_crew}
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
										{item "soviet_tankovy_helmet"}
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
										{tag ai_tank_crew}
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
										{item "fin_tank_helmet"}
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
										{tag ai_tank_crew}
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
										{type existance}
										{item "ger_m34_sidecap"}
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
										{tag ai_tank_crew}
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
									{with_item
										{type existance}
										{item "k98"}
									}
								}
							}
						}
						{effect tag_ai_tank_crew}
					}
					{"delay"
						{time 15}
					}
					{"trigger"
						{name "conquest_enhanced/tag/tag_tank_crew"}
					}
				}
			}
			{"conquest_enhanced/tag/tag_ai_engineer"
				{condition
					{type 1}
					{terms
						{"2.entities"
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
											{type existance}
											{item "pickaxe"}
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
											{tag ai_engineer}
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
										{type existance}
										{item "pickaxe"}
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
										{tag ai_engineer}
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
								}
							}
						}
						{tag_add ai_engineer}
						{tag_remove ai_inf}
					}
					{"delay"
						{time 15}
					}
					{"trigger"
						{name "conquest_enhanced/tag/tag_ai_engineer"}
					}
				}
			}
			{"conquest_enhanced/tag/removewrongtags"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_armor}
										}
									}
									{include
										{state
											{state operatable}
										}
										{tag
											{tag player_armor}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_armor}
										}
									}
									{include
										{prop
											{prop tank}
										}
										{state
											{state user_control}
										}
										{state
											{state operatable}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_armor}
										}
									}
									{include
										{prop
											{prop tank}
										}
										{player
											{player "1"}
										}
										{state
											{state operatable}
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
											{tag ai_car}
										}
									}
									{include
										{tag
											{tag player_car}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_car}
										}
									}
									{include
										{state
											{state user_control}
										}
										{state
											{state operatable}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_car}
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
								}
							}
						}
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ai_inf}
										}
									}
									{include
										{tag
											{tag player}
										}
										{state
											{state operatable}
										}
										{state
											{state user_control}
										}
										{prop
											{prop human}
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
										{state
											{state user_control}
										}
										{prop
											{prop human}
										}
										{state
											{state operatable}
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
										{player
											{player "1"}
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
											{tag ai_veh}
										}
									}
									{include
										{tag
											{tag player_veh}
										}
										{prop
											{prop vehicle}
										}
										{state
											{state operatable}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_veh}
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
											{state user_control}
										}
									}
								}
								{group
									{select
										{tag
											{tag ai_veh}
										}
									}
									{include
										{prop
											{prop vehicle}
										}
										{player
											{player "1"}
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
										{tag ai_car}
									}
								}
								{include
									{tag
										{tag player_car}
									}
									{state
										{state operatable}
									}
								}
							}
						}
						{control user}
						{fire_mode open}
						{move_mode hold}
					}
					{"delay"
						{time 0.5}
					}
					{"actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ai_veh}
									}
								}
								{include
									{tag
										{tag player_veh}
									}
									{state
										{state operatable}
									}
								}
							}
						}
						{control user}
						{fire_mode open}
						{move_mode hold}
					}
					{"delay"
						{time 0.5}
					}
					{"actor_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag ai_armor}
									}
								}
								{include
									{tag
										{tag player_armor}
									}
									{state
										{state operatable}
									}
								}
							}
						}
						{control user}
						{fire_mode open}
						{move_mode hold}
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
										{tag ai_inf}
									}
								}
								{include
									{tag
										{tag player}
									}
									{state
										{state operatable}
									}
									{state
										{state user_control}
									}
									{prop
										{prop human}
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
									{state
										{state user_control}
									}
									{prop
										{prop human}
									}
									{state
										{state operatable}
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
									{player
										{player "1"}
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
										{state dead}
									}
								}
							}
						}
						{tag_remove ai_inf}
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
										{tag ai_armor}
									}
								}
								{include
									{state
										{state operatable}
									}
									{tag
										{tag player_armor}
									}
								}
							}
							{group
								{select
									{tag
										{tag ai_armor}
									}
								}
								{include
									{prop
										{prop tank}
									}
									{state
										{state user_control}
									}
									{state
										{state operatable}
									}
								}
							}
							{group
								{select
									{tag
										{tag ai_armor}
									}
								}
								{include
									{prop
										{prop tank}
									}
									{player
										{player "1"}
									}
									{state
										{state operatable}
									}
								}
							}
						}
						{tag_remove ai_armor}
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
										{tag ai_car}
									}
								}
								{include
									{tag
										{tag player_car}
									}
								}
							}
							{group
								{select
									{tag
										{tag ai_car}
									}
								}
								{include
									{state
										{state user_control}
									}
									{state
										{state operatable}
									}
								}
							}
							{group
								{select
									{tag
										{tag ai_car}
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
							}
						}
						{tag_remove ai_car}
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
										{tag ai_veh}
									}
								}
								{include
									{tag
										{tag player_veh}
									}
									{prop
										{prop vehicle}
									}
									{state
										{state operatable}
									}
								}
							}
							{group
								{select
									{tag
										{tag ai_veh}
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
										{state user_control}
									}
								}
							}
							{group
								{select
									{tag
										{tag ai_veh}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{player
										{player "1"}
									}
									{state
										{state user_control}
									}
								}
							}
						}
						{tag_remove ai_veh}
					}
					{"delay"
						{time 2}
					}
					{"trigger"
						{name "conquest_enhanced/tag/removewrongtags"}
					}
				}
			}
			{"conquest_enhanced/tag/tag_player_officer"
				{condition
					{expression "2"}
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{exclude
										{state
											{state dead}
										}
									}
								}
							}
						}
					}
				}
				{actions
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
									{with_item
										{type existance}
										{item "ger_officer_cap"}
									}
									{with_item
										{type existance}
										{item "binocular"}
									}
									{state
										{state operatable}
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
									{with_item
										{type existance}
										{item "soviet_commisar_cap"}
									}
									{with_item
										{type existance}
										{item "binocular"}
									}
									{state
										{state operatable}
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
									{with_item
										{type existance}
										{item "cap_eng_off"}
									}
									{with_item
										{type existance}
										{item "binocular"}
									}
									{state
										{state operatable}
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
									{with_item
										{type existance}
										{item "cap_ita_bustina_officer"}
									}
									{with_item
										{type existance}
										{item "binocular"}
									}
									{state
										{state operatable}
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
									{with_item
										{type existance}
										{item "cap1_jap"}
									}
									{with_item
										{type existance}
										{item "binocular"}
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
									{with_item
										{type existance}
										{item "cap_fra_sidecap_officer"}
									}
									{with_item
										{type existance}
										{item "binocular"}
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
									{with_item
										{type existance}
										{item "cap1_usa"}
									}
									{with_item
										{type existance}
										{item "binocular"}
									}
									{state
										{state operatable}
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
									{with_item
										{type existance}
										{item "cap_pol_2div_officer"}
									}
									{with_item
										{type existance}
										{item "binocular"}
									}
									{state
										{state operatable}
									}
								}
							}
						}
						{tag_add officer}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "conquest_enhanced/tag_player_officer"}
					}
				}
			}

; ========== Combat Scripts ==========
			{"conquest_enhanced/attack_start_new"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
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
									}
									{include
										{state
											{state operatable}
										}
										{state
											{state inhabited}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{player
											{player "1"}
										}
										{state
											{state user_control}
										}
										{state
											{state inactive}
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
											{tag airsupportrus}
										}
										{tag
											{tag airsupportger}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag engine_count_2}
										}
										{tag
											{tag engine_count_1}
										}
										{tag
											{tag aircraft}
										}
									}
								}
								{group
									{select
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
										{player
											{player "1"}
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
											{tag player}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"event"
						{event "attack_start"}
						{mode set}
						{delay 1}
					}
					{"call"
						{function "set_ai_planes_to_ai_team"}
					}
				}
			}
			{"conquest_enhanced/air_support"
				{condition
					{expression "(3 & 2 & 4) | (1 & 2 & 4)"}
					{terms
						{"3.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag engine_count_1}
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
										{zone
											{zone "combat"}
										}
									}
									{exclude
										{tag
											{tag airsupportrus}
										}
										{tag
											{tag air_recon_vehicle}
										}
										{tag
											{tag extraplanes}
										}
										{tag
											{tag playerplane}
										}
										{tag
											{tag scout_plane}
										}
										{tag
											{tag drop_plane}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag fighter}
										}
									}
								}
							}
							{near_to
								{tag cmp_def}
							}
							{distance 1000}
						}
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag engine_count_2}
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
										{zone
											{zone "combat"}
										}
									}
									{exclude
										{tag
											{tag airsupportger}
										}
										{tag
											{tag airsupportfin}
										}
										{tag
											{tag air_recon_vehicle}
										}
										{tag
											{tag extraplanes}
										}
										{tag
											{tag playerplane}
										}
										{tag
											{tag scout_plane}
										}
										{tag
											{tag drop_plane}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag fighter}
										}
									}
								}
							}
							{near_to
								{tag cmp_def}
							}
							{distance 1000}
						}
						{"2.entities"
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
						{"4.cmp_i"
							{var "defensetier$"}
							{op ">"}
							{value 2}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{## "switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"delete"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{tag
												{tag hidden}
											}
											{state
												{state operatable}
											}
										}
									}
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
														{tag player}
													}
												}
												{include
													{player
														{player "7"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "7"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "7"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "8"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "8"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "8"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "9"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "9"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "9"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "10"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "10"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "10"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "12"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "12"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "12"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "11"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "11"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "11"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "13"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "13"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "13"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "14"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "14"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "14"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "15"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportrus}
													}
												}
											}
										}
										{operation set}
										{player "15"}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
											{player "15"}
											{state operatable}
										}
										{control AI}
									}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"delete"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
											{tag
												{tag hidden}
											}
										}
									}
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
														{tag player}
													}
												}
												{include
													{player
														{player "11"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "11"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "11"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "12"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "12"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "12"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "13"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "13"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "13"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "14"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "14"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "14"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "15"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "15"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "15"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "10"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "10"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "10"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "9"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "9"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "9"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "8"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "8"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "8"}
											{state operatable}
										}
										{control AI}
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
														{tag player}
													}
												}
												{include
													{player
														{player "7"}
													}
												}
											}
										}
									}
									{"player"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag airsupportger}
													}
												}
											}
										}
										{operation set}
										{player "7"}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
											{player "7"}
											{state operatable}
										}
										{control AI}
									}
								}
							}
						}
					}
					{"ables"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag air_vehicle_player_ally}
									}
								}
							}
						}
						{remove select}
					}
					{"delay"
						{time 1}
					}
					{"loop" 3
						{"actor_recon"
							{selector
								{tag air_vehicle_player_ally}
							}
							{waypoint "1"}
							{radius 22222}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_state"
							{selector
								{tag air_vehicle_player_ally}
							}
							{movement
								{speed assault}
							}
						}
						{"delay"
							{time 0.2}
						}
						{"air_attack"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag air_vehicle_player_ally}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
								}
							}
							{enemies
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
										{relation
											{relation enemy}
											{player "1"}
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
													{tag player}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_veh}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
										}
									}
								}
								{amount 1
								}
							}
							{clone}
							{move_from_back}
							{force_placement}
							{attack_altitude 33}
						}
						{"delay"
							{time 0.2}
						}
						{"effect"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag air_vehicle_player_ally}
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
					{## "switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"actor_recon"
								{selector
									{tag airsupportrus}
								}
								{waypoint "1"}
								{radius 22222}
							}
							{"actor_state"
								{selector
									{tag airsupportrus}
								}
								{movement
									{speed assault}
								}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 33}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 25}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
									{amount 1
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
											}
											{tag
												{tag ai_inf}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_veh}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{count 2}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"actor_recon"
								{selector
									{tag airsupportger}
								}
								{waypoint "1"}
								{radius 22222}
							}
							{"actor_state"
								{selector
									{tag airsupportger}
								}
								{movement
									{speed assault}
								}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 33}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 25}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
											}
											{tag
												{tag ai_inf}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_veh}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{count 2}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
						}
					}
					{"delay"
						{time 30}
					}
					{"loop" 3
						{"actor_recon"
							{selector
								{tag air_vehicle_player_ally}
							}
							{waypoint "1"}
							{radius 22222}
						}
						{"delay"
							{time 0.2}
						}
						{"actor_state"
							{selector
								{tag air_vehicle_player_ally}
							}
							{movement
								{speed assault}
							}
						}
						{"delay"
							{time 0.2}
						}
						{"air_attack"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag air_vehicle_player_ally}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
								}
							}
							{enemies
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
										{relation
											{relation enemy}
											{player "1"}
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
													{tag player}
												}
												{tag
													{tag player_armor}
												}
												{tag
													{tag player_veh}
												}
											}
											{include
												{state
													{state operatable}
												}
											}
										}
									}
								}
								{amount 1
								}
							}
							{clone}
							{move_from_back}
							{force_placement}
							{attack_altitude 33}
						}
						{"delay"
							{time 0.2}
						}
						{"effect"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag air_vehicle_player_ally}
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
					{## "switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"actor_recon"
								{selector
									{tag airsupportrus}
								}
								{waypoint "1"}
								{radius 22222}
							}
							{"actor_state"
								{selector
									{tag airsupportrus}
								}
								{movement
									{speed assault}
								}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 33}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 25}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
									{amount 1
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
											}
											{tag
												{tag ai_inf}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportrus}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_veh}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{count 2}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"actor_recon"
								{selector
									{tag airsupportger}
								}
								{waypoint "1"}
								{radius 22222}
							}
							{"actor_state"
								{selector
									{tag airsupportger}
								}
								{movement
									{speed assault}
								}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 33}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 25}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
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
											{relation
												{relation enemy}
												{player "1"}
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
														{tag player}
													}
													{tag
														{tag player_armor}
													}
													{tag
														{tag player_veh}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_armor}
											}
											{tag
												{tag ai_inf}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
										{mode farthest}
									}
									{amount 1
									}
								}
								{clone}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
							{"delay"
								{time 3}
							}
							{"air_attack"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag airsupportger}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
								}
								{enemies
									{source advanced}
									{group
										{select
											{tag
												{tag ai_veh}
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
									}
									{sort
										{type entity}
										{entity
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
												}
												{include
													{state
														{state operatable}
													}
												}
											}
										}
									}
									{amount 1
									}
								}
								{clone}
								{count 2}
								{move_from_back}
								{force_placement}
								{attack_altitude 38}
							}
						}
					}
					{"delay"
						{time 120}
					}
					{"trigger"
						{name "conquest_enhanced/air_support"}
					}
				}
			}
			{"conquest_enhanced/katyscript"
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
										{zone
											{zone "gamezone"}
										}
									}
									{include
										{with_item
											{type amount}
											{item "132mm_bm13" "ammo"}
											{min 1}
										}
										{state
											{state operatable}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{tag
											{tag player_car}
										}
										{tag
											{tag player_veh}
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
											{item "300mm_bm30" "ammo"}
											{min 1}
										}
										{state
											{state operatable}
										}
									}
									{exclude
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
											{tag dead}
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
									{with_item
										{type amount}
										{item "300mm_bm30" "ammo"}
										{min 1}
									}
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
										{tag player_car}
									}
									{state
										{state dead}
									}
									{tag
										{tag katy}
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
										{item "132mm_bm13" "ammo"}
										{min 1}
									}
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
										{tag player_car}
									}
									{state
										{state dead}
									}
									{tag
										{tag katy}
									}
								}
							}
						}
						{tag_add katy}
					}
					{"delay"
						{time 1}
					}
					{"action"
						{selector
							{tag katy}
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
						{time 5}
					}
					{"if"
						{condition
							{type cmp_i}
							{var "player_defending$"}
							{op "=="}
							{value 1}
						}
						{"actor_fire"
							{selector
								{tag katy}
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
							{interval 1}
							{time 25}
							{burst_mode long}
							{cheating}
						}
					}
					{"if"
						{condition
							{type cmp_i}
							{var "player_defending$"}
							{op "=="}
							{value 0}
						}
						{"actor_fire"
							{selector
								{tag katy}
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
							}
							{interval 1}
							{time 25}
							{burst_mode long}
							{cheating}
						}
					}
					{"delay"
						{time 16}
					}
					{"actor_state"
						{selector
							{tag reloading}
						}
						{movement
							{forward off}
							{backward off}
						}
					}
					{"delay"
						{time 1}
					}
					{"actor_state"
						{selector
							{tag reloading}
						}
						{movement
							{speed_kph 10}
							{forward on}
							{backward on}
						}
					}
					{"trigger"
						{name "conquest_enhanced/katyscript"}
					}
				}
			}

; ========== CE Mechanics Scripts ==========
			{"conquest_enhanced/radio/disableminimap"
				{condition
					{expression "!1 & !2 & 3"}
					{terms
						{"1.difficulty"
							{level easy}
						}
						{"2.difficulty"
							{level normal}
						}
						{"3.entities"
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
											{state "operatable inhabited user_control"}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
						{time 10}
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
												{tag player}
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
									}
								}
							}
							{"ables"
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
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag cmp_def}
											}
											{tag
												{tag rus}
											}
											{tag
												{tag ger}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{remove minimap}
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
												{tag player}
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
									}
								}
							}
							{"ables"
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
												{state operatable}
											}
										}
										{exclude
											{state
												{state user_control}
											}
										}
									}
								}
								{remove minimap}
							}
						}
					}
					{"trigger"
						{name "conquest_enhanced/radio/disableminimap"}
					}
					{## "ables"
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
										{state operatable}
									}
								}
								{exclude
									{state
										{state user_control}
									}
								}
							}
						}
						{remove minimap}
					}
				}
			}
			{"conquest_enhanced/radio/enableminimap"
				{condition
					{expression "!1 & !2 & 3"}
					{terms
						{"1.difficulty"
							{level easy}
						}
						{"2.difficulty"
							{level normal}
						}
						{"3.entities"
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
											{state "operatable inhabited user_control"}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{tag
											{tag hidden}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 10}
					}
					{"ables"
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
										{state operatable}
									}
								}
								{exclude
									{state
										{state user_control}
									}
								}
							}
						}
						{add minimap}
					}
					{"trigger"
						{name "conquest_enhanced/radio/enableminimap"}
					}
				}
			}
			{"conquest_enhanced/radio/radioon"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag player}
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
												{tag radio_car}
											}
										}
										{include
											{state
												{state "operatable inhabited user_control"}
											}
										}
									}
								}
							}
							{"set_i"
								{var "radiocar$"}
								{op "="}
								{value 1}
							}
						}
						{## "case"
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
												{state "operatable inhabited user_control"}
											}
										}
									}
								}
								{count
									{op "=="}
									{value 0}
								}
							}
							{"set_i"
								{var "radiocar$"}
								{op "="}
								{value 0}
							}
						}
						{"default"
							{"set_i"
								{var "radiocar$"}
								{op "="}
								{value 0}
							}
						}
					}
					{"delay"
						{time 15}
					}
					{"trigger"
						{name "conquest_enhanced/radio/radioon"}
					}
				}
			}
			{"conquest_enhanced/tellaboutyourself"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag talking}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle20}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle20"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle19}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle19"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle18}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle18"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle17}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle17"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle16}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle16"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle15}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle15"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle14}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle14"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle13}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle13"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle12}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle12"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle11}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle11"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle10}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle10"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle9}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle9"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle8}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle8"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle7}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle7"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle6}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle6"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle5}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle5"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle4}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle4"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle3}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle3"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle2}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle2"}
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag battle1}
											}
										}
									}
								}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
									}
								}
								{text "mission/multi/Battle1"}
							}
						}
					}
					{"delay"
						{time 5}
					}
					{"entity_state"
						{selector
							{tag talking}
						}
						{tag_remove talking}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "conquest_enhanced/tellaboutyourself"}
					}
				}
			}

; ========== Old Scripts ==========
			{## "conquest_enhanced/officerremove"
				{disabled}
				{condition
					{expression "!2"}
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag buffed}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
								}
								{amount 1
								}
							}
							{near_to
								{amount 1
								}
								{tag officer}
								{state operatable}
							}
							{distance 20}
						}
						{"2.see_actors"
							{selector
								{amount 1
								}
								{tag buffed}
								{state operatable}
							}
							{enemy
								{amount 1
								}
								{tag officer}
								{state operatable}
							}
							{distance
								{mode near_than}
								{meters 16}
							}
							{detection ""}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag buffed}
								}
							}
							{exclude
								{state
									{state dead}
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
											{tag officer}
										}
									}
								}
								{amount 1
								}
							}
							{mode farthest}
						}
					}
					{"actor_state"
						{selector
							{source current}
						}
						{ai
							{retreat_ratio 4}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove buffed}
					}
					{"delay"
						{time 2}
					}
					{"trigger"
						{name "conquest_enhanced/officerremove"}
					}
				}
			}
			{## "conquest_enhanced/officerbuff"
				{disabled}
				{condition
					{expression "2"}
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{exclude
										{state
											{state dead}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"while"
						{condition
							{type near}
							{units
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
										{tag
											{tag buffed}
										}
										{tag
											{tag officer}
										}
									}
								}
							}
							{near_to
								{tag officer}
								{state operatable}
							}
							{distance 15}
						}
						{"if"
							{condition
								{type see_actors}
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
											{tag
												{tag buffed}
											}
											{tag
												{tag officer}
											}
										}
									}
									{amount 1
									}
								}
								{enemy
									{tag officer}
									{state operatable}
								}
								{distance
									{mode near_than}
									{meters 14}
								}
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
											{tag
												{tag buffed}
											}
											{tag
												{tag officer}
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
														{tag officer}
													}
												}
												{include
													{state
														{state operatable}
													}
												}
											}
											{amount}
											{sort
												{type entity}
												{entity
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
															{tag
																{tag buffed}
															}
														}
													}
												}
											}
										}
									}
								}
								{tag_add buffed}
							}
							{"actor_state"
								{selector
									{tag buffed}
									{state operatable}
								}
								{ai
									{retreat_ratio 1000}
								}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "conquest_enhanced/officerbuff"}
					}
				}
			}
			{## "conquest_enhanced/xalink3"
				{disabled}
				{condition
					{expression "!1 "}
					{terms
						{"1.linked"
							{source
								{source advanced}
								{group
									{select
										{tag
											{tag player_veh}
										}
									}
									{exclude
										{tag
											{tag linked2}
										}
									}
								}
								{amount 1
								}
							}
							{destination
								{source advanced}
								{group
									{select
										{tag
											{tag player_car}
										}
									}
									{exclude
										{tag
											{tag linked}
										}
										{zone
											{zone "combat"}
										}
									}
								}
								{amount 1
								}
							}
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
										{tag player_car}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag linked}
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
												{tag player_veh}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag linked2}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{tag_add linked}
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
										{tag player_veh}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag linked2}
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
												{tag linked}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{tag_add linked2}
					}
					{"delay"
						{time 0.1}
					}
					{"action"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag linked}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{order attach
									}
									{state
										{state linked}
									}
									{tag
										{tag nolink}
									}
								}
							}
							{amount 1
							}
						}
						{action attach}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag linked2}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{state
										{state linked}
									}
									{tag
										{tag nolink2}
									}
								}
							}
							{amount 1
							}
						}
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
										{tag linked}
									}
								}
								{exclude
									{tag
										{tag nolink}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add nolink}
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
										{tag linked2}
									}
								}
								{exclude
									{tag
										{tag nolink2}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add nolink2}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "conquest_enhanced/xalink3"}
					}
				}
			}			
			{## "conquest_enhanced/test attackinf"
				{disabled}
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
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
										{tag
											{tag player_armor}
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
					}
				}
				{actions
					{"delay"
						{time 5.1}
					}
					{"actor_state"
						{selector
							{tag ai_inf}
						}
						{drop "sensor senseless"}
						{movement
							{speed assault}
						}
						{ai
							{no_retreat on}
							{advance_ratio "0.01"}
							{retreat_ratio 200}
						}
					}
					{## "actor_state"
						{selector
							{tag ai_inf}
						}
						{movement
							{speed sneak}
							{kind fast}
							{type normal}
						}
						{human
							{stamina 0}
						}
						{ai
							{no_advance on}
							{no_retreat off}
							{advance_ratio 555}
							{retreat_ratio "0.01"}
						}
					}
					{## "actor_state"
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
								}
							}
						}
						{control AI}
						{fire_mode open}
						{ai_move
							{mode enable}
						}
						{movement
							{speed normal}
							{kind slow}
							{max_speed_kph 22}
						}
						{ai
							{advance_ratio 2}
						}
					}
					{"actor_state"
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
										{tag player}
									}
								}
							}
						}
						{control user}
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
									{tag
										{tag player}
									}
								}
							}
						}
						{tag_remove ai_inf}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "conquest_enhanced/test attackinf"}
					}
				}
			}			
			{## "conquest_enhanced/smokescreen"
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
						{"2.rand"
							{value 0.8}
						}
						{"3.event"
							{id "attack_start"}
						}
					}
				}
				{actions
					{"delay"
						{time 40}
					}
					{"loop" 20
						{"switch"
							{"case"
								{condition
									{type cmp_i}
									{var "user_team$"}
									{op "=="}
									{value 2}
								}
								{"spawn"
									{entity "shell_smoke"}
									{waypoint "12"}
								}
								{"spawn"
									{entity "shell_smoke"}
									{waypoint "13"}
								}
								{"spawn"
									{entity "shell_smoke"}
									{waypoint "14"}
								}
							}
						}
						{"switch"
							{"case"
								{condition
									{type cmp_i}
									{var "user_team$"}
									{op "=="}
									{value 1}
								}
								{"spawn"
									{entity "shell_smoke"}
									{waypoint "15"}
								}
								{"spawn"
									{entity "shell_smoke"}
									{waypoint "16"}
								}
								{"spawn"
									{entity "shell_smoke"}
									{waypoint "17"}
								}
							}
						}
					}
					{"delay"
						{time 240}
					}
					{## "trigger"
						{name "conquest_enhanced/smokescreen"}
					}
				}
			}
			{## "player_scripts/conquest_enhanced/concentratedbarrage"
				{disabled}
				{condition
					{terms
						{"1.entities"
							{selector
								{tag pointer_defend}
							}
						}
						{"2.entities"
							{selector
								{tag officer}
								{state operatable}
							}
						}
						{"3.cmp_i"
							{var "radiocar$"}
							{op "=="}
							{value 1}
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
												{tag cmp_def}
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
									}
								}
								{count
									{op "=="}
									{value 0}
								}
							}
							{"entity_state"
								{selector
									{amount 1
									}
									{tag player}
									{type human}
									{state operatable}
								}
								{tag_add cmp_def}
							}
						}
					}
					{## "rt_function"
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
							}
							{amount 1
							}
							{sort
								{type entity}
								{entity
									{tag arty}
								}
							}
						}
						{call "Clone"
						}
					}
					{"delay"
						{time 0.1}
					}
					{"inventory"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag cmp_def}
									}
									{zone
										{zone "combat"}
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
							{amount 1
							}
							{sort
								{type entity}
								{entity
									{tag arty}
								}
								{mode farthest}
							}
						}
						{action add}
						{item "secret_doc_bag2"}
						{stack 0}
					}
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{group
								{include
									{with_item
										{type amount}
										{item "secret_doc_bag2"}
										{min 1}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add target}
						{impregnability full}
					}
					{"delay"
						{time 0.1}
					}
					{"actor_state"
						{selector
							{tag target}
						}
						{drop orders}
						{fire_mode hold}
						{move_mode hold}
						{weapon_prepare off}
					}
					{"delay"
						{time 1.3}
					}
					{"placement"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag target}
									}
								}
							}
						}
						{target
							{tag pointer_defend}
						}
						{clone_places}
						{ignore_z}
					}
					{"delay"
						{time 0.3}
					}
					{"actor_fire"
						{selector
							{tag arty}
						}
						{drop "orders sensor senseless"}
						{deviate}
						{enemies
							{tag target}
						}
						{interval 1}
						{time 60}
						{burst_mode long}
					}
					{"delay"
						{time 65}
					}
					{"delete"
						{selector
							{tag target}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/concentratedbarrage"}
					}
				}
			}
			{## "conquest_enhanced/nocmpdef"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag cmp_def}
								{type human}
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"2.entities"
							{selector
								{tag player}
								{type human}
							}
						}
					}
				}
				{actions
					{"entity_state"
						{selector
							{amount 1
							}
							{tag player}
							{type human}
						}
						{tag_add cmp_def}
					}
				}
			}			
			{## "conquest_enhanced/setaiplayer"
				{disabled}
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
											{tag player}
										}
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
						{"2.event"
							{id "attack_start"}
						}
						{"3.cmp_i"
							{var "randomtimer$"}
							{op ">"}
							{value 0}
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
												{tag ai_inf}
											}
										}
										{include
											{state
												{state operatable}
											}
											{player
												{player "2"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "2"}
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
											{state
												{state operatable}
											}
											{player
												{player "3"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "3"}
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
											{state
												{state operatable}
											}
											{player
												{player "4"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "4"}
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
											{state
												{state operatable}
											}
											{player
												{player "5"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "5"}
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
											{state
												{state operatable}
											}
											{player
												{player "6"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag extraplanes}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "6"}
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
											{state
												{state operatable}
											}
											{player
												{player "7"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "7"}
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
											{state
												{state operatable}
											}
											{player
												{player "8"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "8"}
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
											{state
												{state operatable}
											}
											{player
												{player "9"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
											{tag
												{tag hidden}
											}
										}
									}
								}
								{operation set}
								{player "9"}
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
											{state
												{state operatable}
											}
											{player
												{player "10"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "10"}
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
											{state
												{state operatable}
											}
											{player
												{player "11"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "11"}
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
											{state
												{state operatable}
											}
											{player
												{player "12"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "12"}
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
											{state
												{state operatable}
											}
											{player
												{player "13"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "13"}
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
											{state
												{state operatable}
											}
											{player
												{player "14"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "14"}
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
											{state
												{state operatable}
											}
											{player
												{player "15"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "15"}
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
											{state
												{state operatable}
											}
											{player
												{player "16"}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
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
											{tag
												{tag hidden}
											}
										}
										{exclude
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
									}
								}
								{operation set}
								{player "16"}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "conquest_enhanced/setaiplayer"}
					}
				}
			}	
			{## "conquest_enhanced/lootboxes"
				{condition
					{terms
						{"1.rand"
							{value 0.8}
						}
						{"2.entities"
							{selector
								{tag lootbox}
							}
						}
					}
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_100" "weapon"}
								{filling
									{stuff "panzerfaust100" "ammo"}
									{amount 1}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_100" "weapon"}
								{amount 2}
								{filling
									{stuff "panzerfaust100" "ammo"}
									{amount 2}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_60" "weapon"}
								{amount 2}
								{filling
									{stuff "panzerfaust60" "ammo"}
									{amount 2}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_60" "weapon"}
								{filling
									{stuff "panzerfaust60" "ammo"}
									{amount 1}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_60" "weapon"}
								{amount 3}
								{filling
									{stuff "panzerfaust60" "ammo"}
									{amount 3}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_100" "weapon"}
								{amount 3}
								{filling
									{stuff "panzerfaust100" "ammo"}
									{amount 3}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_100" "weapon"}
								{amount 4}
								{filling
									{stuff "panzerfaust100" "ammo"}
									{amount 4}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.1}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "panzerfaust_60" "weapon"}
								{amount 4}
								{filling
									{stuff "panzerfaust60" "ammo"}
									{amount 4}
								}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
							{"inventory"
								{selector
									{tag lootbox}
								}
								{action add}
								{item "human"}
								{amount 4}
								{filling
									{stuff "canned_meat"}
									{amount 30}
								}
							}
						}
					}
				}
			}
