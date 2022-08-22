; ========== Variable and Mechanic Setup Scripts ==========
			{"dcg/def_team"
				{condition
					{terms
						{"1.event"
							{id "dcg"}
						}
						{"2.cmp_i"
							{var "user_team$"}
							{op ">"}
							{value 0}
						}
						{"3.cmp_i"
							{var "enemyid$"}
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
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag def_team_1}
											}
										}
										{include
											{zone
												{zone "gamezone"}
											}
										}
										{exclude
											{tag
												{tag def_team_2}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "def_team$"}
								{op "="}
								{value 1}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag cmp_def}
											}
											{state
												{state inactive}
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
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag def_team_2}
											}
										}
										{include
											{zone
												{zone "gamezone"}
											}
										}
										{exclude
											{tag
												{tag def_team_1}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "def_team$"}
								{op "="}
								{value 2}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "def_team$"}
								{op "="}
								{value "user_team$"}
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
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag "1_a_3"}
											}
											{tag
												{tag "2_a_3"}
											}
											{tag
												{tag "3_a_3"}
											}
											{tag
												{tag "4_a_3"}
											}
											{tag
												{tag "5_a_3"}
											}
											{tag
												{tag "1_b_3"}
											}
											{tag
												{tag "2_b_3"}
											}
											{tag
												{tag "3_b_3"}
											}
											{tag
												{tag "4_b_3"}
											}
											{tag
												{tag "5_b_3"}
											}
										}
										{include
											{zone
												{zone "gamezone"}
											}
										}
										{exclude
											{tag
												{tag hidden}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "defensetier$"}
								{op "="}
								{value 3}
							}														
						}
						{"case"
							{condition
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag "1_a_2-3"}
											}
											{tag
												{tag "2_a_2-3"}
											}
											{tag
												{tag "3_a_2-3"}
											}
											{tag
												{tag "4_a_2-3"}
											}
											{tag
												{tag "5_a_2-3"}
											}
											{tag
												{tag "1_b_2-3"}
											}
											{tag
												{tag "2_b_2-3"}
											}
											{tag
												{tag "3_b_2-3"}
											}
											{tag
												{tag "4_b_2-3"}
											}
											{tag
												{tag "5_b_2-3"}
											}
										}
										{include
											{zone
												{zone "gamezone"}
											}
										}
										{exclude
											{tag
												{tag hidden}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "defensetier$"}
								{op "="}
								{value 2}
							}
						}
						{"default"
							{"set_i"
								{var "defensetier$"}
								{op "="}
								{value 1}
							}
							{"delay"
								{time 1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "defensetier$"}
								{op "=="}
								{value 2}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag cmp_def}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"delete"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag def_team_1}
									}
									{tag
										{tag def_team_2}
									}
								}
							}
						}
					}
				}
			}	
			{"dcg/init"
				{condition
					{terms
						{"1.event"
							{id "init2"}
						}
						{"2.entities"
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
										{prop
											{prop human}
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
					{"set_i"
						{var "dcg_on$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "ai_air_on$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "user_team$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "def_team$"}
						{op "="}
						{value 0}
					}
					{"delay"
						{time 0.4}
					}
					{"set_i"
						{var "defensetier$"}
						{op "="}
						{value 0}
					}
					{"delay"
						{time 0.4}
					}
					{"set_i"
						{var "tier2$"}
						{op "="}
						{value 0}
					}
					{"delay"
						{time 0.4}
					}
					{"event"
						{event "dcg"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 1}
					}
					{"set_i"
						{var "user_nation$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "dcg_error$"}
						{op "="}
						{value 5}
					}
					{"set_i"
						{var "enemyid$"}
						{op "="}
						{value 0}
					}
					{"set_i"
						{var "arrows$"}
						{op "="}
						{value 0}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
						}
						{tag_remove fpc1}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
						}
						{tag_remove fpc2}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag fpc3}
									}
								}
								{include
									{state
										{state inactive}
									}
								}
							}
						}
						{tag_remove fpc3}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag fpc4}
									}
								}
								{include
									{state
										{state inactive}
									}
								}
							}
						}
						{tag_remove fpc4}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag fpc5}
									}
								}
								{include
									{state
										{state inactive}
									}
								}
							}
						}
						{tag_remove fpc5}
					}
					{"delay"
						{time 0.2}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag spawn_a}
									}
									{tag
										{tag spawn_b}
									}
								}
							}
							{sort
								{type entity}
								{entity
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
												{state "operatable user_control"}
											}
										}
										{exclude
											{state
												{state "inactive linked"}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{tag_add user_team}
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
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag spawn_b}
											}
										}
										{include
											{tag
												{tag user_team}
											}
										}
										{exclude
											{tag
												{tag spawn_a}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_team$"}
								{op "="}
								{value 2}
							}
							{"set_i"
								{var "arrows$"}
								{op "="}
								{value 1}
							}
							{"delete"
								{selector
									{ignore_captured_by_user 0}
									{tag arrow_enemy_b}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_team$"}
								{op "="}
								{value 1}
							}
							{"set_i"
								{var "arrows$"}
								{op "="}
								{value 2}
							}
							{"delete"
								{selector
									{ignore_captured_by_user 0}
									{tag arrow_enemy_a}
								}
							}
						}
					}
				}
			}
			{"dcg/nation_init"
				{condition
					{terms
						{"1.event"
							{id "dcg"}
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
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"call"
								{function "delete_rus_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_axis_player_support_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_fin_ai_planes"}
							}							
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 3}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_allies_player_support_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_ger_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_fin_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"delete"
								{selector
									{tag airsupportger}
								}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 4}
							}
							{"call"
								{function "delete_rus_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_axis_player_support_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_fin_ai_planes"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 5}
							}
							{"call"
								{function "delete_rus_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_axis_player_support_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_fin_ai_planes"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 7}
							}
							{"call"
								{function "delete_rus_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_axis_player_support_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_fin_ai_planes"}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 8}
							}
							{"call"
								{function "delete_rus_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_axis_player_support_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_fin_ai_planes"}
							}
						}
						{"default"
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_allies_player_support_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_ger_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"call"
								{function "delete_fin_ai_planes"}
							}
							{"delay"
								{time 1}
							}
							{"delete"
								{selector
									{tag airsupportfin}
								}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"set_i"
						{var "dcg_on$"}
						{op "="}
						{value 1}
					}
				}
			}
			{"dcg/enemyai_teamid"
				{condition
					{terms
						{"1.event"
							{id "dcg"}
						}
						{"2.cmp_i"
							{var "dcg_on$"}
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
					}
				}
				{actions
					{"delay"
						{time 0.1}
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
							{"delay"
								{time 0.1}
							}
							{"player"
								{selector
									{ignore_captured_by_user 0}
									{tag air_vehicle}
									{type vehicle}
								}
								{operation set}
								{player "2"}
							}
							{"player"
								{selector
									{ignore_captured_by_user 0}
									{tag pilot}
									{type human}
								}
								{operation set}
								{player "2"}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "enemyid$"}
								{op "="}
								{value 2}
							}
						}
						{"case"
							{condition
								{type entities}
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
											{relation
												{relation enemy}
												{player "1"}
											}
										}
									}
								}
							}
							{"delay"
								{time 0.2}
							}
							{"set_i"
								{var "enemyid$"}
								{op "="}
								{value 1}
							}
						}
						{"default"
							{"delay"
								{time 0.2}
							}
							{"set_i"
								{var "enemyid$"}
								{op "="}
								{value 1}
							}
							{"objective_progress"
								{set 0}
								{add 0}
								{title "dcg eid error 01 - report if you see this"}
							}
							{"delay"
								{time 5}
							}
							{"objective_progress"
								{hide}
								{set 0}
								{add 0}
								{title "dcg eid error 01 - report if you see this"}
							}
						}
					}
				}
			}
			{"dcg/player_nation"
				{condition
					{expression "1 & !2 & 3 & 4"}
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag player}
								{zone "gamezone"}
								{type human}
								{state "not dead"}
							}
						}
						{"2.cmp_i"
							{var "user_nation$"}
							{op ">"}
							{value 0}
						}
						{"3.cmp_i"
							{var "dcg_error$"}
							{op ">"}
							{value 0}
						}
						{"4.event"
							{id "dcg"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.9}
					}
					{"switch"
						{"case"
							{condition
								{type side}
								{side rus}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 1}
							}
						}
						{"case"
							{condition
								{type side}
								{side ger}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 2}
							}
						}
						{"case"
							{condition
								{type side}
								{side fin}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 2}
							}
						}
						{"case"
							{condition
								{type side}
								{side usa}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 4}
							}
						}
						{"case"
							{condition
								{type side}
								{side eng}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 5}
							}
						}
						{"case"
							{condition
								{type side}
								{side ita}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 6}
							}
						}
						{"case"
							{condition
								{type side}
								{side fra}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 7}
							}
						}
						{"case"
							{condition
								{type side}
								{side pol}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 8}
							}
						}
						{"case"
							{condition
								{type side}
								{side jap}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 9}
							}
						}
						{"case"
							{condition
								{type side}
								{side hun}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 10}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "user_nation$"}
								{op "="}
								{value 1}
							}
							{"delay"
								{time 0.1}
							}
							{"objective_progress"
								{set 0}
								{add 0}
								{title "dcg side 01 error - report if you see this"}
							}
						}
					}
				}
			}
			{"dcg/players_units"
				{condition
					{expression "(1 & 3) | (2 & 3)"}
					{terms
						{"1.entities"
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
										{prop
											{prop human}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{tag
											{tag player}
										}
										{tag
											{tag hidden}
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
								{ignore_captured_by_user 0}
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
											{state "inhabited user_control"}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
								}
							}
						}
						{"3.event"
							{id "dcg"}
						}
					}
				}
				{actions
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
									{prop
										{prop human}
									}
									{state
										{state user_control}
									}
								}
								{exclude
									{tag
										{tag hidden}
									}
									{tag
										{tag player}
									}
									{state
										{state dead}
									}
								}
							}
						}
						{tag_add player}
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
									{zone
										{zone "gamezone"}
									}
								}
								{include
									{prop
										{prop tank}
									}
									{state
										{state "inhabited user_control"}
									}
								}
								{exclude
									{tag
										{tag player_armor}
									}
									{tag
										{tag no_scavenge}
									}
								}
							}
						}
						{tag_add player_armor}
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
									{zone
										{zone "gamezone"}
									}
								}
								{include
									{prop
										{prop car}
									}
									{state
										{state "inhabited user_control"}
									}
								}
								{exclude
									{tag
										{tag player_car}
									}
									{tag
										{tag no_scavenge}
									}
								}
							}
						}
						{tag_add player_car}
					}
					{"delay"
						{time 0.5}
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
									{prop
										{prop vehicle}
									}
									{state
										{state "inhabited user_control"}
									}
								}
								{exclude
									{tag
										{tag player_veh}
									}
									{tag
										{tag no_scavenge}
									}
									{tag
										{tag player_armor}
									}
									{tag
										{tag player_car}
									}
								}
							}
						}
						{tag_add player_veh}
					}
					{"delay"
						{time 4.2}
					}
					{"trigger"
						{name "dcg/players_units"}
					}
				}
			}
			{## "dcg/initial_player_tag_cleanse"
				{condition
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"call"
						{function "cleanse_incorrect_player_tags"}
					}
				}
			}
			{"dcg/tag_flags_with_defense_level"
				{condition
					{terms
						{"1.cmp_i"
							{var "defensetier$"}
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
								{var "defensetier$"}
								{op "=="}
								{value 3}
							}
							{"entity_state"
								{selector
									{tag flag_point}
								}
								{tag_add defense_level_3}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "defensetier$"}
								{op "=="}
								{value 2}
							}
							{"entity_state"
								{selector
									{tag flag_point}
								}
								{tag_add defense_level_2}
							}
						}
						{"default"
							{"entity_state"
								{selector
									{tag flag_point}
								}
								{tag_add defense_level_1}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type side}
								{side ger}
							}
							{"entity_state"
								{selector
									{tag flag_point}
								}
								{tag_add ger}
							}
						}
						{"case"
							{condition
								{type side}
								{side fin}
							}
							{"entity_state"
								{selector
									{tag flag_point}
								}
								{tag_add fin}
							}
						}
						{"case"
							{condition
								{type side}
								{side rus}
							}
							{"entity_state"
								{selector
									{tag flag_point}
								}
								{tag_add rus}
							}
						}
					}
				}
			}
			{"dcg/count_flags"
				{condition
					{type 1}
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
												{tag flag_point}
											}
										}
										{include
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
								{count
									{op "=="}
									{value 1}
								}
							}
							{"set_i"
								{var "flag count$"}
								{op "="}
								{value 1}
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
												{tag flag_point}
											}
										}
										{include
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
								{count
									{op "=="}
									{value 2}
								}
							}
							{"set_i"
								{var "flag count$"}
								{op "="}
								{value 2}
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
												{tag flag_point}
											}
										}
										{include
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
								{count
									{op "=="}
									{value 3}
								}
							}
							{"set_i"
								{var "flag count$"}
								{op "="}
								{value 3}
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
												{tag flag_point}
											}
										}
										{include
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
								{count
									{op "=="}
									{value 4}
								}
							}
							{"set_i"
								{var "flag count$"}
								{op "="}
								{value 4}
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
												{tag flag_point}
											}
										}
										{include
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
								{count
									{op "=="}
									{value 5}
								}
							}
							{"set_i"
								{var "flag count$"}
								{op "="}
								{value 5}
							}
						}
					}
				}
			}                                                                                                                                                                                                         
	
; ========== Defense Setup Scripts ==========
			{"random_cmp_def"
				{condition
				}
				{actions
					{"fade"
						{on}
						{time 0.01}
						{color 0xff000000}
					}
					{"delay"
						{time 0.2}
					}
					{"fade"
						{time 15}
						{color 0xff000000}
					}
					{"delete"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag random_def}
									}
								}
								{include
									{tag
										{tag "1_a_1-3"}
									}
									{tag
										{tag "1_b_1-3"}
									}
								}
							}
							{amount 1
							}
						}
					}
					{"delete"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag random_def}
									}
								}
								{include
									{tag
										{tag "2_a_1-3"}
									}
									{tag
										{tag "2_b_1-3"}
									}
								}
							}
							{amount 1
							}
						}
					}
					{"delete"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag random_def}
									}
								}
								{include
									{tag
										{tag "3_a_1-3"}
									}
									{tag
										{tag "3_b_1-3"}
									}
								}
							}
							{amount 1
							}
						}
					}
					{"delete"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag random_def}
									}
								}
								{include
									{tag
										{tag "4_a_1-3"}
									}
									{tag
										{tag "4_b_1-3"}
									}
								}
							}
							{amount 1
							}
						}
					}
					{"delete"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag random_def}
									}
								}
								{include
									{tag
										{tag "5_a_1-3"}
									}
									{tag
										{tag "5_b_1-3"}
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
					{"set_i"
						{var "balance$"}
						{op "="}
						{value 1}
					}
					{"delay"
						{time 2}
					}
					{"actor_state"
						{selector
							{ignore_captured_by_user 0}
							{tag random_def}
							{type human}
							{state "not dead"}
						}
						{move_mode free}
					}
					{"delay"
						{time 1}
					}
					{"delete"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
										{state inactive}
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
					{"delay"
						{time 1}
					}
					{"event"
						{event "init"}
						{mode set}
						{delay 0}
					}
				}
			}
			{"cmp_def_1_tune"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag cmp_def}
								{zone "fpc1"}
								{type human}
								{state dead}
							}
						}
						{"2.event"
							{id "init2"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc1"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 12}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 12
									}
									{tag cmp_def}
									{zone "fpc1"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 8
									}
									{tag cmp_def}
									{zone "fpc1"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
					}
				}
			}
			{"cmp_def_2_tune"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag cmp_def}
								{zone "fpc2"}
								{type human}
								{state dead}
							}
						}
						{"2.event"
							{id "init2"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc2"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 12}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 12
									}
									{tag cmp_def}
									{zone "fpc2"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 8
									}
									{tag cmp_def}
									{zone "fpc2"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
					}
				}
			}
			{"cmp_def_3_tune"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag cmp_def}
								{zone "fpc3"}
								{type human}
								{state dead}
							}
						}
						{"2.event"
							{id "init2"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc3"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 12}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 12
									}
									{tag cmp_def}
									{zone "fpc3"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 8
									}
									{tag cmp_def}
									{zone "fpc3"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
					}
				}
			}
			{"cmp_def_4_tune"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag cmp_def}
								{zone "fpc4"}
								{type human}
								{state dead}
							}
						}
						{"2.event"
							{id "init2"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc4"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 12}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 12
									}
									{tag cmp_def}
									{zone "fpc4"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 8
									}
									{tag cmp_def}
									{zone "fpc4"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
					}
				}
			}
			{"cmp_def_5_tune"
				{condition
					{terms
						{"1.entities"
							{selector
								{ignore_captured_by_user 0}
								{tag cmp_def}
								{zone "fpc5"}
								{type human}
								{state dead}
							}
						}
						{"2.event"
							{id "init2"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc5"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 12}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 12
									}
									{tag cmp_def}
									{zone "fpc5"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"actor_state"
								{selector
									{ignore_captured_by_user 0}
									{amount 8
									}
									{tag cmp_def}
									{zone "fpc5"}
									{type human}
									{state "not dead"}
								}
								{move_mode zone}
								{move_radius 20}
								{ai
									{advance_ratio 1}
									{retreat_ratio 5}
								}
							}
						}
					}
				}
			}
			{"random_cmp_def_to_cover"
				{condition
					{expression "1 & 2 & !3"}
					{terms
						{"1.event"
							{id "init"}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag random_def}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
							{count
								{op ">"}
								{value 1}
							}
						}
						{"3.event"
							{id "init2"}
						}
					}
				}
				{actions
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
										{tag random_def}
									}
								}
								{include
									{prop
										{prop human}
									}
								}
								{exclude
									{tag
										{tag hidden}
									}
									{state
										{state dead}
									}
									{state
										{state inactive}
									}
								}
							}
							{amount 3
							}
						}
						{tag_add def_do_cover}
						{tag_remove random_def}
					}
					{"delay"
						{time 0.2}
					}
					{"actor_to_cover"
						{selector
							{ignore_captured_by_user 0}
							{tag def_do_cover}
							{type human}
							{state "not dead"}
						}
					}
					{"delay"
						{time 0.5}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag def_do_cover}
						}
						{tag_add rnd_def}
						{tag_remove def_do_cover}
					}
					{"delay"
						{time 0.5}
					}
					{"trigger"
						{name "random_cmp_def_to_cover"}
					}
				}
			}
			{"random_cmp_def_states"
				{condition
					{expression "1 & !2 & 3"}
					{terms
						{"1.event"
							{id "init"}
						}
						{"2.trigger"
							{name "random_cmp_def_to_cover"}
						}
						{"3.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag random_def}
										}
									}
									{include
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag hidden}
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
							{count
								{op "<<="}
								{value 1}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "init2"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.9}
					}
					{"actor_state"
						{selector
							{ignore_captured_by_user 0}
							{tag rnd_def}
							{type human}
							{state "not dead"}
						}
						{move_mode zone}
						{move_radius 45}
						{ai
							{advance_ratio 1}
							{retreat_ratio 5}
						}
					}
				}
			}
			{"cmp_def_covers_fix"
				{condition
					{terms
						{"1.event"
							{id "init2"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
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
											{zone
												{zone "fpc1"}
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
											{tag
												{tag rnd_def}
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
							{"delay"
								{time 0.1}
							}
							{"actor_to_cover"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rnd_def}
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
						}
						{"default"}
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
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc2"}
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
											{tag
												{tag rnd_def}
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
							{"delay"
								{time 0.1}
							}
							{"actor_to_cover"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rnd_def}
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
						}
						{"default"}
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
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc3"}
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
											{tag
												{tag rnd_def}
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
							{"delay"
								{time 0.1}
							}
							{"actor_to_cover"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rnd_def}
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
						}
						{"default"}
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
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc4"}
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
											{tag
												{tag rnd_def}
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
							{"delay"
								{time 0.1}
							}
							{"actor_to_cover"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rnd_def}
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
						}
						{"default"}
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
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc5"}
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
											{tag
												{tag rnd_def}
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
							{"delay"
								{time 0.1}
							}
							{"actor_to_cover"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag rnd_def}
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
						}
						{"default"}
					}
				}
			}
			{"cmp_def_b_mines"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag mine_planted}
										}
									}
									{include
										{tag
											{tag cmp_def}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 2.5}
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
												{tag fpc1}
											}
										}
										{include
											{zone
												{zone "fpc1"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag1"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_b}
													}
													{tag
														{tag mines_1_c}
													}
													{tag
														{tag mines_1_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_a}
													}
													{tag
														{tag mines_1_c}
													}
													{tag
														{tag mines_1_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_a}
													}
													{tag
														{tag mines_1_b}
													}
													{tag
														{tag mines_1_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_a}
													}
													{tag
														{tag mines_1_b}
													}
													{tag
														{tag mines_1_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "1_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "1_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
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
												{tag fpc2}
											}
										}
										{include
											{zone
												{zone "fpc2"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag2"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_b}
													}
													{tag
														{tag mines_2_c}
													}
													{tag
														{tag mines_2_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_a}
													}
													{tag
														{tag mines_2_c}
													}
													{tag
														{tag mines_2_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_a}
													}
													{tag
														{tag mines_2_b}
													}
													{tag
														{tag mines_2_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_a}
													}
													{tag
														{tag mines_2_b}
													}
													{tag
														{tag mines_2_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "2_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "2_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
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
												{tag fpc3}
											}
										}
										{include
											{zone
												{zone "fpc3"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag3"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_b}
													}
													{tag
														{tag mines_3_c}
													}
													{tag
														{tag mines_3_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_a}
													}
													{tag
														{tag mines_3_c}
													}
													{tag
														{tag mines_3_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_a}
													}
													{tag
														{tag mines_3_b}
													}
													{tag
														{tag mines_3_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_a}
													}
													{tag
														{tag mines_3_b}
													}
													{tag
														{tag mines_3_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "3_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "3_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
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
												{tag fpc4}
											}
										}
										{include
											{zone
												{zone "fpc4"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag4"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_b}
													}
													{tag
														{tag mines_4_c}
													}
													{tag
														{tag mines_4_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_a}
													}
													{tag
														{tag mines_4_c}
													}
													{tag
														{tag mines_4_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_a}
													}
													{tag
														{tag mines_4_b}
													}
													{tag
														{tag mines_4_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_a}
													}
													{tag
														{tag mines_4_b}
													}
													{tag
														{tag mines_4_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "4_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "4_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
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
												{tag fpc5}
											}
										}
										{include
											{zone
												{zone "fpc5"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag5"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_b}
													}
													{tag
														{tag mines_5_c}
													}
													{tag
														{tag mines_5_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_a}
													}
													{tag
														{tag mines_5_c}
													}
													{tag
														{tag mines_5_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_a}
													}
													{tag
														{tag mines_5_b}
													}
													{tag
														{tag mines_5_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_a}
													}
													{tag
														{tag mines_5_b}
													}
													{tag
														{tag mines_5_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "5_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "5_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			{"sandbag_mg_cmp_def"
				{condition
					{terms
						{"1.event"
							{id "init2"}
						}
					}
				}
				{actions
					{"delay"
						{time 15}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag cmp_mg}
						}
						{tag_remove cmp_mg}
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
										{tag heavy_at_gun}
									}
									{tag
										{tag medium_at_gun}
									}
									{tag
										{tag light_at_gun}
									}
									{tag
										{tag aaflak}
									}
									{tag
										{tag mg34_lafette}
									}
									{tag
										{tag mg42_lafette}
									}
									{tag
										{tag dshk_aa}
									}
									{tag
										{tag mortars}
									}
									{tag
										{tag artillery}
									}
								}
								{include
									{state
										{state inhabited}
									}
									{prop
										{prop vehicle}
									}
								}
								{exclude
									{tag
										{tag player_veh}
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
						{tag_add cmp_mg}
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
										{tag "artillery"}
									}
									{tag
										{tag mortars}
									}
									{tag
										{tag heavy_at_gun}
									}
									{tag
										{tag aaflak}
									}
								}
								{include
									{tag
										{tag cmp_mg}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag "medium_at_gun"}
									}
									{state
										{state user_control}
									}
									{tag
										{tag player_veh}
									}
									{tag
										{tag player}
									}
									{tag
										{tag preplaced_flak_gun}
									}
								}
							}
						}
						{effect sandbag_heavy_flak}
					}
					{"delay"
						{time 5.5}
					}
					{"effect"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag medium_at_gun}
									}
									{tag
										{tag dshk_aa}
									}
									{tag
										{tag mg34_lafette}
									}
									{tag
										{tag mg42_lafette}
									}
									{tag
										{tag "artillery"}
									}
								}
								{include
									{tag
										{tag cmp_mg}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag light_at_gun}
									}
									{state
										{state user_control}
									}
									{tag
										{tag player_veh}
									}
									{tag
										{tag aaflak}
									}
									{tag
										{tag player}
									}
									{tag
										{tag "88mm_flak18"}
									}
									{tag
										{tag "88mm_flak36"}
									}
									{tag
										{tag "85mm_52k"}
									}
								}
							}
						}
						{effect construction_sandbag_cannon_standard}
					}
					{"delay"
						{time 5.5}
					}
					{"effect"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag light_at_gun}
									}
									{tag
										{tag aaflak}
									}
								}
								{include
									{tag
										{tag cmp_mg}
									}
								}
								{exclude
									{tag
										{tag heavy_at_gun}
									}
									{tag
										{tag medium_at_gun}
									}
									{state
										{state user_control}
									}
									{tag
										{tag player_veh}
									}
									{tag
										{tag "40_mm_m1"}
									}
									{tag
										{tag qf40mm}
									}
									{tag
										{tag "40_mm_m1_fr"}
									}
									{tag
										{tag qf40mm_pol}
									}
								}
							}
						}
						{effect construction_sandbag_cannon_shallow}
					}
					{"delay"
						{time 5}
					}
					{"effect"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag cmp_def}
									}
									{tag
										{tag cmp_mg}
									}
								}
								{include
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
						{effect set_no_scavage}
					}
                    {"delay"
						{time 5}
					}
					{"ables"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag cmp_mg}
									}
								}
							}
						}
						{add emit_passangers_on_enemy}
					}					
				}
			}

; ========== Warning Scripts ==========
			{"dcg/warning_air"
				{condition
					{expression "!1 & 2"}
					{terms
						{"1.event"
							{id "talk_on"}
						}
						{"2.trigger"
							{name "dcg/ai_airstrike"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "talk_on"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 6}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"delay"
								{time 0.1}
							}
							{"talk"
								{selector
									{ignore_captured_by_user 0}
									{amount 1
									}
									{tag player}
									{zone "gamezone"}
									{type human}
									{state "not dead"}
								}
								{text "mission/multi/enemy_plane_alert2"}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"talk"
								{selector
									{ignore_captured_by_user 0}
									{amount 1
									}
									{tag player}
									{zone "gamezone"}
									{type human}
									{state "not dead"}
								}
								{text "mission/multi/enemy_plane_alert1"}
							}
						}
					}
					{"delay"
						{time 8}
					}
					{"event"
						{event "talk_on"}
						{mode reset}
						{delay 0}
					}
				}
			}
			{"dcg/warning_mines"
				{condition
					{expression "1 & 2 & !3 & !4"}
					{terms
						{"1.cmp_i"
							{var "tier2$"}
							{op ">"}
							{value 0}
						}
						{"2.near"
							{units
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
											{state "operatable user_control"}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{state
											{state dead}
										}
									}
								}
							}
							{near_to
								{ignore_captured_by_user 0}
								{tag dcg_mine_sign}
							}
							{distance 46}
						}
						{"3.event"
							{id "talk_on"}
						}
						{"4.cmp_i"
							{var "user_team$"}
							{op "=="}
							{value "def_team$"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "talk_on"}
						{mode set}
						{delay 0}
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
										{tag dcg_mine_sign}
									}
								}
							}
							{sort
								{type entity}
								{entity
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
												{state "operatable user_control"}
											}
										}
										{exclude
											{tag
												{tag hidden}
											}
											{state
												{state dead}
											}
										}
									}
								}
							}
							{amount 2
							}
						}
						{tag_add warning_talk}
						{tag_remove dcg_mine_sign}
					}
					{"delay"
						{time 0.5}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"delay"
								{time 0.1}
							}
							{"talk"
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
											{prop
												{prop human}
											}
											{state
												{state linked}
											}
										}
										{exclude
											{state
												{state dead}
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
										}
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag warning_talk}
										}
									}
									{amount 1
									}
								}
								{text "mission/multi/minefield_alert3"}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"delay"
								{time 0.1}
							}
							{"talk"
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
											{prop
												{prop human}
											}
											{state
												{state linked}
											}
										}
										{exclude
											{state
												{state dead}
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
										}
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag warning_talk}
										}
									}
									{amount 1
									}
								}
								{text "mission/multi/minefield_alert2"}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"talk"
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
											{prop
												{prop human}
											}
											{state
												{state linked}
											}
										}
										{exclude
											{state
												{state dead}
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
										}
									}
									{sort
										{type entity}
										{entity
											{ignore_captured_by_user 0}
											{tag warning_talk}
										}
									}
									{amount 1
									}
								}
								{text "mission/multi/minefield_alert1"}
							}
						}
					}
					{"delay"
						{time 8}
					}
					{"event"
						{event "talk_on"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{ignore_captured_by_user 0}
							{tag warning_talk}
						}
						{tag_remove warning_talk}
					}
					{"delay"
						{time 300}
					}
					{"trigger"
						{name "dcg/warning_mines"}
					}
				}
			}

; ========== Music Scripts ==========
			{"music/music_regular"
				{condition
					{expression "1 & !2"}
					{terms
						{"1.event"
							{id "music_regular"}
						}
						{"2.event"
							{id "music_intense"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_regular"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/ambient_2.wav"}
								{stop_all}
								{volume game}
								{fade 5}
							}
							{"delay"
								{time 107}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/ambient_3.wav"}
								{stop_all}
								{volume game}
								{fade 5}
							}
							{"delay"
								{time 94}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/ambient_1.wav"}
								{stop_all}
								{volume game}
								{fade 5}
							}
							{"delay"
								{time 131}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_detect"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 1}
					}
					{"event"
						{event "music_reset"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.5}
					}
					{"trigger"
						{name "music/music_regular"}
					}
				}
			}
			{"music/start"
				{condition
					{terms
						{"1.event"
							{id "music_start"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_regular"}
						{mode set}
						{delay 0}
					}
				}
			}
			{"music/music_reset"
				{condition
					{terms
						{"1.event"
							{id "music_reset"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "music_intense$"}
								{op "=="}
								{value 0}
							}
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "music_regular"}
								{mode set}
								{delay 0}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "music_intense"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_intense$"}
								{op "="}
								{value 0}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"event"
						{event "music_reset"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "music/music_reset"}
					}
				}
			}
			{"music/init"
				{condition
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/rus_ambient_lvl1.wav"}
								{stop_all}
								{volume game}
								{fade 5}
							}
							{"delay"
								{time 100}
							}
							{"music"
								{stop "/music/rus_ambient_lvl1.wav"}
								{volume game}
								{fade 5}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/ambient_4.wav"}
								{stop_all}
								{volume game}
								{fade 3}
							}
							{"delay"
								{time 167}
							}
							{"music"
								{stop "/music/ambient_4.wav"}
								{volume game}
								{fade 5}
							}
						}
					}
					{"delay"
						{time 3}
					}
					{"event"
						{event "music_start"}
						{mode set}
						{delay 0}
					}
					{"set_i"
						{var "music_intense$"}
						{op "="}
						{value 0}
					}
				}
			}
			{"music/music_intense"
				{condition
					{expression "1 & !2"}
					{terms
						{"1.event"
							{id "music_intense"}
						}
						{"2.event"
							{id "music_regular"}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_intense"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/ger_battle_lvl1.wav"}
								{stop_all}
								{volume game}
								{fade 5}
							}
							{"delay"
								{time 178}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.4}
							}
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/ger_battle_lvl2.wav"}
								{stop_all}
								{volume game}
								{fade 5}
							}
							{"delay"
								{time 114}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"music"
								{start "/music/rus_battle_lvl1.wav"}
								{stop_all}
								{volume game}
								{fade 5}
							}
							{"delay"
								{time 223}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_detect"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 1}
					}
					{"event"
						{event "music_reset"}
						{mode set}
						{delay 0}
					}
					{"delay"
						{time 0.5}
					}
					{"trigger"
						{name "music/music_intense"}
					}
				}
			}
			{"music/detect"
				{condition
					{terms
						{"1.event"
							{id "music_detect"}
						}
						{"2.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "fpc1"}
										}
										{zone
											{zone "fpc2"}
										}
										{zone
											{zone "fpc3"}
										}
										{zone
											{zone "fpc4"}
										}
										{zone
											{zone "fpc5"}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state dead}
										}
									}
								}
							}
							{count
								{op ">"}
								{value 2}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.2}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"set_i"
								{var "music_intense$"}
								{op "="}
								{value 1}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"event"
						{event "music_detect"}
						{mode reset}
						{delay 0}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "music/detect"}
					}
				}
			}


; ========== Old Scripts ==========			
			{## "balance_cmp_def"
				{condition
					{terms
						{"1.cmp_i"
							{var "balance$"}
							{op "=="}
							{value 1}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc1"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 6}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc1"}
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
											{tag
												{tag random_def}
											}
										}
									}
									{amount 3
									}
								}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc2"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 6}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc2"}
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
											{tag
												{tag random_def}
											}
										}
									}
									{amount 3
									}
								}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc3"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 6}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc3"}
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
											{tag
												{tag random_def}
											}
										}
									}
									{amount 3
									}
								}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc4"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 6}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc4"}
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
											{tag
												{tag random_def}
											}
										}
									}
									{amount 3
									}
								}
							}
						}
						{"default"}
					}
					{"delay"
						{time 0.2}
					}
					{"switch"
						{"case"
							{condition
								{type entities}
								{selector
									{ignore_captured_by_user 0}
									{tag cmp_def}
									{zone "fpc5"}
									{type human}
									{state "not dead"}
								}
								{count
									{op ">"}
									{value 6}
								}
							}
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{zone
												{zone "fpc5"}
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
											{tag
												{tag random_def}
											}
										}
									}
									{amount 3
									}
								}
							}
						}
						{"default"}
					}
				}
			}
			{## "pre_dlc_cmp_def_b_mines"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag mine_planted}
										}
									}
									{include
										{tag
											{tag cmp_def}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 2.5}
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
												{tag fpc1}
											}
										}
										{include
											{zone
												{zone "fpc1"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag1"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_b}
													}
													{tag
														{tag mines_1_c}
													}
													{tag
														{tag mines_1_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_a}
													}
													{tag
														{tag mines_1_c}
													}
													{tag
														{tag mines_1_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_a}
													}
													{tag
														{tag mines_1_b}
													}
													{tag
														{tag mines_1_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_1_a}
													}
													{tag
														{tag mines_1_b}
													}
													{tag
														{tag mines_1_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "1_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "1_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
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
												{tag fpc2}
											}
										}
										{include
											{zone
												{zone "fpc2"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag2"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_b}
													}
													{tag
														{tag mines_2_c}
													}
													{tag
														{tag mines_2_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_a}
													}
													{tag
														{tag mines_2_c}
													}
													{tag
														{tag mines_2_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_a}
													}
													{tag
														{tag mines_2_b}
													}
													{tag
														{tag mines_2_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_2_a}
													}
													{tag
														{tag mines_2_b}
													}
													{tag
														{tag mines_2_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "2_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "2_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
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
												{tag fpc3}
											}
										}
										{include
											{zone
												{zone "fpc3"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag3"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_b}
													}
													{tag
														{tag mines_3_c}
													}
													{tag
														{tag mines_3_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_a}
													}
													{tag
														{tag mines_3_c}
													}
													{tag
														{tag mines_3_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_a}
													}
													{tag
														{tag mines_3_b}
													}
													{tag
														{tag mines_3_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_3_a}
													}
													{tag
														{tag mines_3_b}
													}
													{tag
														{tag mines_3_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "3_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "3_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
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
												{tag fpc4}
											}
										}
										{include
											{zone
												{zone "fpc4"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag4"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_b}
													}
													{tag
														{tag mines_4_c}
													}
													{tag
														{tag mines_4_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_a}
													}
													{tag
														{tag mines_4_c}
													}
													{tag
														{tag mines_4_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_a}
													}
													{tag
														{tag mines_4_b}
													}
													{tag
														{tag mines_4_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_4_a}
													}
													{tag
														{tag mines_4_b}
													}
													{tag
														{tag mines_4_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "4_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "4_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 0.2}
					}
					{## "switch"
						{"case"
							{condition
								{type entities}
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag fpc5}
											}
										}
										{include
											{zone
												{zone "fpc5"}
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
							{"delay"
								{time 0.1}
							}
							{"event"
								{event "flag5"}
								{mode set}
								{delay 0}
							}
							{"delay"
								{time 0.1}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_b}
													}
													{tag
														{tag mines_5_c}
													}
													{tag
														{tag mines_5_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_a}
													}
													{tag
														{tag mines_5_c}
													}
													{tag
														{tag mines_5_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_a}
													}
													{tag
														{tag mines_5_b}
													}
													{tag
														{tag mines_5_d}
													}
												}
											}
										}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.24}
									}
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mines_5_a}
													}
													{tag
														{tag mines_5_b}
													}
													{tag
														{tag mines_5_c}
													}
												}
											}
										}
									}
								}
								{"default"
									{"delay"
										{time 0.1}
									}
									{"delete"
										{selector
											{source advanced}
											{ignore_captured_by_user 0}
											{group
												{select
													{tag
														{tag mine_planted}
													}
													{tag
														{tag dcg_mine_sign}
													}
												}
												{include
													{tag
														{tag "5_b_2-3"}
													}
												}
											}
										}
									}
								}
							}
						}
						{"default"
							{"delay"
								{time 0.1}
							}
							{"delete"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
									{group
										{select
											{tag
												{tag mine_planted}
											}
											{tag
												{tag dcg_mine_sign}
											}
										}
										{include
											{tag
												{tag "5_b_2-3"}
											}
											{state
												{state inactive}
											}
										}
									}
								}
							}
						}
					}
				}
			}			
			{## "sound"
				{disabled}
				{condition
				}
				{actions
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"delay"
								{time 10}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.3}
							}
							{"delay"
								{time 45}
							}
						}
						{"default"
							{"delay"
								{time 90}
							}
						}
					}
					{"sound"
						{name "world/environment_ambient"}
					}
				}
			}
			{## "dcg/flag count/flagcount1"
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
							{"set_i"
								{var "flag count$"}
								{op "+"}
								{value 1}
							}
						}
					}
				}
			}				
			{## "dcg/flag count/flagcount2"
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
							{"set_i"
								{var "flag count$"}
								{op "+"}
								{value 1}
							}
						}
					}
				}
			}
			{## "dcg/flag count/flagcount3"
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
							{"set_i"
								{var "flag count$"}
								{op "+"}
								{value 1}
							}
							{"delay"
								{time 9999}
							}
						}
					}
				}
			}
			{## "dcg/flag count/flagcount4"
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
							{"set_i"
								{var "flag count$"}
								{op "+"}
								{value 1}
							}
						}
					}
				}
			}
			{## "dcg/flag count/flagcount5"
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
							{"set_i"
								{var "flag count$"}
								{op "+"}
								{value 1}
							}
						}
					}
				}
			}
			{"dcg/is_early_stage_mission"
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
						{"2.cmp_i"
							{var "flag count$"}
							{op "<<="}
							{value 2}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"set_i"
						{var "early_stage_missions$"}
						{op "="}
						{value 1}
					}
				}
			}
			
