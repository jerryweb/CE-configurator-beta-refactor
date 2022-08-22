			{"player_paratroopers/drop_player_group_0"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag pointer_player_paratrooper}
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
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_drop_plane_0}
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
										{tag
											{tag player_plane_dropping}
										}
										{tag
											{tag player_plane_dropped}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"call"
						{function "assign_player_paras"}
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
										{tag player_drop_plane_0}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{tag
										{tag aircraft}
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
										{tag player_plane_dropping}
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
												{tag pointer_player_paratrooper}
											}
										}
										{exclude
											{tag
												{tag pointer_used}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{tag_add player_plane_dropping}
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
											{tag player_para}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state linked}
										}
										{tag
											{tag player}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
										{tag player_drop_plane_0}
										{type vehicle}
										{state operatable}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 0.25}
						}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "player_paratroopers/drop_player_group_0"}
					}
				}
			}
			{"player_paratroopers/drop_player_group_1"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag pointer_player_paratrooper}
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
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_drop_plane_1}
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
										{tag
											{tag player_plane_dropping}
										}
										{tag
											{tag player_plane_dropped}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"call"
						{function "assign_player_paras"}
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
										{tag player_drop_plane_1}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{tag
										{tag aircraft}
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
										{tag player_plane_dropping}
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
												{tag pointer_player_paratrooper}
											}
										}
										{exclude
											{tag
												{tag pointer_used}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{tag_add player_plane_dropping}
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
											{tag player_para}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state linked}
										}
										{tag
											{tag player}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
										{tag player_drop_plane_1}
										{type vehicle}
										{state operatable}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 0.25}
						}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "player_paratroopers/drop_player_group_1"}
					}
				}
			}
			{"player_paratroopers/drop_player_group_2"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag pointer_player_paratrooper}
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
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_drop_plane_2}
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
										{tag
											{tag player_plane_dropping}
										}
										{tag
											{tag player_plane_dropped}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"call"
						{function "assign_player_paras"}
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
										{tag player_drop_plane_2}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{tag
										{tag aircraft}
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
										{tag player_plane_dropping}
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
												{tag pointer_player_paratrooper}
											}
										}
										{exclude
											{tag
												{tag pointer_used}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{tag_add player_plane_dropping}
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
											{tag player_para}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state linked}
										}
										{tag
											{tag player}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
										{tag player_drop_plane_2}
										{type vehicle}
										{state operatable}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 0.25}
						}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "player_paratroopers/drop_player_group_2"}
					}
				}
			}
			{"player_paratroopers/drop_player_group_3"
				{condition
					{terms
						{"1.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag pointer_player_paratrooper}
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
						{"2.entities"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag player_drop_plane_3}
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
										{tag
											{tag player_plane_dropping}
										}
										{tag
											{tag player_plane_dropped}
										}
									}
								}
							}
						}
					}
				}
				{actions
					{"delay"
						{time 0.2}
					}
					{"call"
						{function "assign_player_paras"}
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
										{tag player_drop_plane_3}
									}
								}
								{include
									{prop
										{prop vehicle}
									}
									{tag
										{tag aircraft}
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
										{tag player_plane_dropping}
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
												{tag pointer_player_paratrooper}
											}
										}
										{exclude
											{tag
												{tag pointer_used}
											}
										}
									}
									{amount 1
									}
								}
							}
						}
						{tag_add player_plane_dropping}
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
											{tag player_para}
										}
									}
									{include
										{prop
											{prop human}
										}
										{state
											{state linked}
										}
										{tag
											{tag player}
										}
									}
									{exclude
										{state
											{state dead}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
										{tag player_drop_plane_3}
										{type vehicle}
										{state operatable}
									}
								}
								{amount 1
								}
							}
						}
						{"delay"
							{time 0.25}
						}
					}
					{"delay"
						{time 5}
					}
					{"trigger"
						{name "player_paratroopers/drop_player_group_3"}
					}
				}
			}
			{"player_paratroopers/set_max_player_drop_plane_count"
				{condition
				}
				{actions
					{"delay"
						{time 2}
					}
					{"set_i"
						{var "max_count_of_player_drop_planes$"}
						{op "="}
						{value 4}
					}
				}
			}
			{"player_paratroopers/assign_player_drop_plane_group"
				{condition
					{terms
						{"1.entities"
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
										{prop
											{prop vehicle}
										}
									}
									{exclude
										{tag
											{tag player_drop_plane_assigned}
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
						{time 0.5}
					}
					{"call"
						{function "assign_drop_group_for_player_drop_plane"}
					}
					{"delay"
						{time 2}
					}
					{"trigger"
						{name "player_paratroopers/assign_player_drop_plane_group"}
					}
				}
			}