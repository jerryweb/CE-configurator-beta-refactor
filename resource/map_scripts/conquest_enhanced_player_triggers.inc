			{## "officer_commands/officer_callin_talk"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag artillery_aim}
										}
									}
									{exclude
										{tag
											{tag failed_callin}
										}
										{tag
											{tag acknowledged}
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
											{tag paradrophere}
										}
									}
									{exclude
										{tag
											{tag failed_callin}
										}
										{tag
											{tag acknowledged}
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
											{tag pointer_help}
										}
									}
									{exclude
										{tag
											{tag failed_callin}
										}
										{tag
											{tag acknowledged}
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
											{tag flare}
										}
									}
									{exclude
										{tag
											{tag failed_callin}
										}
										{tag
											{tag acknowledged}
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
											{tag pointer_going}
										}
									}
									{exclude
										{tag
											{tag acknowledged}
										}
										{tag
											{tag failed_callin}
										}
									}
								}
							}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 0.3}
								}
								{"talk"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag officer}
												}
											}
											{include
												{tag
													{tag player}
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
										{amount 1
										}
									}
									{text "mission/multi/request_paradrop"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.6}
								}
								{"talk"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag officer}
												}
											}
											{include
												{tag
													{tag player}
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
										{amount 1
										}
									}
									{text "mission/multi/request_paradrop_2"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.9}
								}
								{"talk"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag officer}
												}
											}
											{include
												{tag
													{tag player}
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
										{amount 1
										}
									}
									{text "mission/multi/request_paradrop_3"}
								}
							}
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
											{tag artillery_aim}
										}
									}
									{exclude
										{tag
											{tag acknowledged}
										}
										{tag
											{tag failed_callin}
										}
									}
								}
							}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 0.3}
								}
								{"talk"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag officer}
												}
											}
											{include
												{tag
													{tag player}
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
										{amount 1
										}
									}
									{text "mission/multi/request_air_recon"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.6}
								}
								{"talk"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag officer}
												}
											}
											{include
												{tag
													{tag player}
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
										{amount 1
										}
									}
									{text "mission/multi/request_air_recon_2"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.9}
								}
								{"talk"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag officer}
												}
											}
											{include
												{tag
													{tag player}
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
										{amount 1
										}
									}
									{text "mission/multi/request_air_recon_3"}
								}
							}
						}
						{## "entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag artillery_aim}
										}
									}
									{exclude
										{tag
											{tag acknowledged}
										}
										{tag
											{tag failed_callin}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add acknowledged}
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
											{tag flare}
										}
									}
									{exclude
										{tag
											{tag acknowledged}
										}
										{tag
											{tag failed_callin}
										}
									}
								}
							}
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
										{tag officer}
										{zone "gamezone"}
										{type human}
										{state operatable}
									}
									{text "mission/multi/request_supply_drop"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.6}
								}
								{"talk"
									{selector
										{amount 1
										}
										{tag officer}
										{zone "gamezone"}
										{type human}
										{state operatable}
									}
									{text "mission/multi/request_supply_drop_2"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.9}
								}
								{"talk"
									{selector
										{amount 1
										}
										{tag officer}
										{zone "gamezone"}
										{type human}
										{state operatable}
									}
									{text "mission/multi/request_supply_drop_3"}
								}
							}
						}
					}
					{"delay"
						{time 3}
					}
					{"if"
						{condition
							{type cmp_i}
							{var "radiocar$"}
							{op "=="}
							{value 0}
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
										{zone "gamezone"}
										{type human}
										{state operatable}
									}
									{text "mission/multi/need_radio_car"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.6}
								}
								{"talk"
									{selector
										{amount 1
										}
										{tag player}
										{zone "gamezone"}
										{type human}
										{state operatable}
									}
									{text "mission/multi/need_radio_car_2"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.9}
								}
								{"talk"
									{selector
										{amount 1
										}
										{tag player}
										{zone "gamezone"}
										{type human}
										{state operatable}
									}
									{text "mission/multi/need_radio_car_3"}
								}
							}
						}
					}
					{"if"
						{condition
							{type cmp_i}
							{var "radiocar$"}
							{op ">"}
							{value 0}
						}
						{"if"
							{condition
								{type entities}
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag officer}
											}
										}
										{include
											{tag
												{tag player}
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
											{tag
												{tag hidden}
											}
										}
									}
								}
								{count
									{op "<<"}
									{value 1}
								}
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
											{zone "gamezone"}
											{type human}
											{state operatable}
										}
										{text "mission/multi/need_officer"}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.6}
									}
									{"talk"
										{selector
											{amount 1
											}
											{tag player}
											{zone "gamezone"}
											{type human}
											{state operatable}
										}
										{text "mission/multi/need_officer_2"}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.9}
									}
									{"talk"
										{selector
											{amount 1
											}
											{tag player}
											{zone "gamezone"}
											{type human}
											{state operatable}
										}
										{text "mission/multi/need_officer_3"}
									}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "officer_commands/officer_callin_talk"}
					}
				}
			}
			{## "officer_commands/wait_for_initial_callin"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
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
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{tag
											{tag hidden}
										}
									}
								}
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
					{"timer"
						{time 30}
						{title "mission/multi/prepare_inital_officer_callin_scripts"}
					}
				}
			}
			{"player_scripts/player_paratroopers/spawn_player_para_plane"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag paradrophere}
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
										{tag
											{tag officer}
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
											{tag player_para_ready}
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
									{exclude
										{state
											{state dead}
										}
										{zone
											{zone "combat"}
										}
									}
								}
							}
							{count
								{op ">"}
								{value 4}
							}
						}
						{"4.cmp_i"
							{var "radiocar$"}
							{op "=="}
							{value 1}
						}
						{"5.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_drop_plane}
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
												{tag player_drop_plane}
											}
										}
										{include
											{tag
												{tag german}
											}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "7"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "8"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "9"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "10"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "12"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "11"}
									}
									{"actor_state"
										{selector
											{tag soviet}
											{player "11"}
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
												{tag player_drop_plane}
											}
										}
										{include
											{tag
												{tag soviet}
											}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "11"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "12"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "10"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "9"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "8"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "7"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
											{player "7"}
											{state operatable}
										}
										{control AI}
									}
								}
							}
						}
					}
					{"set_i"
						{var "airscripts$"}
						{op "="}
						{value 1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag player_drop_plane}
								}
							}
							{include
								{state
									{state inhabited}
								}
								{state
									{state operatable}
								}
								{tag
									{tag hidden}
								}
							}
						}
						{amount 1
						}
					}
					{"air_state"
						{selector
							{source current}
						}
						{altitude 45}
					}
					{"air_attack"
						{selector
							{source current}
						}
						{drop orders}
						{enemies
							{tag cmp_def}
						}
						{clone}
						{move_from_back}
						{force_placement}
						{random_weapon 0}
						{attack_altitude 45}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag player_drop_plane}
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
					{## "actor_to_waypoint"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player_drop_plane}
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
						{drop orders}
						{waypoint "0"}
						{clone}
						{approach "safe teleport & rotate"}
					}
					{"actor_state"
						{selector
							{source current}
						}
						{fire_mode hold}
					}
					{"delay"
						{time 0.5}
					}
					{"air_state"
						{selector
							{source current}
						}
						{drop orders}
						{altitude 45}
					}
					{"delay"
						{time 0.5}
					}
					{"action"
						{selector
							{source current}
						}
						{drop "orders sensor senseless"}
						{action move}
						{target
							{tag pointer_going}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_add flying_to_drop_zone}
					}
					{"delay"
						{time 5}
					}
					{"talk"
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
									{prop
										{prop human}
									}
								}
							}
						}
						{text "mission/multi/paratrooper_pilot_response"}
					}
					{"delay"
						{time 120}
					}
					{"set_i"
						{var "airscripts$"}
						{op "="}
						{value 0}
					}
					{"trigger"
						{name "player_scripts/player_paratroopers/spawn_player_para_plane"}
					}
				}
			}
			{"player_scripts/player_paratroopers/drop_player_paratroopers"
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag flying_to_drop_zone}
										}
									}
									{include
										{tag
											{tag player_drop_plane}
										}
										{state
											{state "operatable inhabited"}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{near_to
								{tag paradrophere}
							}
							{distance 100}
						}
					}
				}
				{actions
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag flying_to_drop_zone}
								}
							}
							{include
								{tag
									{tag player_drop_plane}
								}
								{state
									{state "operatable inhabited"}
								}
							}
							{exclude
								{state
									{state inactive}
								}
							}
						}
					}
					{"action"
						{selector
							{source current}
						}
						{drop orders}
						{action move}
						{waypoint "19"}
					}
					{"delay"
						{time 0.5}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_add dropping_player_paratroppers}
						{tag_remove flying_to_drop_zone}
					}
					{"delay"
						{time 0.5}
					}
					{"loop" 12
						{"unlink"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_on_plane}
										}
									}
									{include
										{state
											{state "operatable linked"}
										}
										{prop
											{prop human}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
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
							}
						}
						{"delay"
							{time 0.5}
						}
					}
					{"actor_to_waypoint"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag dropping_player_paratroppers}
									}
								}
								{include
									{state
										{state "operatable inhabited"}
									}
								}
								{exclude
									{state
										{state inactive}
									}
								}
							}
						}
						{drop orders}
						{waypoint "19"}
					}
					{"entity_state"
						{selector
							{tag dropping_player_paratroppers}
						}
						{tag_add player_going_home}
						{tag_remove dropping_player_paratroppers}
					}
					{"set_i"
						{var "airscripts$"}
						{op "="}
						{value 0}
					}
					{"trigger"
						{name "player_scripts/player_paratroopers/drop_player_paratroopers"}
					}
				}
			}
			{"player_scripts/player_paratroopers/add_player_paratroopers_to_plane"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag paradrophere}
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
										{tag
											{tag officer}
										}
									}
								}
							}
						}
						{"4.cmp_i"
							{var "radiocar$"}
							{op "=="}
							{value 1}
						}
						{"5.entities"
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet_camo"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet_net"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet_winter"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet_net_winter"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet_desert"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet_net_desert"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "ger_m38_helmet_camo_blue"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet4_jap_para"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "snlf_helmet"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "snlf_tropical"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_ita_m33_mvsn"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "soviet_budinovka"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "soviet_budinovka_down"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_usa_506th"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_usa_506th_camo"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_usa_506th_camo_nco"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_usa_506th_camo_officer"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_usa_506th_nco"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_usa_506th_officer"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_airborne_usa2"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_eng_para"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_eng_para_camo"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "helmet_eng_para_net"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
										{state
											{state user_control}
										}
										{with_item
											{type existance}
											{item "cap_eng_beret_commando"}
										}
									}
									{exclude
										{tag
											{tag player_para_ready}
										}
										{tag
											{tag player_on_plane}
										}
										{state
											{state linked}
										}
										{zone
											{zone "combat"}
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
					{"select"
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet_camo"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet_net"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet_winter"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet_net_winter"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet_desert"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet_net_desert"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "ger_m38_helmet_camo_blue"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet4_jap_para"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "snlf_helmet"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "snlf_tropical"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_ita_m33_mvsn"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "soviet_budinovka"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "soviet_budinovka_down"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_usa_506th"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_usa_506th_camo"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_usa_506th_camo_nco"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_usa_506th_camo_officer"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_usa_506th_nco"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_usa_506th_officer"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_airborne_usa2"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_eng_para"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_eng_para_camo"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "helmet_eng_para_net"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
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
								{state
									{state user_control}
								}
								{with_item
									{type existance}
									{item "cap_eng_beret_commando"}
								}
							}
							{exclude
								{tag
									{tag player_para_ready}
								}
								{tag
									{tag player_on_plane}
								}
								{state
									{state linked}
								}
								{zone
									{zone "combat"}
								}
							}
						}
						{amount 12
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_add player_para_ready}
					}
					{"delay"
						{time 0.5}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag player_para_ready}
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
								{tag
									{tag player_on_plane}
								}
							}
						}
					}
					{"ables"
						{selector
							{source current}
						}
						{drop orders}
						{remove select}
					}
					{"actor_state"
						{selector
							{source current}
						}
						{control user}
						{weapon_prepare off}
					}
					{"delay"
						{time 3}
					}
					{"linker"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player_drop_plane}
									}
								}
								{include
									{state
										{state operatable}
									}
									{tag
										{tag flying_to_drop_zone}
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
										{tag loaded_player_paras}
									}
								}
							}
							{amount 1
							}
						}
						{entities
							{source advanced}
							{group
								{select
									{tag
										{tag player_para_ready}
									}
								}
								{include
									{prop
										{prop human}
									}
									{tag
										{tag player}
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
										{tag player_on_plane}
									}
									{state
										{state dead}
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
										{tag flying_to_drop_zone}
									}
								}
								{include
									{tag
										{tag player_drop_plane}
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
									{tag
										{tag loaded_with_paras}
									}
								}
							}
						}
						{tag_add loaded_with_paras}
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
										{tag player_para_ready}
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
										{state linked}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{state
										{state inactive}
									}
									{tag
										{tag player_on_plane}
									}
									{state
										{state dead}
									}
								}
							}
						}
						{tag_add player_on_plane}
						{tag_remove player_para_ready}
					}
					{"delay"
						{time 1}
					}
					{"ables"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player_on_plane}
									}
								}
								{include
									{prop
										{prop human}
									}
									{state
										{state linked}
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
							{amount 12
							}
						}
						{drop orders}
						{add select}
					}
					{"delay"
						{time 1}
					}
					{"ables"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player_on_plane}
									}
								}
								{include
									{prop
										{prop human}
									}
									{state
										{state linked}
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
						{drop orders}
						{add select}
					}
					{"set_i"
						{var "officeractions$"}
						{op "+"}
						{value 1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "officeractions$"}
								{op ">="}
								{value 4}
							}
							{"delete"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag player}
											}
										}
										{include
											{tag
												{tag officer}
											}
											{state
												{state operatable}
											}
										}
									}
									{amount 1
									}
								}
							}
							{"set_i"
								{var "officeractions$"}
								{op "-"}
								{value 1}
							}
						}
					}
					{## "talk"
						{selector
							{tag player}
							{zone "gamezone"}
							{type human}
							{state operatable}
						}
						{text "mission/multi/paratrooper_callin"}
					}
					{"timer"
						{time 120}
						{title "mission/multi/paratrooper_callin"}
					}
					{"delay"
						{time 120}
					}
					{"trigger"
						{name "player_scripts/player_paratroopers/add_player_paratroopers_to_plane"}
					}
				}
			}
			{"player_scripts/player_paratroopers/give_back_player_paras"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag landed}
										}
									}
									{include
										{tag
											{tag player}
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
											{state inactive}
										}
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
						{group
							{select
								{tag
									{tag landed}
								}
							}
							{include
								{tag
									{tag player}
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
									{state inactive}
								}
								{state
									{state dead}
								}
								{state
									{state linked}
								}
							}
						}
						{amount 2
						}
					}
					{"ables"
						{selector
							{source current}
						}
						{drop orders}
						{add select}
					}
					{"delay"
						{time 0.1}
					}
					{"actor_state"
						{selector
							{source current}
						}
						{control user}
						{weapon_prepare on}
					}
					{"delay"
						{time 0.1}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_remove landed}
					}
					{"trigger"
						{name "player_scripts/player_paratroopers/give_back_player_paras"}
					}
				}
			}
			{## "player_scripts/player_paratroopers/set_correct_nation"
				{disabled}
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
						}
					}
				}
				{actions
					{"delay"
						{time 2}
					}
					{"switch"
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
												{tag player_drop_plane}
											}
										}
										{include
											{tag
												{tag german}
											}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "7"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "8"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "9"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "10"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "12"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag soviet}
													}
												}
											}
										}
										{operation set}
										{player "11"}
									}
									{"actor_state"
										{selector
											{tag soviet}
											{player "11"}
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
												{tag player_drop_plane}
											}
										}
										{include
											{tag
												{tag soviet}
											}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "11"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "12"}
									}
									{"actor_state"
										{selector
											{tag soviet}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "10"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "9"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "8"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
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
														{tag player_drop_plane}
													}
												}
												{include
													{tag
														{tag german}
													}
												}
											}
										}
										{operation set}
										{player "7"}
									}
									{"actor_state"
										{selector
											{tag player_drop_plane}
											{player "7"}
											{state operatable}
										}
										{control AI}
									}
								}
							}
						}
					}
					{## "delay"
						{time 500}
					}
					{"trigger"
						{name "player_scripts/player_paratroopers/set_correct_nation"}
					}
				}
			}	
			{## "player_scripts/conquest_enhanced/ammotruck"
				{disabled}
				{condition
					{terms
						{"1.entities"
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
											{tag ammo}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 11}
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
									{with_item
										{type amount}
										{item "repair_kit"}
										{min 8}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{with_item
										{type existance}
										{item "wirecutters"}
									}
									{tag
										{tag ammo}
									}
								}
							}
						}
						{tag_add ammo}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "atrifle_ger" "ammo"}
								{amount 300}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "mgun_ger" "belt" "ammo"}
								{amount 3000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "mgun_ger" "doubledrum" "ammo"}
								{amount 3000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "mgun_ger" "drum" "ammo"}
								{amount 3000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "fg42" "ammo"}
								{amount 1000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "rifle_ger" "gewehr" "ammo"}
								{amount 900}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "mgun_ger" "mg13" "ammo"}
								{amount 1000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "stg44" "ammo"}
								{amount 900}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "mp40" "ammo"}
								{amount 900}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "k98_antitank" "ammo"}
								{amount 100}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "panzershreck" "ammo"}
								{amount 30}
							}
						}
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 2}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "atrifle_rus" "ammo"}
								{amount 300}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "mgun_rus" "dp" "ammo"}
								{amount 3000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "mgun_rus" "dt" "ammo"}
								{amount 3000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "ppd_drum" "ammo"}
								{amount 3000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "pps_stick" "ammo"}
								{amount 1000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "ppsh_drum" "ammo"}
								{amount 900}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "ppsh_stick" "ammo"}
								{amount 1000}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "rifle_rus" "svt" "ammo"}
								{amount 900}
							}
							{"inventory"
								{selector
									{tag ammo}
									{state operatable}
								}
								{action add}
								{item "bazooka" "ammo"}
								{amount 30}
							}
						}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/ammotruck"}
					}
				}
			}
			{## "player_scripts/conquest_enhanced/mediccarry"
				{disabled}
				{condition
					{expression "1& 2 & 3 & !4 | 5 | !6"}
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
										{tag
											{tag bleeding}
										}
									}
								}
							}
						}
						{"3.entities"
							{selector
								{tag revivepoint}
							}
						}
						{"4.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{tag
											{tag bleeding}
										}
									}
								}
								{amount 1
								}
							}
							{near_to
								{tag revivepoint}
							}
							{distance 3}
						}
						{"5.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag carry}
										}
									}
									{include
										{with_item
											{type amount}
											{item "human"}
											{min 1}
										}
									}
								}
							}
							{near_to
								{tag revivepoint}
							}
							{distance 3}
						}
						{"6.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag carry}
										}
									}
									{include
										{state
											{state operatable}
										}
										{with_item
											{type amount}
											{item "human"}
											{min 1}
										}
									}
								}
							}
							{near_to
								{tag revivepoint}
							}
							{distance 3}
						}
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag carry}
										}
									}
									{include
										{state
											{state operatable}
										}
									}
									{exclude
										{with_item
											{type amount}
											{item "human"}
											{min 1}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{tag
											{tag bleeding}
										}
									}
									{exclude
										{tag
											{tag nope}
										}
									}
								}
							}
							{distance 50}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"inventory"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag carry}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "human"}
										{min 1}
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
												{tag bleeding}
											}
										}
										{include
											{tag
												{tag player}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{action pickup}
						{entity
							{source advanced}
							{group
								{select
									{tag
										{tag player}
									}
								}
								{include
									{tag
										{tag bleeding}
									}
								}
								{exclude
									{tag
										{tag nope}
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
												{tag revivepoint}
											}
										}
									}
									{amount 1
									}
								}
								{mode farthest}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{inventory_items
										{from_entities
											{tag carry}
										}
									}
								}
								{include
									{prop
										{prop creature}
									}
								}
								{exclude
									{tag
										{tag nope}
									}
								}
							}
						}
						{tag_add nope}
					}
					{"delay"
						{time 2.1}
					}
					{"inventory"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag carry}
									}
								}
								{include
									{state
										{state operatable}
									}
									{with_item
										{type amount}
										{item "human"}
										{min 1}
									}
								}
							}
							{amount 1
							}
						}
						{action drop_to}
						{entity
							{source advanced}
							{group
								{select
									{tag
										{tag revivepoint2}
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
												{tag carry}
											}
										}
										{include
											{state
												{state operatable}
											}
											{with_item
												{type amount}
												{item "human"}
												{min 1}
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
						{time 2.1}
					}
					{"delay"
						{time 0.1}
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
											{tag
												{tag nope}
											}
										}
										{exclude
											{tag
												{tag bleeding}
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
												{tag player}
											}
										}
										{include
											{tag
												{tag nope}
											}
										}
										{exclude
											{tag
												{tag bleeding}
											}
										}
									}
								}
								{tag_remove nope}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/mediccarry"}
					}
				}
			}
			{"player_scripts/conquest_enhanced/autoresupplytest2"
				{condition
					{terms
						{"3.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag ammo}
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
						{"1.entities"
							{selector
								{tag player}
							}
						}
						{"2.near"
							{units
								{tag noammo}
								{state operatable}
							}
							{near_to
								{tag ammo}
								{state operatable}
							}
							{distance 90}
						}
					}
				}
				{actions
					{"delay"
						{time 0.1}
					}
					{"action"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag noammo}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag noresupply}
									}
									{with_item
										{type amount}
										{item "tent_kit"}
										{min 1}
									}
									{state
										{state inactive}
									}
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
									{tag ammo}
								}
							}
						}
						{action move}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag ammo}
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
									{tag
										{tag hidden}
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
												{tag noammo}
											}
										}
										{include
											{state
												{state operatable}
											}
										}
										{exclude
											{tag
												{tag noresupply}
											}
										}
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
										{tag noammo}
									}
								}
								{include
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag noresupply}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag ammo}
								}
							}
							{amount 1
							}
						}
						{tag_remove noammo}
					}
					{"delay"
						{time 7}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/autoresupplytest2"}
					}
				}
			}
			{## "player_scripts/conquest_enhanced/callinbarrage"
				{disabled}
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag pointer_attack}
										}
									}
									{include
										{discovered}
									}
								}
							}
						}
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
										{tag
											{tag officer}
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
					{"set_i"
						{var "officeractions$"}
						{op "+"}
						{value 3}
					}
					{"delay"
						{time 0.1}
					}
					{"spawn"
						{entity "mortar_single_120_dummy"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "mortar_single_120_dummy"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "mortar_single_120_dummy"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "mortar_single_120_dummy"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "mortar_single_120_dummy"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "mortar_single_120_dummy"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "mortar_single_120_dummy"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.1}
					}
					{"placement"
						{selector
							{tag "120"}
						}
						{target
							{tag pointer_attack}
						}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "officeractions$"}
								{op ">="}
								{value 4}
							}
							{"delete"
								{selector
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
											{tag
												{tag player}
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
							{"set_i"
								{var "officeractions$"}
								{op "-"}
								{value 4}
							}
						}
					}
					{"delay"
						{time 45}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/callinbarrage"}
					}
				}
			}
			{## "player_scripts/conquest_enhanced/smokecovercallin"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag pointer_help}
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
										{tag
											{tag officer}
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
											{tag hidden}
										}
									}
								}
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
					{"set_i"
						{var "officeractions$"}
						{op "+"}
						{value 1}
					}
					{"delay"
						{time 5}
					}
					{"spawn"
						{entity "shell_smoke"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "shell_smoke"}
						{waypoint "1"}
					}
					{"spawn"
						{entity "shell_smoke"}
						{waypoint "1"}
					}
					{"placement"
						{selector
							{tag smokecover}
						}
						{target
							{tag pointer_help}
						}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "officeractions$"}
								{op ">="}
								{value 4}
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
												{tag officer}
											}
										}
										{include
											{tag
												{tag player}
											}
											{state
												{state operatable}
											}
										}
									}
									{amount 1
									}
								}
							}
							{"set_i"
								{var "officeractions$"}
								{op "-"}
								{value 4}
							}
						}
					}
					{"timer"
						{time 25}
						{title "mission/multi/smoke_cover_callin"}
					}
					{"delay"
						{time 25}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/smokecovercallin"}
					}
				}
			}
			{##"player_scripts/conquest_enhanced/supplydrop"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag flare}
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
										{tag
											{tag officer}
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
											{tag hidden}
										}
									}
								}
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
					{delay 30
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "airscripts$"}
								{op "=="}
								{value 0}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "user_nation$"}
										{op "=="}
										{value 1}
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
													{tag airsupportrus}
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
																{player "12"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
																{player "13"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
																{player "14"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
																{player "15"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
																{player "10"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
																{player "9"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
																{player "8"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
													{tag airsupportrus}
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
									}
									{"autoassign"
										{selector
											{tag airsuppotrus}
										}
									}
									{"air_attack"
										{selector
											{tag airsupportrus}
										}
										{enemies
											{tag cmp_def}
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
									{"action"
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
										{drop "orders sensor senseless"}
										{action move}
										{target
											{tag pointer_attack}
										}
									}
									{"set_i"
										{var "officeractions$"}
										{op "+"}
										{value 3}
									}
									{"switch"
										{"case"
											{condition
												{type cmp_i}
												{var "officeractions$"}
												{op ">="}
												{value 4}
											}
											{"delete"
												{selector
													{source advanced}
													{group
														{select
															{tag
																{tag player}
															}
														}
														{include
															{tag
																{tag officer}
															}
															{state
																{state operatable}
															}
														}
													}
													{amount 1
													}
												}
											}
											{"set_i"
												{var "officeractions$"}
												{op "-"}
												{value 3}
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
													{tag airsupportger}
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
																{player "12"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
																{player "13"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
																{player "14"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
																{player "15"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
																{player "10"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
																{player "9"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
																{player "8"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
													{tag airsupportger}
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
									{"autoassign"
										{selector
											{tag airsupportger}
										}
									}
									{"air_attack"
										{selector
											{tag airsupportger}
										}
										{enemies
											{tag cmp_def}
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
									{"action"
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
										{drop "orders sensor senseless"}
										{action move}
										{target
											{tag pointer_attack}
										}
									}
									{"set_i"
										{var "officeractions$"}
										{op "+"}
										{value 3}
									}
									{"switch"
										{"case"
											{condition
												{type cmp_i}
												{var "officeractions$"}
												{op ">="}
												{value 4}
											}
											{"delete"
												{selector
													{source advanced}
													{group
														{select
															{tag
																{tag player}
															}
														}
														{include
															{tag
																{tag officer}
															}
															{state
																{state operatable}
															}
														}
													}
													{amount 1
													}
												}
											}
											{"set_i"
												{var "officeractions$"}
												{op "-"}
												{value 3}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 2}
					}
					{"set_i"
						{var "airscripts$"}
						{op "="}
						{value 1}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_nation$"}
								{op "=="}
								{value 1}
							}
							{"switch"
								{"case"
									{condition
										{type near}
										{units
											{tag airsupportrus}
											{state operatable}
										}
										{near_to
											{tag flare}
										}
										{distance 100}
									}
									{"spawn"
										{entity "parachute_inventory"}
										{waypoint "1"}
									}
									{"delay"
										{time 0.1}
									}
									{"placement"
										{selector
											{tag paratrooper_air}
										}
										{target
											{tag flare}
										}
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
											{sort
												{type entity}
												{entity
													{tag flare}
												}
											}
										}
										{drop "orders sensor senseless"}
										{waypoint "19"}
									}
									{"timer"
										{time 300}
										{title "mission/multi/supply_drop_cooldown"}
									}
									{"delay"
										{time 300}
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
							{"switch"
								{"case"
									{condition
										{type near}
										{units
											{tag airsupportger}
											{state operatable}
										}
										{near_to
											{tag flare}
										}
										{distance 100}
									}
									{"spawn"
										{entity "parachute_inventory"}
										{waypoint "1"}
									}
									{"delay"
										{time 0.1}
									}
									{"placement"
										{selector
											{tag paratrooper_air}
										}
										{target
											{tag flare}
										}
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
														{tag airsupportger}
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
											{sort
												{type entity}
												{entity
													{tag flare}
												}
											}
										}
										{drop "orders sensor senseless"}
										{waypoint "19"}
									}
									{"timer"
										{time 300}
										{title "mission/multi/supply_drop_cooldown"}
									}
									{"delay"
										{time 300}
									}
									{"set_i"
										{var "airscripts$"}
										{op "="}
										{value 0}
									}
								}
							}
						}
					}
					{"delay"
						{time 2}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/supplydrop"}
					}
				}
			}
			{## "player_scripts/conquest_enhanced/airrecon"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag artillery_aim}
							}
						}
					}
				}
				{actions
					{delay 10
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "airscripts$"}
								{op "=="}
								{value 0}
							}
							{"switch"
								{"case"
									{condition
										{type cmp_i}
										{var "user_nation$"}
										{op "=="}
										{value 1}
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
													{tag airsupportrus}
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
												{control user}
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
																{player "12"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
												{control user}
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
																{player "13"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
												{control user}
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
																{player "14"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
												{control user}
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
																{player "15"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
												{control user}
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
																{player "10"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
												{control user}
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
																{player "9"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
												{control user}
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
																{player "8"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportrus}
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
												{control user}
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
													{tag airsupportrus}
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
												{control user}
											}
										}
									}
									{## "autoassign"
										{selector
											{tag airsuppotrus}
										}
									}
									{"actor_state"
										{selector
											{tag airsupportrus}
										}
										{drop "sensor senseless"}
										{control user}
										{fire_mode hold}
									}
									{"air_attack"
										{selector
											{tag airsupportrus}
										}
										{enemies
											{tag cmp_def}
										}
										{clone}
										{move_from_back}
										{force_placement}
										{random_weapon 0}
										{attack_altitude 25}
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
														{tag airsupportrus}
													}
												}
											}
										}
										{drop "orders sensor senseless"}
										{action move}
										{target
											{tag artillery_aim}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"air_state"
										{selector
											{tag airsupportrus}
										}
										{drop "sensor senseless"}
										{altitude 30}
									}
									{"set_i"
										{var "officeractions$"}
										{op "+"}
										{value 2}
									}
									{"switch"
										{"case"
											{condition
												{type cmp_i}
												{var "officeractions$"}
												{op ">="}
												{value 4}
											}
											{"delete"
												{selector
													{source advanced}
													{group
														{select
															{tag
																{tag player}
															}
														}
														{include
															{tag
																{tag officer}
															}
															{state
																{state operatable}
															}
														}
													}
													{amount 1
													}
												}
											}
											{"set_i"
												{var "officeractions$"}
												{op "-"}
												{value 2}
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
													{tag airsupportger}
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
												{control user}
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
																{player "12"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
												{control user}
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
																{player "13"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
												{control user}
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
																{player "14"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
												{control user}
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
																{player "15"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
												{control user}
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
																{player "10"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
												{control user}
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
																{player "9"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
												{control user}
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
																{player "8"}
															}
														}
													}
												}
											}
											{"player"
												{selector
													{tag airsupportger}
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
												{control user}
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
													{tag airsupportger}
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
												{control user}
											}
										}
									}
									{## "autoassign"
										{selector
											{tag airsupportger}
										}
									}
									{"actor_state"
										{selector
											{tag airsupportger}
										}
										{control user}
										{fire_mode hold}
									}
									{"air_attack"
										{selector
											{tag airsupportger}
										}
										{enemies
											{tag cmp_def}
										}
										{clone}
										{move_from_back}
										{force_placement}
										{random_weapon 0}
										{attack_altitude 25}
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
														{tag airsupportger}
													}
												}
											}
										}
										{drop "orders sensor senseless"}
										{action move}
										{target
											{tag artillery_aim}
										}
									}
									{"delay"
										{time 0.1}
									}
									{"air_state"
										{selector
											{tag airsupportger}
										}
										{drop "sensor senseless"}
										{altitude 30}
									}
									{"set_i"
										{var "officeractions$"}
										{op "+"}
										{value 2}
									}
									{"switch"
										{"case"
											{condition
												{type cmp_i}
												{var "officeractions$"}
												{op ">="}
												{value 4}
											}
											{"delete"
												{selector
													{source advanced}
													{group
														{select
															{tag
																{tag player}
															}
														}
														{include
															{tag
																{tag officer}
															}
															{state
																{state operatable}
															}
														}
													}
													{amount 1
													}
												}
											}
											{"set_i"
												{var "officeractions$"}
												{op "-"}
												{value 2}
											}
										}
									}
								}
							}
						}
					}
					{"delay"
						{time 2}
					}
					{"set_i"
						{var "airscripts$"}
						{op "="}
						{value 1}
					}
					{"delay"
						{time 20}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/airrecon"}
					}
				}
			}
			{"player_scripts/conquest_enhanced/reverse"
				{condition
					{expression "1"}
					{terms
						{"1.entities"
							{selector
								{tag reverse_on}
								{state operatable}
							}
						}
					}
				}
				{actions
					{"actor_state"
						{selector
							{tag reverse_on}
							{state operatable}
						}
						{movement
							{forward off}
						}
					}
					{"delay"
						{time 7}
					}
					{"effect"
						{selector
							{tag reverse_on}
							{state operatable}
						}
						{effect reverse_toggle}
					}
					{"actor_state"
						{selector
							{tag reverse_off}
							{state operatable}
						}
						{movement
							{forward on}
						}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/reverse"}
					}
				}
			}
			{"player_scripts/auto_medic/remove_will_be_revived_tag"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag will_be_revived}
										}
									}
									{include
										{tag
											{tag player}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag bleeding}
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
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag will_be_revived}
									}
								}
								{include
									{tag
										{tag player}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{tag
										{tag bleeding}
									}
								}
							}
						}
						{tag_remove will_be_revived}
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
											{tag carry_off}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
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
								{tag will_be_revived}
							}
							{tag_remove will_be_revived}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "player_scripts/auto_medic/remove_will_be_revived_tag"}
					}
				}
			}
			{"player_scripts/auto_medic/send_medic_to_revive"
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag carry_off}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{tag
											{tag reviving}
										}
										{state
											{state linked}
										}
									}
								}
							}
							{near_to
								{source advanced}
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
										{tag
											{tag bleeding}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state linked}
										}
										{tag
											{tag being_carried}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{distance 13}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{## "select"
						{source advanced}
						{group
							{select
								{tag
									{tag bleeding}
								}
							}
							{include
								{tag
									{tag player}
								}
								{prop
									{prop human}
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
									{state linked}
								}
								{tag
									{tag medic_coming_to_carry}
								}
								{tag
									{tag being_carried}
								}
								{tag
									{tag will_be_healed}
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
											{tag carry_off}
										}
									}
									{include
										{tag
											{tag player}
										}
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
										{tag
											{tag default}
										}
										{tag
											{tag carry}
										}
									}
								}
							}
						}
					}
					{## "entity_state"
						{selector
							{source current}
						}
						{tag_add will_be_healed}
					}
					{"action"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag carry_off}
									}
								}
								{include
									{tag
										{tag player}
									}
									{state
										{state user_control}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{tag
										{tag carry}
									}
									{state
										{state dead}
									}
									{tag
										{tag default}
									}
									{tag
										{tag reviving}
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
												{tag bleeding}
											}
										}
										{include
											{prop
												{prop human}
											}
											{state
												{state user_control}
											}
											{tag
												{tag player}
											}
										}
										{exclude
											{state
												{state linked}
											}
											{state
												{state inactive}
											}
											{tag
												{tag being_carried}
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
						{action move}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag bleeding}
									}
								}
								{include
									{prop
										{prop human}
									}
									{tag
										{tag player}
									}
									{state
										{state user_control}
									}
								}
								{exclude
									{tag
										{tag being_carried}
									}
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
												{tag carry_off}
											}
										}
										{include
											{prop
												{prop human}
											}
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
										}
										{exclude
											{with_item
												{type amount}
												{item "human"}
												{min 1}
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
											{tag
												{tag reviving}
											}
										}
									}
								}
							}
						}
					}
					{## "action"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player}
									}
								}
								{include
									{tag
										{tag carry_off}
									}
								}
								{exclude
									{tag
										{tag carry}
									}
									{state
										{state dead}
									}
									{tag
										{tag default}
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
												{tag bleeding}
											}
										}
										{include
											{tag
												{tag player}
											}
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
											{state
												{state linked}
											}
											{tag
												{tag medic_coming_to_carry}
											}
											{tag
												{tag being_carried}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{drop orders}
						{action medic}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag will_be_healed}
									}
								}
								{include
									{prop
										{prop human}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag carry_off}
								}
							}
						}
					}
					{"delay"
						{time 4}
					}
					{"trigger"
						{name "player_scripts/auto_medic/send_medic_to_revive"}
					}
				}
			}
			{"player_scripts/auto_medic/revive"
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag carry_off}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{tag
											{tag reviving}
										}
										{state
											{state linked}
										}
										{tag
											{tag carry}
										}
										{tag
											{tag default}
										}
									}
								}
							}
							{near_to
								{source advanced}
								{group
									{select
										{tag
											{tag bleeding}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
									}
									{exclude
										{state
											{state linked}
										}
										{tag
											{tag being_carried}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{distance 0.5}
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
									{tag bleeding}
								}
							}
							{include
								{tag
									{tag player}
								}
								{prop
									{prop human}
								}
								{state
									{state user_control}
								}
								{state
									{state dead}
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
									{tag being_carried}
								}
								{tag
									{tag will_be_revived}
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
											{tag carry_off}
										}
									}
									{include
										{tag
											{tag player}
										}
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
										{tag
											{tag default}
										}
										{tag
											{tag carry}
										}
										{tag
											{tag reviving}
										}
									}
								}
							}
						}
					}
					{"entity_state"
						{selector
							{source current}
						}
						{tag_add will_be_revived}
					}
					{"delay"
						{time 0.5}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag carry_off}
								}
							}
							{include
								{tag
									{tag player}
								}
								{prop
									{prop human}
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
									{state linked}
								}
								{tag
									{tag medic_coming_to_carry}
								}
								{tag
									{tag reviving}
								}
								{tag
									{tag default}
								}
								{tag
									{tag carry}
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
											{tag bleeding}
										}
									}
									{include
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
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
									}
								}
							}
						}
					}
					{"delay"
						{time 0.5}
					}
					{"action"
						{selector
							{source current}
						}
						{action medic}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag will_be_revived}
									}
								}
								{exclude
									{tag
										{tag being_carried}
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
						{time 0.5}
					}
					{## "entity_state"
						{selector
							{source current}
						}
						{tag_add reviving}
					}
					{"effect"
						{selector
							{source current}
						}
						{effect tag_medic_reviving}
					}
					{## "action"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player}
									}
								}
								{include
									{tag
										{tag carry_off}
									}
								}
								{exclude
									{tag
										{tag carry}
									}
									{state
										{state dead}
									}
									{tag
										{tag default}
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
												{tag bleeding}
											}
										}
										{include
											{tag
												{tag player}
											}
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
											{state
												{state linked}
											}
											{tag
												{tag medic_coming_to_carry}
											}
											{tag
												{tag being_carried}
											}
										}
									}
								}
							}
							{amount 1
							}
						}
						{drop orders}
						{action medic}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag will_be_healed}
									}
								}
								{include
									{prop
										{prop human}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag carry_off}
								}
							}
						}
					}
					{"delay"
						{time 4}
					}
					{"trigger"
						{name "player_scripts/auto_medic/revive"}
					}
				}
			}
			{"player_scripts/auto_medic/remove_revive_tag"
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag reviving}
										}
									}
									{include
										{prop
											{prop human}
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
							{near_to
								{source advanced}
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
											{state user_control}
										}
										{tag
											{tag will_be_revived}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{state
											{state dead}
										}
										{tag
											{tag bleeding}
										}
									}
								}
							}
							{distance 0.5}
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
										{tag reviving}
									}
								}
								{include
									{tag
										{tag player}
									}
									{prop
										{prop human}
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
												{tag player}
											}
										}
										{include
											{tag
												{tag will_be_revived}
											}
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
								}
							}
						}
						{tag_remove reviving}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "player_scripts/auto_medic/remove_revive_tag"}
					}
				}
			}
			{"player_scripts/auto_medic/remove_wounded_tag"
				{condition
					{type 1}
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag wounded_at_tent}
										}
									}
									{include
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag bleeding}
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
					{"entity_state"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag wounded_at_tent}
									}
								}
								{include
									{tag
										{tag player}
									}
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
								}
							}
						}
						{tag_remove wounded_at_tent}
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
											{tag carry}
										}
									}
									{include
										{tag
											{tag player}
										}
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
											{state linked}
										}
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
								{tag wounded_at_tent}
							}
							{tag_remove wounded_at_tent}
						}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "player_scripts/auto_medic/remove_wounded_tag"}
					}
				}
			}
			{"player_scripts/auto_medic/remove_all_wounded_tag"
				{condition
					{terms
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag carry}
										}
									}
									{include
										{tag
											{tag player}
										}
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
											{state linked}
										}
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
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag wounded_at_tent}
										}
										{tag
											{tag being_carried}
										}
									}
									{include
										{tag
											{tag player}
										}
										{prop
											{prop human}
										}
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
									}
									{exclude
										{state
											{state inactive}
										}
										{mids}
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
											{tag carry}
										}
									}
									{include
										{tag
											{tag player}
										}
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
											{state linked}
										}
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
								{tag wounded_at_tent}
							}
							{tag_remove wounded_at_tent}
						}
						{"entity_state"
							{selector
								{tag being_carried}
							}
							{tag_remove being_carried}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "player_scripts/auto_medic/remove_all_wounded_tag"}
					}
				}
			}
			{"player_scripts/auto_medic/remove_all_will_be_revived_tag"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag will_be_revived}
										}
									}
									{include
										{tag
											{tag player}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag bleeding}
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
											{tag carry_off}
										}
									}
									{include
										{tag
											{tag player}
										}
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
											{state linked}
										}
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
											{tag carry_off}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
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
								{tag will_be_revived}
							}
							{tag_remove will_be_revived}
						}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "player_scripts/auto_medic/remove_will_be_revived_tag"}
					}
				}
			}
			{"player_scripts/auto_medic/grab_body"
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag carry}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state user_control}
										}
										{tag
											{tag player}
										}
									}
									{exclude
										{with_item
											{type amount}
											{item "human"}
											{min 1}
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
							{near_to
								{source advanced}
								{group
									{select
										{tag
											{tag player}
										}
									}
									{include
										{tag
											{tag bleeding}
										}
										{state
											{state user_control}
										}
										{state
											{state dead}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag wounded_at_tent}
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
							{distance 50}
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
										{tag
											{tag bleeding}
										}
										{state
											{state user_control}
										}
										{prop
											{prop human}
										}
									}
									{exclude
										{tag
											{tag wounded_at_tent}
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
						}
						{"3.entities"
							{selector
								{tag revivepoint}
							}
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
										{tag player}
									}
								}
								{include
									{tag
										{tag bleeding}
									}
									{prop
										{prop human}
									}
									{state
										{state user_control}
									}
								}
								{exclude
									{tag
										{tag wounded_at_tent}
									}
									{state
										{state linked}
									}
									{state
										{state inactive}
									}
									{tag
										{tag will_be_revived}
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
												{tag revivepoint}
											}
										}
									}
									{amount 1
									}
								}
								{mode farthest}
							}
						}
						{tag_add being_carried}
					}
					{"delay"
						{time 0.1}
					}
					{"select"
						{source advanced}
						{group
							{select
								{tag
									{tag carry}
								}
							}
							{include
								{state
									{state operatable}
								}
								{state
									{state user_control}
								}
								{tag
									{tag player}
								}
								{prop
									{prop human}
								}
							}
							{exclude
								{with_item
									{type amount}
									{item "human"}
									{min 1}
								}
								{state
									{state dead}
								}
								{state
									{state linked}
								}
							}
						}
						{amount 1
						}
					}
					{## "select"
						{source advanced}
						{group
							{select
								{tag
									{tag carry}
								}
							}
							{include
								{state
									{state operatable}
								}
								{state
									{state user_control}
								}
								{tag
									{tag player}
								}
								{prop
									{prop human}
								}
							}
							{exclude
								{with_item
									{type amount}
									{item "human"}
									{min 1}
								}
								{state
									{state dead}
								}
								{state
									{state linked}
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
											{tag bleeding}
										}
									}
									{include
										{tag
											{tag player}
										}
										{state
											{state user_control}
										}
										{prop
											{prop human}
										}
										{state
											{state dead}
										}
									}
									{exclude
										{state
											{state linked}
										}
										{state
											{state inactive}
										}
										{tag
											{tag wounded_at_tent}
										}
										{tag
											{tag will_be_revived}
										}
									}
								}
								{amount 1
								}
							}
						}
					}
					{"actor_state"
						{selector
							{source current}
						}
						{movement
							{speed assault}
							{kind fast}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"action"
						{selector
							{source current}
						}
						{drop orders}
						{action move}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag player}
									}
								}
								{include
									{tag
										{tag bleeding}
									}
									{prop
										{prop human}
									}
									{state
										{state user_control}
									}
								}
								{exclude
									{tag
										{tag wounded_at_tent}
									}
									{state
										{state linked}
									}
									{state
										{state inactive}
									}
									{tag
										{tag will_be_revived}
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
												{tag revivepoint}
											}
										}
									}
									{amount 1
									}
								}
								{mode farthest}
							}
						}
					}
					{"delay"
						{time 3}
					}
					{"inventory"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag carry}
									}
								}
								{include
									{state
										{state operatable}
									}
									{state
										{state user_control}
									}
									{tag
										{tag player}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "human"}
										{min 1}
									}
									{state
										{state dead}
									}
									{state
										{state linked}
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
												{tag bleeding}
											}
										}
										{include
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
											{prop
												{prop human}
											}
											{state
												{state dead}
											}
										}
										{exclude
											{state
												{state linked}
											}
											{state
												{state inactive}
											}
											{tag
												{tag wounded_at_tent}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{action pickup}
						{entity
							{source advanced}
							{group
								{select
									{tag
										{tag player}
									}
								}
								{include
									{tag
										{tag bleeding}
									}
									{prop
										{prop human}
									}
									{state
										{state user_control}
									}
								}
								{exclude
									{tag
										{tag wounded_at_tent}
									}
									{state
										{state linked}
									}
									{state
										{state inactive}
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
												{tag revivepoint}
											}
										}
									}
									{amount 1
									}
								}
								{mode farthest}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{inventory_items
										{from_entities
											{tag carry}
										}
									}
								}
								{include
									{prop
										{prop creature}
									}
								}
								{exclude
									{tag
										{tag wounded_at_tent}
									}
								}
							}
						}
						{tag_add wounded_at_tent}
						{tag_remove being_carried}
					}
					{"delay"
						{time 2.1}
					}
					{"inventory"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag carry}
									}
								}
								{include
									{state
										{state operatable}
									}
									{with_item
										{type amount}
										{item "human"}
										{min 1}
									}
									{tag
										{tag player}
									}
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
										{state linked}
									}
									{state
										{state inactive}
									}
								}
							}
							{amount 1
							}
						}
						{action drop_to}
						{entity
							{source advanced}
							{group
								{select
									{tag
										{tag revivepoint2}
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
												{tag carry}
											}
										}
										{include
											{state
												{state operatable}
											}
											{with_item
												{type amount}
												{item "human"}
												{min 1}
											}
											{tag
												{tag player}
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
										}
									}
									{amount 1
									}
								}
							}
						}
					}
					{## "switch"
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
											{tag
												{tag wounded_at_tent}
											}
										}
										{exclude
											{tag
												{tag bleeding}
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
												{tag player}
											}
										}
										{include
											{tag
												{tag nope}
											}
										}
										{exclude
											{tag
												{tag bleeding}
											}
										}
									}
								}
								{tag_remove nope}
							}
						}
					}
					{"delay"
						{time 0.1}
					}
					{"trigger"
						{name "player_scripts/auto_medic/grab_body"}
					}
				}
			}
			{"player_scripts/auto_medic/carry_to_tent"
				{condition
					{terms
						{"3.entities"
							{selector
								{tag revivepoint}
							}
						}
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag carry}
										}
									}
									{include
										{prop
											{prop human}
										}
										{tag
											{tag player}
										}
										{with_item
											{type amount}
											{item "human"}
											{min 1}
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
											{state linked}
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
				{actions
					{"delay"
						{time 0.1}
					}
					{## "inventory"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag carry}
									}
								}
								{include
									{state
										{state operatable}
									}
									{state
										{state user_control}
									}
									{tag
										{tag player}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "human"}
										{min 1}
									}
									{state
										{state dead}
									}
									{state
										{state linked}
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
												{tag bleeding}
											}
										}
										{include
											{tag
												{tag player}
											}
											{state
												{state user_control}
											}
											{prop
												{prop human}
											}
											{state
												{state dead}
											}
										}
										{exclude
											{state
												{state linked}
											}
											{state
												{state inactive}
											}
											{tag
												{tag wounded_at_tent}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{action pickup}
						{entity
							{source advanced}
							{group
								{select
									{tag
										{tag player}
									}
								}
								{include
									{tag
										{tag bleeding}
									}
									{prop
										{prop human}
									}
									{state
										{state user_control}
									}
								}
								{exclude
									{tag
										{tag wounded_at_tent}
									}
									{state
										{state linked}
									}
									{state
										{state inactive}
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
												{tag revivepoint}
											}
										}
									}
									{amount 1
									}
								}
								{mode farthest}
							}
						}
					}
					{## "delay"
						{time 1}
					}
					{"entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{inventory_items
										{from_entities
											{tag carry}
										}
									}
								}
								{include
									{prop
										{prop creature}
									}
								}
								{exclude
									{tag
										{tag wounded_at_tent}
									}
								}
							}
						}
						{tag_add wounded_at_tent}
						{tag_remove being_carried}
					}
					{## "delay"
						{time 2.1}
					}
					{"inventory"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag carry}
									}
								}
								{include
									{state
										{state operatable}
									}
									{with_item
										{type amount}
										{item "human"}
										{min 1}
									}
									{tag
										{tag player}
									}
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
										{state linked}
									}
									{state
										{state inactive}
									}
								}
							}
						}
						{action drop_to}
						{entity
							{source advanced}
							{group
								{select
									{tag
										{tag revivepoint2}
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
												{tag carry}
											}
										}
										{include
											{state
												{state operatable}
											}
											{with_item
												{type amount}
												{item "human"}
												{min 1}
											}
											{tag
												{tag player}
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
										}
									}
									{amount 1
									}
								}
							}
						}
					}
					{"delay"
						{time 10}
					}
					{## "delay"
						{time 0.1}
					}
					{## "switch"
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
											{tag
												{tag wounded_at_tent}
											}
										}
										{exclude
											{tag
												{tag bleeding}
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
												{tag player}
											}
										}
										{include
											{tag
												{tag nope}
											}
										}
										{exclude
											{tag
												{tag bleeding}
											}
										}
									}
								}
								{tag_remove nope}
							}
						}
					}
					{## "delay"
						{time 0.1}
					}
					{"trigger"
						{name "player_scripts/auto_medic/carry_to_tent"}
					}
				}
			}
			{"player_scripts/move_player_spawn"
				{condition
					{expression "1 & 4 & !2"}
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
										{state
											{state operatable}
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
										{tag
											{tag pointer_defend}
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
						{"2.event"
							{id "attack_start"}
						}
					}
				}
				{actions
					{"delay"
						{time 3}
					}
					{"talk"
						{selector
							{source advanced}
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
								}
							}
							{amount 1
							}
						}
						{text "mission/multi/teleporting_player_defense_units"}
					}
					{"delay"
						{time 5}
					}
					{## "entity_state"
						{selector
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
										{state user_control}
									}
									{relation
										{relation ally}
										{player "1"}
									}
									{state
										{state operatable}
									}
								}
								{exclude
									{tag
										{tag teleported}
									}
									{tag
										{tag need_to_teleport}
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
								}
							}
						}
						{tag_add need_to_teleport}
					}
					{## "delay"
						{time 1}
					}
					{"actor_to_waypoint"
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
						}
						{waypoint "4000"}
						{approach "safe teleport & rotate"}
					}
					{## "placement"
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
						}
						{target_waypoint "4000"}
						{clone_places}
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
										{tag need_to_teleport}
									}
								}
							}
						}
						{tag_add teleported}
						{tag_remove need_to_teleport}
					}
					{"talk"
						{selector
							{source advanced}
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
								}
							}
							{amount 1
							}
						}
						{text "mission/multi/teleporting_player_defense_units_complete"}
					}
					{## "timer"
						{time 5}
						{title "$/name"}
					}
					{## "trigger"
						{name "player_scripts/move_player_spawn"}
					}
				}
			}
			{"player_scripts/set_player_defending"
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
						{var "player_defending$"}
						{op "="}
						{value 1}
					}
				}
			}
			{"conquest_enhanced/tips"
				{condition
				}
				{actions
					{"delay"
						{time 5}
					}
					{"talk"
						{selector
							{amount 1
							}
							{zone "gamezone"}
							{type human}
							{state operatable}
						}
						{text "mission/multi/checkobjectives"}
					}
					{"delay"
						{time 5}
					}
					{"talk"
						{selector
							{amount 1
							}
							{zone "gamezone"}
							{type human}
							{state operatable}
						}
						{text "mission/multi/patchnotes"}
					}
					{"task"
						{name "tips"}
					}
					{"task"
						{name "radio truck"}
					}
					{"task"
						{name "defenselevels"}
					}
					{"task"
						{name "engineers"}
					}
					{"task"
						{name "callin"}
					}
					{"task"
						{name "medics"}
					}
					{"task"
						{name "teleport"}
					}
					{"delay"
						{time 15}
					}
					{## "talk"
						{selector
							{amount 1
							}
							{zone "gamezone"}
							{type human}
							{state operatable}
						}
						{text "mission/multi/giveaway"}
					}
				}
			}
			{## "player_scripts/auto_medic/medic test conquest"
				{disabled}
				{condition
					{terms
						{"1.near"
							{units
								{source advanced}
								{group
									{select
										{tag
											{tag carry_off}
										}
									}
									{include
										{with_item
											{type amount}
											{item "tent_kit"}
											{min 1}
										}
									}
									{exclude
										{relation
											{relation enemy}
										}
										{state
											{state dead}
										}
									}
								}
							}
							{near_to
								{tag bleeding}
							}
							{distance 13}
						}
					}
				}
				{actions
					{"delay"
						{time 3}
					}
					{"action"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag player}
									}
								}
								{include
									{tag
										{tag carry_off}
									}
								}
								{exclude
									{tag
										{tag carry}
									}
									{state
										{state dead}
									}
									{tag
										{tag default}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag bleeding}
								}
							}
							{amount 1
							}
						}
						{action medic}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag bleeding}
									}
								}
								{include
									{prop
										{prop human}
									}
								}
								{exclude
									{relation
										{relation enemy}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag carry_off}
								}
							}
						}
					}
					{"delay"
						{time 1}
					}
					{"trigger"
						{name "player_scripts/auto_medic/medic test conquest"}
					}
				}
			}
			{"player_scripts/tellaboutyourself"
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
												{tag talking}
											}
										}
										{include
											{tag
												{tag bioger1}
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
								{text "mission/multi/bioger1"}
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
												{tag bioger2}
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
								{text "mission/multi/bioger2"}
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
												{tag bioger3}
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
								{text "mission/multi/bioger3"}
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
												{tag bioger4}
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
								{text "mission/multi/bioger4"}
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
												{tag bioger5}
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
								{text "mission/multi/bioger5"}
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
												{tag bioger6}
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
								{text "mission/multi/bioger6"}
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
												{tag bioger7}
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
								{text "mission/multi/bioger7"}
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
												{tag bioger8}
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
								{text "mission/multi/bioger8"}
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
												{tag bioger9}
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
								{text "mission/multi/bioger9"}
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
												{tag bioger10}
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
								{text "mission/multi/bioger10"}
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
												{tag bioger11}
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
								{text "mission/multi/bioger11"}
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
												{tag bioger12}
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
								{text "mission/multi/bioger12"}
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
												{tag bioger13}
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
								{text "mission/multi/bioger13"}
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
												{tag bioger14}
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
								{text "mission/multi/bioger14"}
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
												{tag bioger15}
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
								{text "mission/multi/bioger15"}
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
												{tag bioger16}
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
								{text "mission/multi/bioger16"}
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
												{tag bioger17}
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
								{text "mission/multi/bioger17"}
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
												{tag bioger18}
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
								{text "mission/multi/bioger18"}
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
												{tag bioger19}
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
								{text "mission/multi/bioger19"}
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
												{tag bioger20}
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
								{text "mission/multi/bioger20"}
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
												{tag bioger21}
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
								{text "mission/multi/bioger21"}
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
												{tag bioger22}
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
								{text "mission/multi/bioger22"}
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
												{tag bioger23}
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
								{text "mission/multi/bioger23"}
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
												{tag bioger24}
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
								{text "mission/multi/bioger24"}
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
												{tag bioger25}
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
								{text "mission/multi/bioger25"}
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
												{tag bioger26}
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
								{text "mission/multi/bioger26"}
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
												{tag bioger27}
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
								{text "mission/multi/bioger27"}
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
												{tag bioger28}
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
								{text "mission/multi/bioger28"}
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
												{tag bioger29}
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
								{text "mission/multi/bioger29"}
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
												{tag bioger30}
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
								{text "mission/multi/bioger30"}
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
												{tag bioger31}
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
								{text "mission/multi/bioger31"}
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
												{tag bioger32}
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
								{text "mission/multi/bioger32"}
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
												{tag bioger33}
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
								{text "mission/multi/bioger33"}
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
												{tag bioger34}
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
								{text "mission/multi/bioger34"}
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
												{tag bioger35}
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
								{text "mission/multi/bioger35"}
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
												{tag bioger36}
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
								{text "mission/multi/bioger36"}
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
												{tag bioger37}
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
								{text "mission/multi/bioger37"}
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
												{tag bioger38}
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
								{text "mission/multi/bioger38"}
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
												{tag bioger39}
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
								{text "mission/multi/bioger39"}
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
												{tag bioger40}
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
								{text "mission/multi/bioger40"}
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
												{tag bioger41}
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
								{text "mission/multi/bioger41"}
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
												{tag bioger42}
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
								{text "mission/multi/bioger42"}
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
												{tag bioger43}
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
								{text "mission/multi/bioger43"}
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
												{tag bioger44}
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
								{text "mission/multi/bioger44"}
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
												{tag bioger45}
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
								{text "mission/multi/bioger45"}
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
												{tag bioger46}
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
								{text "mission/multi/bioger46"}
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
												{tag bioger47}
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
								{text "mission/multi/bioger47"}
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
												{tag bioger48}
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
								{text "mission/multi/bioger48"}
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
												{tag bioger49}
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
								{text "mission/multi/bioger49"}
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
												{tag bioger50}
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
								{text "mission/multi/bioger50"}
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
												{tag bioger51}
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
								{text "mission/multi/bioger51"}
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
												{tag bioger52}
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
								{text "mission/multi/bioger52"}
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
												{tag bioger53}
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
								{text "mission/multi/bioger53"}
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
												{tag bioger54}
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
								{text "mission/multi/bioger54"}
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
												{tag bioger55}
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
								{text "mission/multi/bioger55"}
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
												{tag bioger56}
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
								{text "mission/multi/bioger56"}
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
												{tag bioger57}
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
								{text "mission/multi/bioger57"}
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
												{tag bioger58}
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
								{text "mission/multi/bioger58"}
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
												{tag bioger59}
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
								{text "mission/multi/bioger59"}
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
												{tag bioger60}
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
								{text "mission/multi/bioger60"}
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
												{tag bioger61}
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
								{text "mission/multi/bioger61"}
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
												{tag bioger62}
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
								{text "mission/multi/bioger62"}
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
												{tag bioger63}
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
								{text "mission/multi/bioger63"}
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
												{tag bioger64}
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
								{text "mission/multi/bioger64"}
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
												{tag bioger65}
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
								{text "mission/multi/bioger65"}
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
												{tag bioger66}
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
								{text "mission/multi/bioger66"}
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
												{tag bioger66}
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
								{text "mission/multi/bioger66"}
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
												{tag bioger67}
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
								{text "mission/multi/bioger67"}
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
												{tag bioger68}
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
								{text "mission/multi/bioger68"}
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
												{tag bioger69}
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
								{text "mission/multi/bioger69"}
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
												{tag bioger70}
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
								{text "mission/multi/bioger70"}
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
												{tag bioger71}
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
								{text "mission/multi/bioger71"}
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
												{tag bioger72}
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
								{text "mission/multi/bioger72"}
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
												{tag bioger73}
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
								{text "mission/multi/bioger73"}
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
												{tag bioger74}
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
								{text "mission/multi/bioger74"}
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
												{tag bioger75}
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
								{text "mission/multi/bioger75"}
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
												{tag bioger76}
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
								{text "mission/multi/bioger76"}
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
												{tag bioger77}
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
								{text "mission/multi/bioger77"}
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
												{tag bioger78}
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
								{text "mission/multi/bioger78"}
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
												{tag bioger79}
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
								{text "mission/multi/bioger79"}
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
												{tag bioger80}
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
								{text "mission/multi/bioger80"}
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
												{tag bioger81}
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
								{text "mission/multi/bioger81"}
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
												{tag bioger82}
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
								{text "mission/multi/bioger82"}
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
												{tag bioger83}
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
								{text "mission/multi/bioger83"}
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
												{tag bioger84}
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
								{text "mission/multi/bioger84"}
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
												{tag bioger85}
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
								{text "mission/multi/bioger85"}
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
												{tag bioger86}
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
								{text "mission/multi/bioger86"}
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
												{tag bioger87}
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
								{text "mission/multi/bioger87"}
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
												{tag bioger88}
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
								{text "mission/multi/bioger88"}
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
												{tag bioger89}
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
								{text "mission/multi/bioger89"}
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
												{tag bioger90}
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
								{text "mission/multi/bioger90"}
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
												{tag bioger91}
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
								{text "mission/multi/bioger91"}
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
												{tag bioger92}
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
								{text "mission/multi/bioger92"}
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
												{tag bioger93}
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
								{text "mission/multi/bioger93"}
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
												{tag bioger94}
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
								{text "mission/multi/bioger94"}
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
												{tag bioger95}
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
								{text "mission/multi/bioger95"}
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
												{tag bioger96}
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
								{text "mission/multi/bioger96"}
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
												{tag bioger97}
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
								{text "mission/multi/bioger97"}
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
												{tag bioger98}
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
								{text "mission/multi/bioger98"}
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
												{tag bioger99}
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
								{text "mission/multi/bioger99"}
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
												{tag bioger100}
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
								{text "mission/multi/bioger100"}
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
												{tag biorus1}
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
								{text "mission/multi/biorus1"}
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
												{tag biorus2}
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
								{text "mission/multi/biorus2"}
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
												{tag biorus3}
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
								{text "mission/multi/biorus3"}
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
												{tag biorus4}
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
								{text "mission/multi/biorus4"}
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
												{tag biorus5}
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
								{text "mission/multi/biorus5"}
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
												{tag biorus6}
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
								{text "mission/multi/biorus6"}
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
												{tag biorus7}
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
								{text "mission/multi/biorus7"}
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
												{tag biorus8}
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
								{text "mission/multi/biorus8"}
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
												{tag biorus9}
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
								{text "mission/multi/biorus9"}
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
												{tag biorus10}
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
								{text "mission/multi/biorus10"}
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
												{tag biorus11}
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
								{text "mission/multi/biorus11"}
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
												{tag biorus12}
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
								{text "mission/multi/biorus12"}
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
												{tag biorus13}
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
								{text "mission/multi/biorus13"}
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
												{tag biorus14}
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
								{text "mission/multi/biorus14"}
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
												{tag biorus15}
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
								{text "mission/multi/biorus15"}
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
												{tag biorus16}
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
								{text "mission/multi/biorus16"}
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
												{tag biorus17}
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
								{text "mission/multi/biorus17"}
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
												{tag biorus18}
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
								{text "mission/multi/biorus18"}
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
												{tag biorus19}
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
								{text "mission/multi/biorus19"}
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
												{tag biorus20}
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
								{text "mission/multi/biorus20"}
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
												{tag biorus21}
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
								{text "mission/multi/biorus21"}
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
												{tag biorus22}
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
								{text "mission/multi/biorus22"}
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
												{tag biorus23}
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
								{text "mission/multi/biorus23"}
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
												{tag biorus24}
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
								{text "mission/multi/biorus24"}
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
												{tag biorus25}
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
								{text "mission/multi/biorus25"}
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
												{tag biorus26}
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
								{text "mission/multi/biorus26"}
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
												{tag biorus27}
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
								{text "mission/multi/biorus27"}
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
												{tag biorus28}
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
								{text "mission/multi/biorus28"}
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
												{tag biorus29}
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
								{text "mission/multi/biorus29"}
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
												{tag biorus30}
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
								{text "mission/multi/biorus30"}
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
												{tag biorus31}
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
								{text "mission/multi/biorus31"}
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
												{tag biorus32}
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
								{text "mission/multi/biorus32"}
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
												{tag biorus33}
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
								{text "mission/multi/biorus33"}
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
												{tag biorus34}
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
								{text "mission/multi/biorus34"}
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
												{tag biorus35}
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
								{text "mission/multi/biorus35"}
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
												{tag biorus36}
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
								{text "mission/multi/biorus36"}
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
												{tag biorus37}
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
								{text "mission/multi/biorus37"}
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
												{tag biorus38}
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
								{text "mission/multi/biorus38"}
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
												{tag biorus39}
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
								{text "mission/multi/biorus39"}
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
												{tag biorus40}
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
								{text "mission/multi/biorus40"}
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
												{tag biorus41}
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
								{text "mission/multi/biorus41"}
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
												{tag biorus42}
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
								{text "mission/multi/biorus42"}
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
												{tag biorus43}
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
								{text "mission/multi/biorus43"}
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
												{tag biorus44}
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
								{text "mission/multi/biorus44"}
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
												{tag biorus45}
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
								{text "mission/multi/biorus45"}
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
												{tag biorus46}
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
								{text "mission/multi/biorus46"}
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
												{tag biorus47}
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
								{text "mission/multi/biorus47"}
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
												{tag biorus48}
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
								{text "mission/multi/biorus48"}
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
												{tag biorus49}
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
								{text "mission/multi/biorus49"}
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
												{tag biorus50}
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
								{text "mission/multi/biorus50"}
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
												{tag biorus51}
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
								{text "mission/multi/biorus51"}
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
												{tag biorus52}
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
								{text "mission/multi/biorus52"}
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
												{tag biorus53}
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
								{text "mission/multi/biorus53"}
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
												{tag biorus54}
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
								{text "mission/multi/biorus54"}
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
												{tag biorus55}
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
								{text "mission/multi/biorus55"}
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
												{tag biorus56}
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
								{text "mission/multi/biorus56"}
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
												{tag biorus57}
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
								{text "mission/multi/biorus57"}
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
												{tag biorus58}
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
								{text "mission/multi/biorus58"}
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
												{tag biorus59}
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
								{text "mission/multi/biorus59"}
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
												{tag biorus60}
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
								{text "mission/multi/biorus60"}
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
												{tag biorus61}
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
								{text "mission/multi/biorus61"}
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
												{tag biorus62}
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
								{text "mission/multi/biorus62"}
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
												{tag biorus63}
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
								{text "mission/multi/biorus63"}
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
												{tag biorus64}
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
								{text "mission/multi/biorus64"}
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
												{tag biorus65}
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
								{text "mission/multi/biorus65"}
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
												{tag biorus66}
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
								{text "mission/multi/biorus66"}
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
												{tag biorus66}
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
								{text "mission/multi/biorus66"}
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
												{tag biorus67}
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
								{text "mission/multi/biorus67"}
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
												{tag biorus68}
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
								{text "mission/multi/biorus68"}
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
												{tag biorus69}
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
								{text "mission/multi/biorus69"}
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
												{tag biorus70}
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
								{text "mission/multi/biorus70"}
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
												{tag biorus71}
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
								{text "mission/multi/biorus71"}
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
												{tag biorus72}
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
								{text "mission/multi/biorus72"}
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
												{tag biorus73}
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
								{text "mission/multi/biorus73"}
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
												{tag biorus74}
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
								{text "mission/multi/biorus74"}
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
												{tag biorus75}
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
								{text "mission/multi/biorus75"}
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
												{tag biorus76}
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
								{text "mission/multi/biorus76"}
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
												{tag biorus77}
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
								{text "mission/multi/biorus77"}
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
												{tag biorus78}
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
								{text "mission/multi/biorus78"}
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
												{tag biorus79}
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
								{text "mission/multi/biorus79"}
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
												{tag biorus80}
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
								{text "mission/multi/biorus80"}
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
												{tag biorus81}
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
								{text "mission/multi/biorus81"}
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
												{tag biorus82}
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
								{text "mission/multi/biorus82"}
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
												{tag biorus83}
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
								{text "mission/multi/biorus83"}
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
												{tag biorus84}
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
								{text "mission/multi/biorus84"}
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
												{tag biorus85}
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
								{text "mission/multi/biorus85"}
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
												{tag biorus86}
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
								{text "mission/multi/biorus86"}
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
												{tag biorus87}
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
								{text "mission/multi/biorus87"}
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
												{tag biorus88}
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
								{text "mission/multi/biorus88"}
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
												{tag biorus89}
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
								{text "mission/multi/biorus89"}
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
												{tag biorus90}
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
								{text "mission/multi/biorus90"}
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
												{tag biorus91}
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
								{text "mission/multi/biorus91"}
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
												{tag biorus92}
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
								{text "mission/multi/biorus92"}
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
												{tag biorus93}
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
								{text "mission/multi/biorus93"}
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
												{tag biorus94}
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
								{text "mission/multi/biorus94"}
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
												{tag biorus95}
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
								{text "mission/multi/biorus95"}
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
												{tag biorus96}
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
								{text "mission/multi/biorus96"}
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
												{tag biorus97}
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
								{text "mission/multi/biorus97"}
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
												{tag biorus98}
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
								{text "mission/multi/biorus98"}
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
												{tag biorus99}
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
								{text "mission/multi/biorus99"}
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
												{tag biorus100}
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
								{text "mission/multi/biorus100"}
							}
						}
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
									{group
										{select
											{tag
												{tag talking}
											}
										}
										{include
											{tag
												{tag revcount1}
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
								{text "mission/multi/revinfo1"}
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
												{tag revcount2}
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
								{text "mission/multi/revinfo2"}
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
												{tag revcount3}
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
								{text "mission/multi/revinfo3"}
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
												{tag revcount4}
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
								{text "mission/multi/revinfo4"}
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
												{tag revcount5}
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
								{text "mission/multi/revinfo5"}
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
												{tag revcount6}
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
								{text "mission/multi/revinfo6"}
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
												{tag revcount7}
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
								{text "mission/multi/revinfo7"}
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
												{tag revcount8}
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
								{text "mission/multi/revinfo8"}
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
												{tag revcount9}
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
								{text "mission/multi/revinfo9"}
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
												{tag revcount10}
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
								{text "mission/multi/revinfo10"}
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
												{tag revcount11}
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
								{text "mission/multi/revinfo11"}
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
												{tag revcount12}
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
								{text "mission/multi/revinfo12"}
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
												{tag revcount13}
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
								{text "mission/multi/revinfo13"}
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
												{tag revcount14}
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
								{text "mission/multi/revinfo14"}
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
												{tag revcount15}
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
								{text "mission/multi/revinfo15"}
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
												{tag revcount16}
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
								{text "mission/multi/revinfo16"}
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
												{tag revcount17}
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
								{text "mission/multi/revinfo17"}
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
												{tag revcount18}
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
								{text "mission/multi/revinfo18"}
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
												{tag revcount19}
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
								{text "mission/multi/revinfo19"}
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
												{tag revcount20}
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
								{text "mission/multi/revinfo20"}
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
												{tag revcount21}
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
								{text "mission/multi/revinfo21"}
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
												{tag revcount22}
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
								{text "mission/multi/revinfo22"}
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
												{tag revcount23}
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
								{text "mission/multi/revinfo23"}
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
												{tag revcount24}
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
								{text "mission/multi/revinfo24"}
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
												{tag revcount25}
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
								{text "mission/multi/revinfo25"}
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
												{tag revcount26}
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
								{text "mission/multi/revinfo26"}
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
												{tag revcount27}
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
								{text "mission/multi/revinfo27"}
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
												{tag revcount28}
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
								{text "mission/multi/revinfo28"}
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
												{tag revcount29}
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
								{text "mission/multi/revinfo29"}
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
												{tag revcount30}
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
								{text "mission/multi/revinfo30"}
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
												{tag revcount31}
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
								{text "mission/multi/revinfo31"}
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
												{tag revcount32}
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
								{text "mission/multi/revinfo32"}
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
												{tag revcount33}
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
								{text "mission/multi/revinfo33"}
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
												{tag revcount34}
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
								{text "mission/multi/revinfo34"}
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
												{tag revcount35}
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
								{text "mission/multi/revinfo35"}
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
												{tag revcount36}
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
								{text "mission/multi/revinfo36"}
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
												{tag revcount37}
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
								{text "mission/multi/revinfo37"}
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
												{tag revcount38}
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
								{text "mission/multi/revinfo38"}
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
												{tag revcount39}
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
								{text "mission/multi/revinfo39"}
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
												{tag revcount40}
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
								{text "mission/multi/revinfo40"}
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
												{tag revcount41}
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
								{text "mission/multi/revinfo41"}
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
												{tag revcount42}
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
								{text "mission/multi/revinfo42"}
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
												{tag revcount43}
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
								{text "mission/multi/revinfo43"}
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
												{tag revcount44}
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
								{text "mission/multi/revinfo44"}
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
												{tag revcount45}
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
								{text "mission/multi/revinfo45"}
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
												{tag revcount46}
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
								{text "mission/multi/revinfo46"}
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
												{tag revcount47}
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
								{text "mission/multi/revinfo47"}
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
												{tag revcount48}
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
								{text "mission/multi/revinfo48"}
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
												{tag revcount49}
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
								{text "mission/multi/revinfo49"}
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
												{tag revcount50}
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
								{text "mission/multi/revinfo50"}
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
												{tag revcount51}
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
								{text "mission/multi/revinfo51"}
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
												{tag revcount52}
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
								{text "mission/multi/revinfo52"}
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
												{tag revcount53}
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
								{text "mission/multi/revinfo53"}
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
												{tag revcount54}
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
								{text "mission/multi/revinfo54"}
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
												{tag revcount55}
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
								{text "mission/multi/revinfo55"}
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
												{tag revcount56}
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
								{text "mission/multi/revinfo56"}
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
												{tag revcount57}
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
								{text "mission/multi/revinfo57"}
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
												{tag revcount58}
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
								{text "mission/multi/revinfo58"}
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
												{tag revcount59}
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
								{text "mission/multi/revinfo59"}
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
												{tag revcount60}
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
								{text "mission/multi/revinfo60"}
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
												{tag revcount61}
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
								{text "mission/multi/revinfo61"}
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
												{tag revcount62}
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
								{text "mission/multi/revinfo62"}
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
												{tag revcount63}
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
								{text "mission/multi/revinfo63"}
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
												{tag revcount64}
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
								{text "mission/multi/revinfo64"}
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
												{tag revcount65}
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
								{text "mission/multi/revinfo65"}
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
												{tag revcount66}
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
								{text "mission/multi/revinfo66"}
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
												{tag revcount66}
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
								{text "mission/multi/revinfo66"}
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
												{tag revcount67}
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
								{text "mission/multi/revinfo67"}
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
												{tag revcount68}
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
								{text "mission/multi/revinfo68"}
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
												{tag revcount69}
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
								{text "mission/multi/revinfo69"}
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
												{tag revcount70}
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
								{text "mission/multi/revinfo70"}
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
												{tag revcount71}
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
								{text "mission/multi/revinfo71"}
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
												{tag revcount72}
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
								{text "mission/multi/revinfo72"}
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
												{tag revcount73}
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
								{text "mission/multi/revinfo73"}
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
												{tag revcount74}
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
								{text "mission/multi/revinfo74"}
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
												{tag revcount75}
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
								{text "mission/multi/revinfo75"}
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
												{tag revcount76}
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
								{text "mission/multi/revinfo76"}
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
												{tag revcount77}
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
								{text "mission/multi/revinfo77"}
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
												{tag revcount78}
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
								{text "mission/multi/revinfo78"}
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
												{tag revcount79}
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
								{text "mission/multi/revinfo79"}
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
												{tag revcount80}
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
								{text "mission/multi/revinfo80"}
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
												{tag revcount81}
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
								{text "mission/multi/revinfo81"}
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
												{tag revcount82}
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
								{text "mission/multi/revinfo82"}
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
												{tag revcount83}
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
								{text "mission/multi/revinfo83"}
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
												{tag revcount84}
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
								{text "mission/multi/revinfo84"}
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
												{tag revcount85}
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
								{text "mission/multi/revinfo85"}
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
												{tag revcount86}
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
								{text "mission/multi/revinfo86"}
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
												{tag revcount87}
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
								{text "mission/multi/revinfo87"}
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
												{tag revcount88}
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
								{text "mission/multi/revinfo88"}
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
												{tag revcount89}
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
								{text "mission/multi/revinfo89"}
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
												{tag revcount90}
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
								{text "mission/multi/revinfo90"}
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
												{tag revcount91}
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
								{text "mission/multi/revinfo91"}
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
												{tag revcount92}
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
								{text "mission/multi/revinfo92"}
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
												{tag revcount93}
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
								{text "mission/multi/revinfo93"}
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
												{tag revcount94}
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
								{text "mission/multi/revinfo94"}
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
												{tag revcount95}
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
								{text "mission/multi/revinfo95"}
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
												{tag revcount96}
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
								{text "mission/multi/revinfo96"}
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
												{tag revcount97}
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
								{text "mission/multi/revinfo97"}
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
												{tag revcount98}
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
								{text "mission/multi/revinfo98"}
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
												{tag revcount99}
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
								{text "mission/multi/revinfo99"}
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
												{tag revcount100}
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
								{text "mission/multi/revinfo100"}
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
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
										{include
											{tag
												{tag cigs1}
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
								{text "mission/multi/smokeinfo1"}
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
												{tag cigs2}
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
								{text "mission/multi/smokeinfo2"}
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
												{tag cigs3}
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
								{text "mission/multi/smokeinfo3"}
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
												{tag cigs4}
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
								{text "mission/multi/smokeinfo4"}
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
												{tag cigs5}
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
								{text "mission/multi/smokeinfo5"}
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
												{tag cigs6}
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
								{text "mission/multi/smokeinfo6"}
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
												{tag cigs7}
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
								{text "mission/multi/smokeinfo7"}
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
												{tag cigs8}
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
								{text "mission/multi/smokeinfo8"}
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
												{tag cigs9}
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
								{text "mission/multi/smokeinfo9"}
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
												{tag cigs10}
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
								{text "mission/multi/smokeinfo10"}
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
												{tag cigs11}
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
								{text "mission/multi/smokeinfo11"}
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
												{tag cigs12}
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
								{text "mission/multi/smokeinfo12"}
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
												{tag cigs13}
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
								{text "mission/multi/smokeinfo13"}
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
												{tag cigs14}
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
								{text "mission/multi/smokeinfo14"}
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
												{tag cigs15}
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
								{text "mission/multi/smokeinfo15"}
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
												{tag cigs16}
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
								{text "mission/multi/smokeinfo16"}
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
												{tag cigs17}
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
								{text "mission/multi/smokeinfo17"}
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
												{tag cigs18}
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
								{text "mission/multi/smokeinfo18"}
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
												{tag cigs19}
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
								{text "mission/multi/smokeinfo19"}
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
												{tag cigs20}
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
								{text "mission/multi/smokeinfo20"}
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
												{tag cigs21}
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
								{text "mission/multi/smokeinfo21"}
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
												{tag cigs22}
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
								{text "mission/multi/smokeinfo22"}
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
												{tag cigs23}
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
								{text "mission/multi/smokeinfo23"}
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
												{tag cigs24}
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
								{text "mission/multi/smokeinfo24"}
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
												{tag cigs25}
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
								{text "mission/multi/smokeinfo25"}
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
												{tag cigs26}
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
								{text "mission/multi/smokeinfo26"}
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
												{tag cigs27}
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
								{text "mission/multi/smokeinfo27"}
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
												{tag cigs28}
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
								{text "mission/multi/smokeinfo28"}
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
												{tag cigs29}
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
								{text "mission/multi/smokeinfo29"}
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
												{tag cigs30}
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
								{text "mission/multi/smokeinfo30"}
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
												{tag cigs31}
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
								{text "mission/multi/smokeinfo31"}
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
												{tag cigs32}
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
								{text "mission/multi/smokeinfo32"}
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
												{tag cigs33}
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
								{text "mission/multi/smokeinfo33"}
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
												{tag cigs34}
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
								{text "mission/multi/smokeinfo34"}
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
												{tag cigs35}
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
								{text "mission/multi/smokeinfo35"}
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
												{tag cigs36}
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
								{text "mission/multi/smokeinfo36"}
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
												{tag cigs37}
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
								{text "mission/multi/smokeinfo37"}
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
												{tag cigs38}
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
								{text "mission/multi/smokeinfo38"}
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
												{tag cigs39}
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
								{text "mission/multi/smokeinfo39"}
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
												{tag cigs40}
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
								{text "mission/multi/smokeinfo40"}
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
												{tag cigs41}
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
								{text "mission/multi/smokeinfo41"}
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
												{tag cigs42}
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
								{text "mission/multi/smokeinfo42"}
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
												{tag cigs43}
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
								{text "mission/multi/smokeinfo43"}
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
												{tag cigs44}
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
								{text "mission/multi/smokeinfo44"}
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
												{tag cigs45}
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
								{text "mission/multi/smokeinfo45"}
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
												{tag cigs46}
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
								{text "mission/multi/smokeinfo46"}
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
												{tag cigs47}
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
								{text "mission/multi/smokeinfo47"}
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
												{tag cigs48}
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
								{text "mission/multi/smokeinfo48"}
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
												{tag cigs49}
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
								{text "mission/multi/smokeinfo49"}
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
												{tag cigs50}
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
								{text "mission/multi/smokeinfo50"}
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
												{tag cigs51}
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
								{text "mission/multi/smokeinfo51"}
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
												{tag cigs52}
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
								{text "mission/multi/smokeinfo52"}
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
												{tag cigs53}
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
								{text "mission/multi/smokeinfo53"}
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
												{tag cigs54}
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
								{text "mission/multi/smokeinfo54"}
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
												{tag cigs55}
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
								{text "mission/multi/smokeinfo55"}
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
												{tag cigs56}
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
								{text "mission/multi/smokeinfo56"}
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
												{tag cigs57}
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
								{text "mission/multi/smokeinfo57"}
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
												{tag cigs58}
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
								{text "mission/multi/smokeinfo58"}
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
												{tag cigs59}
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
								{text "mission/multi/smokeinfo59"}
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
												{tag cigs60}
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
								{text "mission/multi/smokeinfo60"}
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
												{tag cigs61}
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
								{text "mission/multi/smokeinfo61"}
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
												{tag cigs62}
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
								{text "mission/multi/smokeinfo62"}
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
												{tag cigs63}
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
								{text "mission/multi/smokeinfo63"}
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
												{tag cigs64}
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
								{text "mission/multi/smokeinfo64"}
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
												{tag cigs65}
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
								{text "mission/multi/smokeinfo65"}
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
												{tag cigs66}
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
								{text "mission/multi/smokeinfo66"}
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
												{tag cigs66}
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
								{text "mission/multi/smokeinfo66"}
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
												{tag cigs67}
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
								{text "mission/multi/smokeinfo67"}
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
												{tag cigs68}
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
								{text "mission/multi/smokeinfo68"}
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
												{tag cigs69}
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
								{text "mission/multi/smokeinfo69"}
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
												{tag cigs70}
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
								{text "mission/multi/smokeinfo70"}
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
												{tag cigs71}
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
								{text "mission/multi/smokeinfo71"}
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
												{tag cigs72}
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
								{text "mission/multi/smokeinfo72"}
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
												{tag cigs73}
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
								{text "mission/multi/smokeinfo73"}
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
												{tag cigs74}
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
								{text "mission/multi/smokeinfo74"}
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
												{tag cigs75}
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
								{text "mission/multi/smokeinfo75"}
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
												{tag cigs76}
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
								{text "mission/multi/smokeinfo76"}
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
												{tag cigs77}
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
								{text "mission/multi/smokeinfo77"}
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
												{tag cigs78}
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
								{text "mission/multi/smokeinfo78"}
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
												{tag cigs79}
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
								{text "mission/multi/smokeinfo79"}
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
												{tag cigs80}
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
								{text "mission/multi/smokeinfo80"}
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
												{tag cigs81}
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
								{text "mission/multi/smokeinfo81"}
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
												{tag cigs82}
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
								{text "mission/multi/smokeinfo82"}
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
												{tag cigs83}
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
								{text "mission/multi/smokeinfo83"}
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
												{tag cigs84}
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
								{text "mission/multi/smokeinfo84"}
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
												{tag cigs85}
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
								{text "mission/multi/smokeinfo85"}
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
												{tag cigs86}
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
								{text "mission/multi/smokeinfo86"}
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
												{tag cigs87}
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
								{text "mission/multi/smokeinfo87"}
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
												{tag cigs88}
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
								{text "mission/multi/smokeinfo88"}
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
												{tag cigs89}
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
								{text "mission/multi/smokeinfo89"}
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
												{tag cigs90}
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
								{text "mission/multi/smokeinfo90"}
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
												{tag cigs91}
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
								{text "mission/multi/smokeinfo91"}
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
												{tag cigs92}
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
								{text "mission/multi/smokeinfo92"}
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
												{tag cigs93}
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
								{text "mission/multi/smokeinfo93"}
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
												{tag cigs94}
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
								{text "mission/multi/smokeinfo94"}
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
												{tag cigs95}
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
								{text "mission/multi/smokeinfo95"}
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
												{tag cigs96}
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
								{text "mission/multi/smokeinfo96"}
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
												{tag cigs97}
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
								{text "mission/multi/smokeinfo97"}
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
												{tag cigs98}
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
								{text "mission/multi/smokeinfo98"}
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
												{tag cigs99}
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
								{text "mission/multi/smokeinfo99"}
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
												{tag cigs100}
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
								{text "mission/multi/smokeinfo100"}
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
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
										{include
											{tag
												{tag knockcount1}
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
								{text "mission/multi/knockinfo1"}
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
												{tag knockcount2}
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
								{text "mission/multi/knockinfo2"}
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
												{tag knockcount3}
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
								{text "mission/multi/knockinfo3"}
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
												{tag knockcount4}
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
								{text "mission/multi/knockinfo4"}
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
												{tag knockcount5}
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
								{text "mission/multi/knockinfo5"}
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
												{tag knockcount6}
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
								{text "mission/multi/knockinfo6"}
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
												{tag knockcount7}
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
								{text "mission/multi/knockinfo7"}
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
												{tag knockcount8}
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
								{text "mission/multi/knockinfo8"}
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
												{tag knockcount9}
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
								{text "mission/multi/knockinfo9"}
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
												{tag knockcount10}
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
								{text "mission/multi/knockinfo10"}
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
												{tag knockcount11}
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
								{text "mission/multi/knockinfo11"}
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
												{tag knockcount12}
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
								{text "mission/multi/knockinfo12"}
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
												{tag knockcount13}
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
								{text "mission/multi/knockinfo13"}
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
												{tag knockcount14}
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
								{text "mission/multi/knockinfo14"}
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
												{tag knockcount15}
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
								{text "mission/multi/knockinfo15"}
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
												{tag knockcount16}
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
								{text "mission/multi/knockinfo16"}
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
												{tag knockcount17}
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
								{text "mission/multi/knockinfo17"}
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
												{tag knockcount18}
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
								{text "mission/multi/knockinfo18"}
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
												{tag knockcount19}
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
								{text "mission/multi/knockinfo19"}
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
												{tag knockcount20}
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
								{text "mission/multi/knockinfo20"}
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
												{tag knockcount21}
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
								{text "mission/multi/knockinfo21"}
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
												{tag knockcount22}
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
								{text "mission/multi/knockinfo22"}
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
												{tag knockcount23}
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
								{text "mission/multi/knockinfo23"}
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
												{tag knockcount24}
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
								{text "mission/multi/knockinfo24"}
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
												{tag knockcount25}
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
								{text "mission/multi/knockinfo25"}
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
												{tag knockcount26}
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
								{text "mission/multi/knockinfo26"}
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
												{tag knockcount27}
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
								{text "mission/multi/knockinfo27"}
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
												{tag knockcount28}
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
								{text "mission/multi/knockinfo28"}
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
												{tag knockcount29}
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
								{text "mission/multi/knockinfo29"}
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
												{tag knockcount30}
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
								{text "mission/multi/knockinfo30"}
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
												{tag knockcount31}
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
								{text "mission/multi/knockinfo31"}
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
												{tag knockcount32}
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
								{text "mission/multi/knockinfo32"}
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
												{tag knockcount33}
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
								{text "mission/multi/knockinfo33"}
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
												{tag knockcount34}
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
								{text "mission/multi/knockinfo34"}
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
												{tag knockcount35}
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
								{text "mission/multi/knockinfo35"}
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
												{tag knockcount36}
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
								{text "mission/multi/knockinfo36"}
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
												{tag knockcount37}
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
								{text "mission/multi/knockinfo37"}
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
												{tag knockcount38}
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
								{text "mission/multi/knockinfo38"}
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
												{tag knockcount39}
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
								{text "mission/multi/knockinfo39"}
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
												{tag knockcount40}
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
								{text "mission/multi/knockinfo40"}
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
												{tag knockcount41}
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
								{text "mission/multi/knockinfo41"}
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
												{tag knockcount42}
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
								{text "mission/multi/knockinfo42"}
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
												{tag knockcount43}
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
								{text "mission/multi/knockinfo43"}
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
												{tag knockcount44}
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
								{text "mission/multi/knockinfo44"}
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
												{tag knockcount45}
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
								{text "mission/multi/knockinfo45"}
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
												{tag knockcount46}
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
								{text "mission/multi/knockinfo46"}
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
												{tag knockcount47}
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
								{text "mission/multi/knockinfo47"}
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
												{tag knockcount48}
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
								{text "mission/multi/knockinfo48"}
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
												{tag knockcount49}
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
								{text "mission/multi/knockinfo49"}
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
												{tag knockcount50}
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
								{text "mission/multi/knockinfo50"}
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
												{tag knockcount51}
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
								{text "mission/multi/knockinfo51"}
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
												{tag knockcount52}
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
								{text "mission/multi/knockinfo52"}
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
												{tag knockcount53}
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
								{text "mission/multi/knockinfo53"}
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
												{tag knockcount54}
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
								{text "mission/multi/knockinfo54"}
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
												{tag knockcount55}
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
								{text "mission/multi/knockinfo55"}
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
												{tag knockcount56}
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
								{text "mission/multi/knockinfo56"}
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
												{tag knockcount57}
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
								{text "mission/multi/knockinfo57"}
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
												{tag knockcount58}
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
								{text "mission/multi/knockinfo58"}
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
												{tag knockcount59}
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
								{text "mission/multi/knockinfo59"}
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
												{tag knockcount60}
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
								{text "mission/multi/knockinfo60"}
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
												{tag knockcount61}
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
								{text "mission/multi/knockinfo61"}
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
												{tag knockcount62}
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
								{text "mission/multi/knockinfo62"}
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
												{tag knockcount63}
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
								{text "mission/multi/knockinfo63"}
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
												{tag knockcount64}
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
								{text "mission/multi/knockinfo64"}
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
												{tag knockcount65}
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
								{text "mission/multi/knockinfo65"}
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
												{tag knockcount66}
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
								{text "mission/multi/knockinfo66"}
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
												{tag knockcount66}
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
								{text "mission/multi/knockinfo66"}
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
												{tag knockcount67}
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
								{text "mission/multi/knockinfo67"}
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
												{tag knockcount68}
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
								{text "mission/multi/knockinfo68"}
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
												{tag knockcount69}
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
								{text "mission/multi/knockinfo69"}
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
												{tag knockcount70}
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
								{text "mission/multi/knockinfo70"}
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
												{tag knockcount71}
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
								{text "mission/multi/knockinfo71"}
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
												{tag knockcount72}
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
								{text "mission/multi/knockinfo72"}
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
												{tag knockcount73}
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
								{text "mission/multi/knockinfo73"}
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
												{tag knockcount74}
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
								{text "mission/multi/knockinfo74"}
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
												{tag knockcount75}
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
								{text "mission/multi/knockinfo75"}
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
												{tag knockcount76}
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
								{text "mission/multi/knockinfo76"}
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
												{tag knockcount77}
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
								{text "mission/multi/knockinfo77"}
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
												{tag knockcount78}
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
								{text "mission/multi/knockinfo78"}
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
												{tag knockcount79}
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
								{text "mission/multi/knockinfo79"}
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
												{tag knockcount80}
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
								{text "mission/multi/knockinfo80"}
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
												{tag knockcount81}
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
								{text "mission/multi/knockinfo81"}
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
												{tag knockcount82}
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
								{text "mission/multi/knockinfo82"}
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
												{tag knockcount83}
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
								{text "mission/multi/knockinfo83"}
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
												{tag knockcount84}
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
								{text "mission/multi/knockinfo84"}
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
												{tag knockcount85}
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
								{text "mission/multi/knockinfo85"}
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
												{tag knockcount86}
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
								{text "mission/multi/knockinfo86"}
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
												{tag knockcount87}
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
								{text "mission/multi/knockinfo87"}
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
												{tag knockcount88}
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
								{text "mission/multi/knockinfo88"}
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
												{tag knockcount89}
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
								{text "mission/multi/knockinfo89"}
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
												{tag knockcount90}
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
								{text "mission/multi/knockinfo90"}
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
												{tag knockcount91}
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
								{text "mission/multi/knockinfo91"}
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
												{tag knockcount92}
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
								{text "mission/multi/knockinfo92"}
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
												{tag knockcount93}
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
								{text "mission/multi/knockinfo93"}
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
												{tag knockcount94}
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
								{text "mission/multi/knockinfo94"}
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
												{tag knockcount95}
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
								{text "mission/multi/knockinfo95"}
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
												{tag knockcount96}
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
								{text "mission/multi/knockinfo96"}
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
												{tag knockcount97}
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
								{text "mission/multi/knockinfo97"}
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
												{tag knockcount98}
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
								{text "mission/multi/knockinfo98"}
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
												{tag knockcount99}
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
								{text "mission/multi/knockinfo99"}
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
												{tag knockcount100}
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
								{text "mission/multi/knockinfo100"}
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
									{source advanced}
									{group
										{select
											{tag
												{tag talking}
											}
										}
										{include
											{tag
												{tag hitinf1}
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
								{text "mission/multi/hitinfo1"}
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
												{tag hitinf2}
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
								{text "mission/multi/hitinfo2"}
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
												{tag hitinf3}
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
								{text "mission/multi/hitinfo3"}
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
												{tag hitinf4}
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
								{text "mission/multi/hitinfo4"}
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
												{tag hitinf5}
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
								{text "mission/multi/hitinfo5"}
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
												{tag hitinf6}
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
								{text "mission/multi/hitinfo6"}
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
												{tag hitinf7}
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
								{text "mission/multi/hitinfo7"}
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
												{tag hitinf8}
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
								{text "mission/multi/hitinfo8"}
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
												{tag hitinf9}
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
								{text "mission/multi/hitinfo9"}
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
												{tag hitinf10}
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
								{text "mission/multi/hitinfo10"}
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
												{tag hitinf11}
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
								{text "mission/multi/hitinfo11"}
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
												{tag hitinf12}
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
								{text "mission/multi/hitinfo12"}
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
												{tag hitinf13}
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
								{text "mission/multi/hitinfo13"}
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
												{tag hitinf14}
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
								{text "mission/multi/hitinfo14"}
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
												{tag hitinf15}
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
								{text "mission/multi/hitinfo15"}
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
												{tag hitinf16}
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
								{text "mission/multi/hitinfo16"}
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
												{tag hitinf17}
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
								{text "mission/multi/hitinfo17"}
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
												{tag hitinf18}
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
								{text "mission/multi/hitinfo18"}
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
												{tag hitinf19}
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
								{text "mission/multi/hitinfo19"}
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
												{tag hitinf20}
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
								{text "mission/multi/hitinfo20"}
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
												{tag hitinf21}
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
								{text "mission/multi/hitinfo21"}
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
												{tag hitinf22}
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
								{text "mission/multi/hitinfo22"}
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
												{tag hitinf23}
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
								{text "mission/multi/hitinfo23"}
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
												{tag hitinf24}
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
								{text "mission/multi/hitinfo24"}
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
												{tag hitinf25}
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
								{text "mission/multi/hitinfo25"}
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
												{tag hitinf26}
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
								{text "mission/multi/hitinfo26"}
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
												{tag hitinf27}
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
								{text "mission/multi/hitinfo27"}
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
												{tag hitinf28}
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
								{text "mission/multi/hitinfo28"}
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
												{tag hitinf29}
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
								{text "mission/multi/hitinfo29"}
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
												{tag hitinf30}
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
								{text "mission/multi/hitinfo30"}
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
												{tag hitinf31}
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
								{text "mission/multi/hitinfo31"}
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
												{tag hitinf32}
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
								{text "mission/multi/hitinfo32"}
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
												{tag hitinf33}
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
								{text "mission/multi/hitinfo33"}
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
												{tag hitinf34}
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
								{text "mission/multi/hitinfo34"}
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
												{tag hitinf35}
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
								{text "mission/multi/hitinfo35"}
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
												{tag hitinf36}
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
								{text "mission/multi/hitinfo36"}
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
												{tag hitinf37}
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
								{text "mission/multi/hitinfo37"}
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
												{tag hitinf38}
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
								{text "mission/multi/hitinfo38"}
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
												{tag hitinf39}
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
								{text "mission/multi/hitinfo39"}
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
												{tag hitinf40}
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
								{text "mission/multi/hitinfo40"}
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
												{tag hitinf41}
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
								{text "mission/multi/hitinfo41"}
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
												{tag hitinf42}
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
								{text "mission/multi/hitinfo42"}
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
												{tag hitinf43}
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
								{text "mission/multi/hitinfo43"}
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
												{tag hitinf44}
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
								{text "mission/multi/hitinfo44"}
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
												{tag hitinf45}
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
								{text "mission/multi/hitinfo45"}
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
												{tag hitinf46}
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
								{text "mission/multi/hitinfo46"}
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
												{tag hitinf47}
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
								{text "mission/multi/hitinfo47"}
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
												{tag hitinf48}
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
								{text "mission/multi/hitinfo48"}
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
												{tag hitinf49}
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
								{text "mission/multi/hitinfo49"}
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
												{tag hitinf50}
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
								{text "mission/multi/hitinfo50"}
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
												{tag hitinf51}
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
								{text "mission/multi/hitinfo51"}
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
												{tag hitinf52}
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
								{text "mission/multi/hitinfo52"}
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
												{tag hitinf53}
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
								{text "mission/multi/hitinfo53"}
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
												{tag hitinf54}
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
								{text "mission/multi/hitinfo54"}
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
												{tag hitinf55}
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
								{text "mission/multi/hitinfo55"}
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
												{tag hitinf56}
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
								{text "mission/multi/hitinfo56"}
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
												{tag hitinf57}
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
								{text "mission/multi/hitinfo57"}
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
												{tag hitinf58}
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
								{text "mission/multi/hitinfo58"}
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
												{tag hitinf59}
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
								{text "mission/multi/hitinfo59"}
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
												{tag hitinf60}
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
								{text "mission/multi/hitinfo60"}
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
												{tag hitinf61}
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
								{text "mission/multi/hitinfo61"}
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
												{tag hitinf62}
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
								{text "mission/multi/hitinfo62"}
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
												{tag hitinf63}
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
								{text "mission/multi/hitinfo63"}
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
												{tag hitinf64}
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
								{text "mission/multi/hitinfo64"}
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
												{tag hitinf65}
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
								{text "mission/multi/hitinfo65"}
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
												{tag hitinf66}
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
								{text "mission/multi/hitinfo66"}
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
												{tag hitinf66}
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
								{text "mission/multi/hitinfo66"}
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
												{tag hitinf67}
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
								{text "mission/multi/hitinfo67"}
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
												{tag hitinf68}
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
								{text "mission/multi/hitinfo68"}
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
												{tag hitinf69}
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
								{text "mission/multi/hitinfo69"}
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
												{tag hitinf70}
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
								{text "mission/multi/hitinfo70"}
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
												{tag hitinf71}
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
								{text "mission/multi/hitinfo71"}
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
												{tag hitinf72}
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
								{text "mission/multi/hitinfo72"}
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
												{tag hitinf73}
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
								{text "mission/multi/hitinfo73"}
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
												{tag hitinf74}
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
								{text "mission/multi/hitinfo74"}
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
												{tag hitinf75}
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
								{text "mission/multi/hitinfo75"}
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
												{tag hitinf76}
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
								{text "mission/multi/hitinfo76"}
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
												{tag hitinf77}
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
								{text "mission/multi/hitinfo77"}
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
												{tag hitinf78}
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
								{text "mission/multi/hitinfo78"}
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
												{tag hitinf79}
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
								{text "mission/multi/hitinfo79"}
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
												{tag hitinf80}
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
								{text "mission/multi/hitinfo80"}
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
												{tag hitinf81}
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
								{text "mission/multi/hitinfo81"}
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
												{tag hitinf82}
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
								{text "mission/multi/hitinfo82"}
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
												{tag hitinf83}
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
								{text "mission/multi/hitinfo83"}
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
												{tag hitinf84}
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
								{text "mission/multi/hitinfo84"}
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
												{tag hitinf85}
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
								{text "mission/multi/hitinfo85"}
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
												{tag hitinf86}
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
								{text "mission/multi/hitinfo86"}
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
												{tag hitinf87}
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
								{text "mission/multi/hitinfo87"}
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
												{tag hitinf88}
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
								{text "mission/multi/hitinfo88"}
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
												{tag hitinf89}
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
								{text "mission/multi/hitinfo89"}
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
												{tag hitinf90}
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
								{text "mission/multi/hitinfo90"}
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
												{tag hitinf91}
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
								{text "mission/multi/hitinfo91"}
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
												{tag hitinf92}
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
								{text "mission/multi/hitinfo92"}
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
												{tag hitinf93}
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
								{text "mission/multi/hitinfo93"}
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
												{tag hitinf94}
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
								{text "mission/multi/hitinfo94"}
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
												{tag hitinf95}
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
								{text "mission/multi/hitinfo95"}
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
												{tag hitinf96}
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
								{text "mission/multi/hitinfo96"}
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
												{tag hitinf97}
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
								{text "mission/multi/hitinfo97"}
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
												{tag hitinf98}
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
								{text "mission/multi/hitinfo98"}
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
												{tag hitinf99}
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
								{text "mission/multi/hitinfo99"}
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
												{tag hitinf100}
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
								{text "mission/multi/hitinfo100"}
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
												{tag battle21}
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
								{text "mission/multi/Battle21"}
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
												{tag battle22}
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
								{text "mission/multi/Battle22"}
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
												{tag battle23}
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
								{text "mission/multi/Battle23"}
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
												{tag battle24}
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
								{text "mission/multi/Battle24"}
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
												{tag battle25}
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
								{text "mission/multi/Battle25"}
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
												{tag battle26}
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
								{text "mission/multi/Battle26"}
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
												{tag battle27}
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
								{text "mission/multi/Battle27"}
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
												{tag battle28}
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
								{text "mission/multi/Battle28"}
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
												{tag battle29}
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
								{text "mission/multi/Battle29"}
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
												{tag battle30}
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
								{text "mission/multi/Battle30"}
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
												{tag battle31}
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
								{text "mission/multi/Battle31"}
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
												{tag battle32}
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
								{text "mission/multi/Battle32"}
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
												{tag battle33}
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
								{text "mission/multi/Battle33"}
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
												{tag battle34}
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
								{text "mission/multi/Battle34"}
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
												{tag battle35}
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
								{text "mission/multi/Battle35"}
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
												{tag battle36}
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
								{text "mission/multi/Battle36"}
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
												{tag battle37}
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
								{text "mission/multi/Battle37"}
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
												{tag battle38}
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
								{text "mission/multi/Battle38"}
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
												{tag battle39}
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
								{text "mission/multi/Battle39"}
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
												{tag battle40}
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
								{text "mission/multi/Battle40"}
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
												{tag battle41}
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
								{text "mission/multi/Battle41"}
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
												{tag battle42}
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
								{text "mission/multi/Battle42"}
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
												{tag battle43}
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
								{text "mission/multi/Battle43"}
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
												{tag battle44}
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
								{text "mission/multi/Battle44"}
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
												{tag battle45}
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
								{text "mission/multi/Battle45"}
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
												{tag battle46}
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
								{text "mission/multi/Battle46"}
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
												{tag battle47}
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
								{text "mission/multi/Battle47"}
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
												{tag battle48}
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
								{text "mission/multi/Battle48"}
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
												{tag battle49}
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
								{text "mission/multi/Battle49"}
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
												{tag battle50}
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
								{text "mission/multi/Battle50"}
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
												{tag battle51}
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
								{text "mission/multi/Battle51"}
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
												{tag battle52}
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
								{text "mission/multi/Battle52"}
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
												{tag battle53}
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
								{text "mission/multi/Battle53"}
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
												{tag battle54}
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
								{text "mission/multi/Battle54"}
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
												{tag battle55}
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
								{text "mission/multi/Battle55"}
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
												{tag battle56}
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
								{text "mission/multi/Battle56"}
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
												{tag battle57}
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
								{text "mission/multi/Battle57"}
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
												{tag battle58}
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
								{text "mission/multi/Battle58"}
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
												{tag battle59}
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
								{text "mission/multi/Battle59"}
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
												{tag battle60}
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
								{text "mission/multi/Battle60"}
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
												{tag battle61}
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
								{text "mission/multi/Battle61"}
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
												{tag battle62}
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
								{text "mission/multi/Battle62"}
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
												{tag battle63}
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
								{text "mission/multi/Battle63"}
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
												{tag battle64}
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
								{text "mission/multi/Battle64"}
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
												{tag battle65}
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
								{text "mission/multi/Battle65"}
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
												{tag battle66}
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
								{text "mission/multi/Battle66"}
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
												{tag battle66}
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
								{text "mission/multi/Battle66"}
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
												{tag battle67}
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
								{text "mission/multi/Battle67"}
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
												{tag battle68}
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
								{text "mission/multi/Battle68"}
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
												{tag battle69}
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
								{text "mission/multi/Battle69"}
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
												{tag battle70}
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
								{text "mission/multi/Battle70"}
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
												{tag battle71}
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
								{text "mission/multi/Battle71"}
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
												{tag battle72}
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
								{text "mission/multi/Battle72"}
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
												{tag battle73}
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
								{text "mission/multi/Battle73"}
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
												{tag battle74}
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
								{text "mission/multi/Battle74"}
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
												{tag battle75}
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
								{text "mission/multi/Battle75"}
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
												{tag battle76}
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
								{text "mission/multi/Battle76"}
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
												{tag battle77}
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
								{text "mission/multi/Battle77"}
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
												{tag battle78}
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
								{text "mission/multi/Battle78"}
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
												{tag battle79}
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
								{text "mission/multi/Battle79"}
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
												{tag battle80}
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
								{text "mission/multi/Battle80"}
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
												{tag battle81}
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
								{text "mission/multi/Battle81"}
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
												{tag battle82}
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
								{text "mission/multi/Battle82"}
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
												{tag battle83}
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
								{text "mission/multi/Battle83"}
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
												{tag battle84}
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
								{text "mission/multi/Battle84"}
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
												{tag battle85}
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
								{text "mission/multi/Battle85"}
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
												{tag battle86}
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
								{text "mission/multi/Battle86"}
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
												{tag battle87}
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
								{text "mission/multi/Battle87"}
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
												{tag battle88}
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
								{text "mission/multi/Battle88"}
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
												{tag battle89}
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
								{text "mission/multi/Battle89"}
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
												{tag battle90}
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
								{text "mission/multi/Battle90"}
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
												{tag battle91}
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
								{text "mission/multi/Battle91"}
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
												{tag battle92}
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
								{text "mission/multi/Battle92"}
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
												{tag battle93}
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
								{text "mission/multi/Battle93"}
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
												{tag battle94}
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
								{text "mission/multi/Battle94"}
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
												{tag battle95}
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
								{text "mission/multi/Battle95"}
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
												{tag battle96}
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
								{text "mission/multi/Battle96"}
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
												{tag battle97}
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
								{text "mission/multi/Battle97"}
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
												{tag battle98}
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
								{text "mission/multi/Battle98"}
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
												{tag battle99}
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
								{text "mission/multi/Battle99"}
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
												{tag battle100}
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
								{text "mission/multi/Battle100"}
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
						{name "player_scripts/tellaboutyourself"}
					}
				}
			}
			{"player_scripts/soldiernation"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag player}
								{state operatable}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 30}
					}
					{"switch"
						{"case"
									{condition
										{type inventory}
										{selector
											{ignore_captured_by_user 0}
											{tag player}
											{zone "gamezone"}
											{type human}
											{state "not dead"}
										}
										{item "bandage_rus"}
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
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag russoldier}
											}
										}
									}
								}
								{tag_add russoldier}
							}
						}
						{"case"
							{condition
										{type inventory}
										{selector
											{ignore_captured_by_user 0}
											{tag player}
											{zone "gamezone"}
											{type human}
											{state "not dead"}
										}
										{item "bandage_ger"}
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
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag gersoldier}
											}
										}
									}
								}
								{tag_add gersoldier}
							}
						}
					}
					{"delay"
						{time 300}
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
												{tag player}
											}
										}
										{include
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag russoldier}
											}
										}
									}
								}
								{tag_add russoldier}
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
												{tag player}
											}
										}
										{include
											{prop
												{prop human}
											}
										}
										{exclude
											{tag
												{tag gersoldier}
											}
										}
									}
								}
								{tag_add gersoldier}
							}
						}
					}
				}
			}
			{"player_scripts/conquest_enhanced/goresupply"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag flare}
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
										{tag
											{tag noammo}
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
						{time 1}
					}
					{"if"
						{condition
							{type near}
							{units
								{tag noammo}
							}
							{near_to
								{tag flare}
							}
							{distance 50}
						}
						{"entity_state"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag noammo}
										}
									}
									{exclude
										{tag
											{tag goresupply}
										}
									}
								}
								{amount 5
								}
								{sort
									{type entity}
									{entity
										{amount 5
										}
										{tag flare}
									}
								}
							}
							{tag_add goresupply}
						}
					}
					{"delay"
						{time 2}
					}
					{"action"
						{selector
							{tag goresupply}
						}
						{action move}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag ammo_point}
									}
									{tag
										{tag ammo}
									}
									{tag
										{tag ammocrate}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{amount 1
									}
									{tag flare}
								}
							}
							{amount 1
							}
						}
					}
					{"entity_state"
						{selector
							{tag goresupply}
						}
						{tag_remove goresupply}
					}
					{"delay"
						{time 2}
					}
					{"delay"
						{time 6}
					}
					{"trigger"
						{name "player_scripts/conquest_enhanced/goresupply"}
					}
				}
			}
			{"player_scripts/clean_player_tags"
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
					{"call"
						{function "remove_incorrect_tags_from_player"}
					}
					{"delay"
						{time 300}
					}
					{"trigger"
						{name "player_scripts/clean_player_tags"}
					}
				}
			}
			{"player_scripts/medicscript"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag medicmarker}
							}
						}
					}
				}
				{actions
					{"call"
						{function "medic"}
					}
					{"delay"
						{time 3}
					}
					{"talk"
						{selector
							{tag medic1}
						}
						{text "mission/multi/goingheal"}
					}
					{"delay"
						{time 25}
					}
					{"trigger"
						{name "player_scripts/medicscript"}
					}
				}
			}
			{## "player_scripts/digfoxholes"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag pointer_enemy}
										}
									}
									{exclude
										{tag
											{tag pointer_used}
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
					{"effect"
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
									{with_item
										{type amount}
										{item "shovel_rus"}
										{min 1}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "pickaxe"}
										{min 1}
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
									{tag
										{tag digging}
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
										{type amount}
										{item "shovel_ger"}
										{min 1}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "pickaxe"}
										{min 1}
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
									{tag
										{tag digging}
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
										{type amount}
										{item "us_haversack_shovel"}
										{min 1}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "pickaxe"}
										{min 1}
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
									{tag
										{tag digging}
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
										{type amount}
										{item "small_inf_shovel"}
										{min 1}
									}
									{prop
										{prop human}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "pickaxe"}
										{min 1}
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
									{tag
										{tag digging}
									}
								}
							}
							{amount 5
							}
							{sort
								{type entity}
								{entity
									{source advanced}
									{group
										{select
											{tag
												{tag pointer_enemy}
											}
										}
										{exclude
											{tag
												{tag pointer_used}
											}
										}
									}
								}
							}
						}
						{effect build_foxhole_for_chat_wheel}
					}
					{"delay"
						{time 1}
					}
					{## "inventory"
						{selector
							{amount 5
							}
							{tag digging}
						}
						{action take}
						{item "shovel_rus"}
					}
					{## "delay"
						{time 1}
					}
					{"animation"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag digging}
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
										{state linked}
									}
									{state
										{state inactive}
									}
									{tag
										{tag digging_animation_started}
									}
								}
							}
						}
						{drop orders}
						{collage stand_dig_trench}
						{cicledelay 0}
						{delay 0}
						{totalTime 18}
						{flags loop}
					}
					{## "action"
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
									{with_item
										{type amount}
										{item "shovel_rus"}
										{min 1}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "pickaxe"}
										{min 1}
									}
								}
							}
							{amount 5
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
										{type amount}
										{item "shovel_ger"}
										{min 1}
									}
								}
								{exclude
									{with_item
										{type amount}
										{item "pickaxe"}
										{min 1}
									}
								}
							}
							{sort
								{type entity}
								{entity
									{tag pointer_enemy}
								}
							}
						}
						{action foxhole_group}
						{target
							{tag player}
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
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/dig1"}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.33}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/dig2"}
							}
						}
						{"case"
							{condition
								{type rand}
								{value 0.34}
							}
							{"talk"
								{selector
									{amount 1
									}
									{tag player}
									{state operatable}
								}
								{text "mission/multi/dig3"}
							}
						}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "player_scripts/digfoxholes"}
					}
				}
			}
			{"planecontrol"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag playerplane}
								{state operatable}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 2}
					}
					{"actor_state"
						{selector
							{tag playerplane}
							{state operatable}
						}
						{control user}
					}
					{"ables"
						{selector
							{tag playerplane}
						}
						{add "select recruit"}
					}
					{"delay"
						{time 10}
					}
					{"trigger"
						{name "planecontrol"}
					}
				}
			}
			{"player_scripts/identified_enemy_officer"
				{condition
					{terms
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
										{tag
											{tag identified_by_player}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"call"
						{function "talk_identify_ai_officer"}
					}
					{"delay"
						{time 0.5}
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
									{state
										{state operatable}
									}
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
										{state user_control}
									}
									{tag
										{tag identified_by_player}
									}
								}
							}
							{amount 1
							}
						}
						{effect mark_ai_officer_on_minimap}
					}
					{"delay"
						{time 180}
					}
					{"trigger"
						{name "player_scripts/identified_enemy_officer"}
					}
				}
			}			
			{"autolinking"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag towing_marker}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 1}
					}
					{"call"
						{function "link"}
					}
					{"delay"
						{time 12}
					}
					{"trigger"
						{name "autolinking"}
					}
				}
			}
			{"conquest_enhanced/noreinforcementtalk"
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
						{time 15}
					}
					{"if"
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
									{exclude
										{tag
											{tag acknowledged}
										}
									}
								}
							}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 0.3}
								}
								{"talk"
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
												{state
													{state inactive}
												}
											}
										}
										{amount 1
										}
									}
									{text "mission/multi/no_reinforcements1"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.3}
								}
								{"talk"
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
												{state
													{state inactive}
												}
											}
										}
										{amount 1
										}
									}
									{text "mission/multi/no_reinforcements2"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.4}
								}
								{"talk"
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
												{state
													{state inactive}
												}
											}
										}
										{amount 1
										}
									}
									{text "mission/multi/no_reinforcements3"}
								}
							}
						}
					}
				}
			}
			{## "player_scripts/surrender/surrender"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag pointer_enemy}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 4}
					}
					{## "entity_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
								}
								{exclude
									{state
										{state dead}
									}
								}
							}
						}
						{tag_add g}
						{inactive on}
					}
					{"talk"
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
							{amount 1
							}
						}
						{text "mission/multi/ask_to_surrender"}
					}
					{"delay"
						{time 7}
					}
					{if 
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag pointer_enemy}
										}
									}
								}
							}
						}
						{"delay"
							{time 0.5}
						}
						{"actor_state"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{zone
											{zone "gamezone"}
										}
										{zone_ex
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
									}
								}
							}
							{drop orders}
							{fire_mode hold}
							{move_mode hold}
						}
						{"delay"
							{time 1}
						}
						{"ables"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
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
									}
									{exclude
										{state
											{state dead}
										}
									}
								}
							}
							{remove select}
						}
						{"delay"
							{time 1}
						}
						{"placement"
							{selector
								{amount 1
								}
								{tag cookie_hawk}
								{type human}
							}
							{target
								{source advanced}
								{group
									{select
										{zone_ex
											{zone "gamezone"}
										}
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
											{state inactive}
										}
										{state
											{state dead}
										}
									}
								}
								{amount 1
								}
							}
							{target_waypoint " "}
							{clone}
						}
						{"delay"
							{time 1}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 0.5}
								}
								{"talk"
									{selector
										{source advanced}
										{ignore_captured_by_user 0}
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
											}
										}
										{amount 1
										}
									}
									{text "mission/multi/cookie_hawk_appear_1"}
								}
							}
							{"default"
								{"talk"
									{selector
										{amount 1
										}
										{tag cookie_hawk}
									}
									{text "mission/multi/cookie_hawk_response"}
								}
							}
						}
						{"delay"
							{time 3}
						}
						{"actor_state"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
								{group
									{select
										{tag
											{tag cookie_hawk}
										}
									}
									{exclude
										{state
											{state inactive}
										}
									}
								}
							}
							{drop orders}
							{fire_mode hold}
						}
						{"delay"
							{time 0.5}
						}
						{"emit"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
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
										{state
											{state chassis_work}
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
						{"delay"
							{time 4}
						}
						{## "action"
							{selector
								{tag player}
								{type human}
								{state "not dead"}
							}
							{action drop}
						}
						{"inventory"
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
										{prop
											{prop human}
										}
										{state
											{state user_control}
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
							{action drop}
						}
						{"delay"
							{time 1}
						}
						{"animation"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
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
							}
							{collage stand_surrender_idle}
							{cicledelay 0}
							{delay 0}
							{flags loop}
						}
						{"delay"
							{time 1}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 0.5}
								}
								{"talk"
									{selector
										{ignore_captured_by_user 0}
										{amount 1
										}
										{tag cookie_hawk}
										{type human}
									}
									{text "mission/multi/cookie_hawk_demand_sacrafice_1"}
								}
								{"delay"
									{time 2}
								}
								{"actor_state"
									{selector
										{amount 1
										}
										{tag cookie_hawk}
										{type human}
									}
									{fire_mode open}
								}
								{"delay"
									{time 2}
								}
								{"loop" 4
									{"placement"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cookie_hawk}
													}
												}
												{include
													{state
														{state inactive}
													}
												}
											}
										}
										{target
											{source advanced}
											{group
												{select
													{zone_ex
														{zone "gamezone"}
													}
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
														{state inactive}
													}
													{state
														{state dead}
													}
												}
											}
											{amount 3
											}
										}
										{target_waypoint " "}
										{clone}
									}
									{"delay"
										{time 1}
									}
								}
							}
							{"default"
								{"talk"
									{selector
										{amount 1
										}
										{tag cookie_hawk}
									}
									{text "mission/multi/cookie_hawk_demand_sacrafice_2"}
								}
								{"delay"
									{time 2}
								}
								{"loop" 4
									{"placement"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag cookie_hawk}
													}
												}
												{include
													{state
														{state inactive}
													}
												}
											}
										}
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
														{prop vehicle}
													}
												}
												{exclude
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
										{target_waypoint " "}
										{clone}
									}
									{"delay"
										{time 1}
									}
								}
								{"delay"
									{time 3}
								}
								{"board"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag cookie_hawk}
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
													{state dead}
												}
											}
										}
									}
									{vehicle
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
													{state user_control}
												}
											}
											{exclude
												{destroyed_components
													{masks
														"body"
													}
												}
												{broken_components
													{masks
														"body"
													}
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
															{tag cookie_hawk}
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
							}
						}
						{"delay"
							{time 10}
						}
						{"actor_component"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
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
											{state inhabited}
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
							{component body}
							{state destroyed}
						}
						{"delay"
							{time 1}
						}
						{"ables"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
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
									}
								}
							}
							{add select}
						}
						{"delay"
							{time 1}
						}
						{"player"
							{selector
								{source advanced}
								{ignore_captured_by_user 0}
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
									}
									{exclude
										{state
											{state dead}
										}
									}
								}
							}
							{operation set}
							{player "2"}
						}
					}
					{"delay"
						{time 15}
					}
					{"trigger"
						{name "player_scripts/surrender/surrender"}
					}
				}
			}
			{## "player_scripts/surrender/surrender_confirm"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag pointer_enemy}
							}
							{count
								{op ">"}
								{value 0}
							}
						}
						{"3.cmp_i"
							{var "surrender_confirm_count$"}
							{op "="}
							{value 1}
						}
					}
				}
				{actions
					{## "actor_state"
						{selector
							{source advanced}
							{group
								{select
									{zone
										{zone "gamezone"}
									}
								}
								{include
									{player}
									{state}
								}
							}
						}
						{fire_mode hold}
					}
					{## "delay"
						{time 1}
					}
					{"delay"
						{time 0.5}
					}
					{"actor_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{zone
										{zone "gamezone"}
									}
									{zone_ex
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
								}
							}
						}
						{drop orders}
						{fire_mode hold}
						{move_mode hold}
					}
					{"delay"
						{time 1}
					}
					{"ables"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
								}
								{exclude
									{state
										{state dead}
									}
								}
							}
						}
						{remove select}
					}
					{"delay"
						{time 1}
					}
					{"placement"
						{selector
							{amount 1
							}
							{tag cookie_hawk}
							{type human}
						}
						{target
							{source advanced}
							{group
								{select
									{zone_ex
										{zone "gamezone"}
									}
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
										{state inactive}
									}
									{state
										{state dead}
									}
								}
							}
							{amount 1
							}
						}
						{target_waypoint " "}
						{clone}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"talk"
								{selector
									{source advanced}
									{ignore_captured_by_user 0}
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
										}
									}
								}
								{text "mission/multi/cookie_hawk_appear_1"}
							}
						}
						{"default"
							{"talk"
								{selector
									{amount 1
									}
									{tag cookie_hawk}
								}
								{text "mission/multi/cookie_hawk_response"}
							}
						}
					}
					{"delay"
						{time 3}
					}
					{"actor_state"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
							{group
								{select
									{tag
										{tag cookie_hawk}
									}
								}
								{exclude
									{state
										{state inactive}
									}
								}
							}
						}
						{drop orders}
						{fire_mode hold}
					}
					{"delay"
						{time 0.5}
					}
					{"emit"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
									{state
										{state chassis_work}
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
					{"delay"
						{time 4}
					}
					{## "action"
						{selector
							{tag player}
							{type human}
							{state "not dead"}
						}
						{action drop}
					}
					{"inventory"
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
									{prop
										{prop human}
									}
									{state
										{state user_control}
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
						{action drop}
					}
					{"delay"
						{time 1}
					}
					{"animation"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
						}
						{collage stand_surrender_idle}
						{cicledelay 0}
						{delay 0}
						{flags loop}
					}
					{"delay"
						{time 1}
					}
					{"switch"
						{"case"
							{condition
								{type rand}
								{value 0.5}
							}
							{"talk"
								{selector
									{ignore_captured_by_user 0}
									{amount 1
									}
									{tag cookie_hawk}
									{type human}
								}
								{text "mission/multi/cookie_hawk_demand_sacrafice_1"}
							}
							{"delay"
								{time 2}
							}
							{"actor_state"
								{selector
									{amount 1
									}
									{tag cookie_hawk}
									{type human}
								}
								{fire_mode open}
							}
							{"delay"
								{time 2}
							}
							{"loop" 4
								{"placement"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag cookie_hawk}
												}
											}
											{include
												{state
													{state inactive}
												}
											}
										}
									}
									{target
										{source advanced}
										{group
											{select
												{zone_ex
													{zone "gamezone"}
												}
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
													{state inactive}
												}
												{state
													{state dead}
												}
											}
										}
										{amount 1
										}
									}
									{target_waypoint " "}
									{clone}
								}
								{"delay"
									{time 1}
								}
							}
						}
						{"default"
							{"talk"
								{selector
									{amount 1
									}
									{tag cookie_hawk}
								}
								{text "mission/multi/cookie_hawk_demand_sacrafice_2"}
							}
							{"delay"
								{time 2}
							}
							{"loop" 4
								{"placement"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag cookie_hawk}
												}
											}
											{include
												{state
													{state inactive}
												}
											}
										}
									}
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
													{prop vehicle}
												}
											}
											{exclude
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
									{target_waypoint " "}
									{clone}
								}
								{"delay"
									{time 1}
								}
							}
							{"delay"
								{time 3}
							}
							{"board"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag cookie_hawk}
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
												{state dead}
											}
										}
									}
								}
								{vehicle
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
												{state user_control}
											}
										}
										{exclude
											{destroyed_components
												{masks
													"body"
												}
											}
											{broken_components
												{masks
													"body"
												}
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
														{tag cookie_hawk}
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
						}
					}
					{"delay"
						{time 10}
					}
					{"actor_component"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
										{state inhabited}
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
						{component body}
						{state destroyed}
					}
					{"delay"
						{time 1}
					}
					{"ables"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
								}
							}
						}
						{add select}
					}
					{"delay"
						{time 1}
					}
					{"player"
						{selector
							{source advanced}
							{ignore_captured_by_user 0}
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
								}
								{exclude
									{state
										{state dead}
									}
								}
							}
						}
						{operation set}
						{player "2"}
					}
				}
			}
		