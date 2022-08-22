			{"ai_spawn/move_spawns_for_small_maps/tag_and_move_ai_spawns"
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
					{"delay"
						{time 1}
					}
					{"call"
						{function "reset_ai_spawn_zones"}
					}
				}
			}