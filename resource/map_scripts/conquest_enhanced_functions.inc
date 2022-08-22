; ========== Initialization Functions ==========		
			{"delete_rus_ai_planes"
				{"delay"
					{time 0.1}
				}
				{"delete"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag airstrike_rus}
								}
								{tag
									{tag extraplanerus}
								}
								{tag
									{tag recon_plane_rus}
								}
							}
						}
					}
				}
			}
			{"delete_ger_ai_planes"
				{"delay"
					{time 0.1}
				}
				{"delete"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag airstrike_ger}
								}
								{tag
									{tag extraplaneger}
								}
								{tag
									{tag recon_plane_ger}
								}
							}
						}
					}
				}
			}
			{"delete_fin_ai_planes"
				{"delay"
					{time 0.1}
				}
				{"delete"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag airstrike_fin}
								}
								{tag
									{tag extraplanefin}
								}
								{tag
									{tag recon_plane_fin}
								}
							}
						}
					}
				}
			}
			{"delete_axis_player_support_planes"
				{"delay"
					{time 0.1}
				}
				{"delete"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag airsupportger}
								}
								{tag
									{tag airsupportfin}
								}
							}
						}
					}
				}
			}
			{"delete_allies_player_support_planes"
				{"delay"
					{time 0.1}
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
						}
					}
				}
			}
			{"set_ai_planes_to_ai_team"
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
									{include
										{player
											{player "2"}
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
								}
							}
							{operation set}
							{player "2"}
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
								}
							}
							{operation set}
							{player "2"}
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
									{include
										{player
											{player "3"}
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
								}
							}
							{operation set}
							{player "3"}
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
								}
							}
							{operation set}
							{player "3"}
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
									{include
										{player
											{player "4"}
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
								}
							}
							{operation set}
							{player "4"}
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
								}
							}
							{operation set}
							{player "4"}
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
									{include
										{player
											{player "5"}
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
								}
							}
							{operation set}
							{player "5"}
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
								}
							}
							{operation set}
							{player "5"}
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
									{include
										{player
											{player "6"}
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
								}
							}
							{operation set}
							{player "6"}
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
								}
							}
							{operation set}
							{player "6"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "7"}
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
								}
							}
							{operation set}
							{player "7"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "8"}
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
								}
							}
							{operation set}
							{player "8"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "9"}
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
								}
							}
							{operation set}
							{player "9"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "10"}
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
								}
							}
							{operation set}
							{player "10"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "11"}
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
								}
							}
							{operation set}
							{player "11"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "12"}
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
								}
							}
							{operation set}
							{player "12"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "13"}
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
								}
							}
							{operation set}
							{player "13"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "14"}
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
								}
							}
							{operation set}
							{player "14"}
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
											{tag extraplanes}
										}
									}
								}
							}
							{operation set}
							{player "15"}
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
								}
							}
							{operation set}
							{player "15"}
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
									{include
										{player
											{player "16"}
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
								}
							}
							{operation set}
							{player "16"}
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
								}
							}
							{operation set}
							{player "16"}
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
								}
							}
							{operation set}
							{player "16"}
						}
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
									{include
										{player
											{player "17"}
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
								}
							}
							{operation set}
							{player "17"}
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
								}
							}
							{operation set}
							{player "17"}
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
								}
							}
							{operation set}
							{player "17"}
						}
					}
				}
			}
			{"tag_logic_posts_for_callins"
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
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add callin_1}
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
									{tag callin_1}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add post_tagged}
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
									{tag logic_post}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add callin_2}
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
									{tag callin_2}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add post_tagged}
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
									{tag logic_post}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add callin_3}
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
									{tag callin_3}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add post_tagged}
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
									{tag logic_post}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add callin_4}
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
									{tag callin_4}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add post_tagged}
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
									{tag logic_post}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add callin_5}
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
									{tag callin_5}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add post_tagged}
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
									{tag logic_post}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add callin_6}
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
									{tag callin_6}
								}
							}
							{exclude
								{tag
									{tag post_tagged}
								}
							}
						}
						{amount 1
						}
					}
					{tag_add post_tagged}
				}
			}

; ========== Offmap Public Modules ==========	// Main modules that should be called by the  'call' command in map scripting			
			{"ai_big_bertha_module"
				{"set_i"
					{var "ai_officer_callin_active$"}
					{op "-"}
					{value 1}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ai_officer_hint_for_big_bertha"}
				}
				{"delay"
					{time 1}
				}
				{"effect"
					{selector
						{source standart}
						{tag logic_post}
					}
					{effect ai_big_bertha}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ai_big_bertha_func"}
				}
			}
			{"ai_full_arty_module"
				{"if"
					{condition
						{type entities}
						{selector
							{tag ai_full_arty_barrage_used}
						}
						{count
							{op "=="}
							{value 0}
						}
					}
					{"if"
						{condition
							{type rand}
							{value 0.35}
						}
						{"delay"
							{time 1}
						}
						{"set_i"
							{var "ai_officer_callin_active$"}
							{op "-"}
							{value 1}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_officer_hint_for_full_arty_barrage"}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source standart}
								{tag logic_post}
							}
							{effect ai_call_full_arty_barrage_cover}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_full_arty_barrage_func"}
						}
					}
				}
			}
			{"ai_destroy_obstacle_module"
				{"if"
					{condition
						{type entities}
						{selector
							{tag ai_call_destory_obstacles_used}
						}
						{count
							{op "=="}
							{value 0}
						}
					}
					{"if"
						{condition
							{type entities}
							{selector
								{tag player_hedgehog}
							}
							{count
								{op ">"}
								{value 5}
							}
						}
						{"delay"
							{time 1}
						}
						{"set_i"
							{var "ai_officer_callin_active$"}
							{op "-"}
							{value 1}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_officer_hint_for_ai_destroy_obstacle"}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source standart}
								{tag logic_post}
							}
							{effect ai_call_destory_obstacles}
						}
						{"delay"
							{time 1}
						}
						{"switch"
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
												{source advanced}
												{group
													{select
														{tag
															{tag ai_armor}
														}
														{tag
															{tag ai_veh}
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
														{state
															{state user_control}
														}
														{tag
															{tag engine_count_1}
														}
														{tag
															{tag engine_count_3}
														}
														{tag
															{tag engine_count_2}
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
															{tag player_hedgehog}
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
																	{tag ai_armor}
																}
																{tag
																	{tag ai_car}
																}
																{tag
																	{tag ai_vehicle}
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
																	{state inactive}
																}
																{tag
																	{tag engine_count_1}
																}
																{tag
																	{tag engine_count_2}
																}
																{tag
																	{tag engine_count_3}
																}
															}
														}
														{amount 1
														}
													}
												}
												{amount 9
												}
											}
											{effect offmap_destroy_hedgehog}
										}
									}
									{"default"
										{"effect"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag player_hedgehog}
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
																	{state user_control}
																}
																{state
																	{state inactive}
																}
																{tag
																	{tag player}
																}
																{state
																	{state dead}
																}
															}
														}
														{amount 1
														}
													}
												}
												{amount 9
												}
											}
											{effect offmap_destroy_hedgehog}
										}
									}
								}
							}
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
												{source advanced}
												{group
													{select
														{tag
															{tag ai_armor}
														}
														{tag
															{tag ai_veh}
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
														{state
															{state user_control}
														}
														{tag
															{tag engine_count_1}
														}
														{tag
															{tag engine_count_3}
														}
														{tag
															{tag engine_count_2}
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
															{tag player_hedgehog}
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
																	{tag ai_armor}
																}
																{tag
																	{tag ai_car}
																}
																{tag
																	{tag ai_vehicle}
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
																	{state inactive}
																}
																{tag
																	{tag engine_count_1}
																}
																{tag
																	{tag engine_count_2}
																}
																{tag
																	{tag engine_count_3}
																}
															}
														}
														{amount 1
														}
													}
												}
												{amount 12
												}
											}
											{effect offmap_destroy_hedgehog}
										}
									}
									{"default"
										{"effect"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag player_hedgehog}
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
																	{state user_control}
																}
																{state
																	{state inactive}
																}
																{tag
																	{tag player}
																}
																{state
																	{state dead}
																}
															}
														}
														{amount 1
														}
													}
												}
												{amount 12
												}
											}
											{effect offmap_destroy_hedgehog}
										}
									}
								}
							}
							{"default"
								{"switch"
									{"case"
										{condition
											{type entities}
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag ai_armor}
														}
														{tag
															{tag ai_veh}
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
														{state
															{state user_control}
														}
														{tag
															{tag engine_count_1}
														}
														{tag
															{tag engine_count_3}
														}
														{tag
															{tag engine_count_2}
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
															{tag player_hedgehog}
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
																	{tag ai_armor}
																}
																{tag
																	{tag ai_car}
																}
																{tag
																	{tag ai_vehicle}
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
																	{state inactive}
																}
																{tag
																	{tag engine_count_1}
																}
																{tag
																	{tag engine_count_2}
																}
																{tag
																	{tag engine_count_3}
																}
															}
														}
														{amount 1
														}
													}
												}
												{amount 6
												}
											}
											{effect offmap_destroy_hedgehog}
										}
									}
									{"default"
										{"effect"
											{selector
												{source advanced}
												{group
													{select
														{tag
															{tag player_hedgehog}
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
																	{state user_control}
																}
																{state
																	{state inactive}
																}
																{tag
																	{tag player}
																}
																{state
																	{state dead}
																}
															}
														}
														{amount 1
														}
													}
												}
												{amount 6
												}
											}
											{effect offmap_destroy_hedgehog}
										}
									}
								}
							}
						}
					}
				}
			}
			{"ai_heavy_mortar_module"
				{"if"
					{condition
						{type entities}
						{selector
							{tag ai_heavy_mortar_barrage_used}
						}
						{count
							{op "=="}
							{value 0}
						}
					}
					{"if"
						{condition
							{type rand}
							{value 0.4}
						}
						{"delay"
							{time 1}
						}
						{"set_i"
							{var "ai_officer_callin_active$"}
							{op "-"}
							{value 1}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_officer_hint_for_heavy_mortar_barrage"}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source standart}
								{tag logic_post}
							}
							{effect ai_call_heavy_mortar_barrage_cover}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_heavy_mortar_barrage_func"}
						}
					}
				}
			}
			{"ai_light_mortar_module"
				{"if"
					{condition
						{type entities}
						{selector
							{tag ai_light_mortar_barrage_used}
						}
						{count
							{op "=="}
							{value 0}
						}
					}
					{"if"
						{condition
							{type rand}
							{value 0.45}
						}
						{"delay"
							{time 1}
						}
						{"set_i"
							{var "ai_officer_callin_active$"}
							{op "-"}
							{value 1}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_officer_hint_for_light_mortar_barrage"}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source standart}
								{tag logic_post}
							}
							{effect ai_call_light_mortar_barrage_cover}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_light_mortar_barrage_func"}
						}
					}
				}
			}
			{"ai_smoke_barrage_module"
				{"if"
					{condition
						{type entities}
						{selector
							{tag ai_smoke_barrage_used}
						}
						{count
							{op "=="}
							{value 0}
						}
					}
					{"if"
						{condition
							{type rand}
							{value 0.45}
						}
						{"delay"
							{time 1}
						}
						{"set_i"
							{var "ai_officer_callin_active$"}
							{op "-"}
							{value 1}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_officer_hint_for_smoke_callin"}
						}
						{"delay"
							{time 1}
						}
						{"effect"
							{selector
								{source standart}
								{tag logic_post}
							}
							{effect ai_call_smoke_barrage_cover}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_offmap_smokecover_func"}
						}
					}
				}
			}
			{"ai_scout_plane_module"
				{"if"
					{condition
						{type entities}
						{selector
							{tag ai_call_scout_plane_used}
						}
						{count
							{op "=="}
							{value 0}
						}
					}
					{"if"
						{condition
							{type rand}
							{value 0.6}
						}
						{"effect"
							{selector
								{source standart}
								{tag logic_post}
							}
							{effect ai_call_scout_plane}
						}
						{"delay"
							{time 1}
						}
						{"call"
							{function "ai_officer_hint_for_scout_plane_callin"}
						}
						{"delay"
							{time 15}
						}
						{"entity_state"
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
									{type shuffle}
								}
								{amount 4
								}
							}
							{tag_add ai_scout_plane_target}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type rand}
									{value 5}
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
									{drop orders}
									{enemies
										{tag ai_scout_plane_target}
									}
									{clone}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 45}
								}
								{"delay"
									{time 2}
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
									{drop orders}
									{enemies
										{tag ai_scout_plane_target}
									}
									{clone}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 45}
								}
							}
							{"default"
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
									{drop orders}
									{enemies
										{tag ai_scout_plane_target}
									}
									{clone}
									{move_from_back}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 45}
								}
								{"delay"
									{time 2}
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
									{drop orders}
									{enemies
										{tag ai_scout_plane_target}
									}
									{clone}
									{move_from_back}
									{force_placement}
									{random_weapon 0}
									{attack_altitude 45}
								}
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
											{tag air_recon_vehicle}
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
											{state inactive}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{fire_mode hold}
							{movement
								{speed fast}
							}
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
											{tag air_recon_vehicle}
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
											{state inactive}
										}
										{state
											{state user_control}
										}
									}
								}
							}
							{effect takeoff_load}
						}
						{"delay"
							{time 45}
						}
						{"switch"
							{"case"
								{condition
									{type cmp_i}
									{var "ai_call_big_bertha$"}
									{op "=="}
									{value 1}
								}
								{"call"
									{function "ai_big_bertha_module"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.5}
								}
								{"call"
									{function "ai_heavy_mortar_module"}
								}
							}
							{"default"
								{"call"
									{function "ai_light_mortar_module"}
								}
							}
						}
					}
				}
			}

; ========== Offmap Private Functions ==========				
			{"ai_heavy_mortar_barrage_func"
				{"delay"
					{time 1}
				}
				{"spawn"
					{entity "heavy_arty_barrageai"}
					{waypoint "1"}
				}
				{"delay"
					{time 0.5}
				}
				{"call"
					{function "ai_offmap_placement"}
				}
				{"delay"
					{time 0.5}
				}
				{"if"
					{condition
						{type difficulty}
						{level heroic}
					}
					{"delay"
						{time 20}
					}
					{"spawn"
						{entity "heavy_mortar_barrageai"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.5}
					}
					{"call"
						{function "ai_offmap_placement"}
					}
				}
			}
			{"ai_light_mortar_barrage_func"
				{"delay"
					{time 1}
				}
				{"spawn"
					{entity "light_mortar_barrageai"}
					{waypoint "1"}
				}
				{"delay"
					{time 0.5}
				}
				{"call"
					{function "ai_offmap_placement"}
				}
				{"delay"
					{time 0.5}
				}
				{"if"
					{condition
						{type difficulty}
						{level heroic}
					}
					{"delay"
						{time 40}
					}
					{"spawn"
						{entity "light_mortar_barrageai"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.5}
					}
					{"call"
						{function "ai_offmap_placement"}
					}
					{"delay"
						{time 0.5}
					}
				}
				{"if"
					{condition
						{type difficulty}
						{level hard}
					}
					{"delay"
						{time 20}
					}
					{"spawn"
						{entity "light_mortar_barrageai"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.5}
					}
					{"call"
						{function "ai_offmap_placement"}
					}
					{"delay"
						{time 0.5}
					}
				}
			}
			{"ai_full_arty_barrage_func"
				{"delay"
					{time 15}
				}
				{"spawn"
					{entity "light_mortar_barrageai"}
					{waypoint "11"}
				}
				{"delay"
					{time 5}
				}
				{"spawn"
					{entity "light_mortar_barrageai"}
					{waypoint "7"}
				}
				{"delay"
					{time 5}
				}
				{"spawn"
					{entity "light_mortar_barrageai"}
					{waypoint "8"}
				}
				{"delay"
					{time 5}
				}
				{"spawn"
					{entity "light_mortar_barrageai"}
					{waypoint "9"}
				}
				{"delay"
					{time 5}
				}
				{"spawn"
					{entity "light_mortar_barrageai"}
					{waypoint "10"}
				}
				{"if"
					{condition
						{type difficulty}
						{level heroic}
					}
					{"delay"
						{time 20}
					}
					{"spawn"
						{entity "light_mortar_barrageai"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.5}
					}
					{"call"
						{function "ai_offmap_placement"}
					}
				}
				{"if"
					{condition
						{type difficulty}
						{level hard}
					}
					{"delay"
						{time 20}
					}
					{"spawn"
						{entity "light_mortar_barrageai"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.5}
					}
					{"call"
						{function "ai_offmap_placement"}
					}
				}
			}
			{"ai_offmap_smokecover_func"
				{"delay"
					{time 1}
				}
				{"spawn"
					{entity "smoke_cover_callin"}
					{waypoint "1"}
				}
				{"delay"
					{time 0.5}
				}
				{"call"
					{function "ai_offmap_placement"}
				}
				{"delay"
					{time 0.5}
				}
			}
			{"ai_big_bertha_func"
				{"delay"
					{time 60}
				}
				{"if"
					{condition
						{type entities}
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag active_officer}
									}
								}
								{include
									{tag
										{tag officerai}
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
										{state dead}
									}
								}
							}
						}
					}
					{"spawn"
						{entity "big_bertha_callin"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.5}
					}
					{"call"
						{function "ai_offmap_placement"}
					}
					{"delay"
						{time 7}
					}
					{"spawn"
						{entity "big_bertha_callin"}
						{waypoint "1"}
					}
					{"delay"
						{time 0.5}
					}
					{"call"
						{function "ai_offmap_placement"}
					}
				}
				{"set_i"
					{var "ai_call_big_bertha$"}
					{op "="}
					{value 0}
				}
			}
			{"ai_standard_priority_targeting"
				{"switch"
					{"case"
						{condition
							{type rand}
							{value 0.33}
						}
						{"talk"
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
							{text "mission/multi/ai_priority_target_found_1"}
						}
					}
					{"case"
						{condition
							{type rand}
							{value 0.33}
						}
						{"talk"
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
							{text "mission/multi/ai_priority_target_found_2"}
						}
					}
					{"default"
						{"talk"
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
							{text "mission/multi/ai_priority_target_found_3"}
						}
					}
				}
				{"delay"
					{time 0.5}
				}
				{"set_i"
					{var "ai_offmap_priority_targeting$"}
					{op "="}
					{value 1}
				}
				{"delay"
					{time 1}
				}
				{"actor_to_waypoint"
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
					{drop orders}
					{waypoint "19"}
				}
			}
			{"ai_offmap_placement"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "ai_offmap_priority_targeting$"}
							{op ">"}
							{value 0}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag firedrus}
										}
									}
									{exclude
										{tag
											{tag callin_moved}
										}
									}
								}
							}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag priority_target}
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
										{tag
											{tag ai_inf}
										}
										{tag
											{tag ai_armor}
										}
										{tag
											{tag ai_veh}
										}
										{tag
											{tag ai_car}
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
						{"set_i"
							{var "ai_offmap_priority_targeting$"}
							{op "="}
							{value 0}
						}
					}
					{"default"
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag firedrus}
										}
									}
									{exclude
										{tag
											{tag callin_moved}
										}
									}
								}
							}
							{target
								{source advanced}
								{group
									{select
										{tag
											{tag player_armor}
										}
									}
									{include
										{tag
											{tag operatable}
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
								{group
									{select
										{tag
											{tag player_veh}
										}
									}
									{include
										{tag
											{tag operatable}
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
								{group
									{select
										{tag
											{tag player_car}
										}
									}
									{include
										{tag
											{tag operatable}
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
								{sort
									{type entity}
									{entity
										{amount 1
										}
										{tag officerai}
										{type human}
										{state "not dead"}
									}
								}
								{amount 5
								}
							}
						}
					}
				}
				{"delay"
					{time 0.5}
				}
				{"if"
					{condition
						{type entities}
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag smokefired}
									}
								}
								{exclude
									{tag
										{tag callin_moved}
									}
								}
							}
						}
					}
					{"placement"
						{selector
							{source advanced}
							{group
								{select
									{tag
										{tag smokefired}
									}
								}
								{exclude
									{tag
										{tag callin_moved}
									}
								}
							}
						}
						{target
							{source advanced}
							{group
								{select
									{tag
										{tag player_armor}
									}
								}
								{include
									{tag
										{tag operatable}
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
							{group
								{select
									{tag
										{tag player_veh}
									}
								}
								{include
									{tag
										{tag operatable}
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
							{group
								{select
									{tag
										{tag player_car}
									}
								}
								{include
									{tag
										{tag operatable}
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
							{amount 1
							}
							{sort
								{type entity}
								{entity
									{amount 1
									}
									{tag officerai}
									{type human}
									{state "not dead"}
								}
							}
						}
					}
				}
				{"delay"
					{time 5}
				}
				{"entity_state"
					{selector
						{source standart}
						{tag priority_target}
					}
					{tag_remove priority_target}
				}
			}

; ========== Offmap Hints ==========
			{"ping_ai_officer_on_map"
				{"switch"
					{"case"
						{condition
							{type entities}
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag active_officer}
										}
									}
									{include
										{tag
											{tag officerai}
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
							}
						}
						{"switch"
							{"case"
								{condition
									{type difficulty}
									{level hard}
								}
								{"if"
									{condition
										{type cmp_i}
										{var "radiocar$"}
										{op ">"}
										{value 0}
									}
									{"effect"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag active_officer}
													}
												}
												{include
													{tag
														{tag officerai}
													}
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
												}
											}
											{amount 1
											}
										}
										{effect mark_ai_officer_on_minimap}
									}
								}
							}
							{"case"
								{condition
									{type difficulty}
									{level heroic}
								}
								{"if"
									{condition
										{type cmp_i}
										{var "radiocar$"}
										{op ">"}
										{value 0}
									}
									{"effect"
										{selector
											{source advanced}
											{group
												{select
													{tag
														{tag active_officer}
													}
												}
												{include
													{tag
														{tag officerai}
													}
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
												}
											}
											{amount 1
											}
										}
										{effect mark_ai_officer_on_minimap}
									}
								}
							}
							{"default"
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
											}
										}
										{amount 1
										}
									}
									{effect mark_ai_officer_on_minimap}
								}
							}
						}
					}
					{"default"
						{"switch"
							{"case"
								{condition
									{type difficulty}
									{level hard}
								}
								{"if"
									{condition
										{type cmp_i}
										{var "radiocar$"}
										{op ">"}
										{value 0}
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
												}
											}
											{amount 1
											}
										}
										{effect mark_ai_officer_on_minimap}
									}
								}
							}
							{"case"
								{condition
									{type difficulty}
									{level heroic}
								}
								{"if"
									{condition
										{type cmp_i}
										{var "radiocar$"}
										{op ">"}
										{value 0}
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
												}
											}
											{amount 1
											}
										}
										{effect mark_ai_officer_on_minimap}
									}
								}
							}
							{"default"
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
											}
										}
										{amount 1
										}
									}
									{effect mark_ai_officer_on_minimap}
								}
							}
						}
					}
				}
			}
			{"ai_officer_hint_for_smoke_callin"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_smoke_barrage"}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_smoke_barrage"}
							}
						}
					}
					{"default"
						{"talk"
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
							{text "mission/multi/ai_smoke_barrage"}
						}
					}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
			}
			{"ai_officer_hint_for_light_mortar_barrage"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_light_mortar_barrage"}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_light_mortar_barrage"}
							}
						}
					}
					{"default"
						{"talk"
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
							{text "mission/multi/ai_light_mortar_barrage"}
						}
					}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
			}
			{"ai_officer_hint_for_heavy_mortar_barrage"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_heavy_mortar_barrage"}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_heavy_mortar_barrage"}
							}
						}
					}
					{"default"
						{"talk"
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
							{text "mission/multi/ai_heavy_mortar_barrage"}
						}
					}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
			}
			{"ai_officer_hint_for_full_arty_barrage"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_full_arty_barrage"}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_full_arty_barrage"}
							}
						}
					}
					{"default"
						{"talk"
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
							{text "mission/multi/ai_full_arty_barrage"}
						}
					}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
			}
			{"ai_officer_hint_for_scout_plane_callin"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_scout_plane"}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_scout_plane"}
							}
						}
					}
					{"default"
						{"talk"
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
							{text "mission/multi/ai_scout_plane"}
						}
					}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
			}
			{"ai_officer_hint_for_ai_destroy_obstacle"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_destroy_obstacle"}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
								{text "mission/multi/ai_destroy_obstacle"}
							}
						}
					}
					{"default"
						{"talk"
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
							{text "mission/multi/ai_destroy_obstacle"}
						}
					}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
			}
			{"ai_officer_hint_for_big_bertha"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag active_officer}
											}
										}
										{include
											{tag
												{tag ai_inf}
											}
											{prop
												{prop human}
											}
											{tag
												{tag officerai}
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
								{text "mission/multi/ai_big_bertha"}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"talk"
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
											{tag
												{tag active_officer}
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
								{text "mission/multi/ai_big_bertha"}
							}
						}
					}
					{"default"
						{"talk"
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
										{tag
											{tag active_officer}
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
							{text "mission/multi/ai_big_bertha"}
						}
					}
				}
				{"delay"
					{time 1}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
				{"delay"
					{time 2}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
				{"delay"
					{time 2}
				}
				{"call"
					{function "ping_ai_officer_on_map"}
				}
			}
			{"talk_identify_ai_officer"
				{"switch"
					{"case"
						{condition
							{type difficulty}
							{level heroic}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.45}
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
										{say advantage}
										{text "mission/multi/enemy_offficer_on_field_1"}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.55}
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
										{say advantage}
										{text "mission/multi/enemy_offficer_on_field_3"}
									}
								}
								{"default"
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
										{say advantage}
										{text "mission/multi/enemy_offficer_on_field_1"}
									}
								}
							}
						}
					}
					{"case"
						{condition
							{type difficulty}
							{level hard}
						}
						{"if"
							{condition
								{type cmp_i}
								{var "radiocar$"}
								{op ">"}
								{value 0}
							}
							{"switch"
								{"case"
									{condition
										{type rand}
										{value 0.45}
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
										{say advantage}
										{text "mission/multi/enemy_offficer_on_field_1"}
									}
								}
								{"case"
									{condition
										{type rand}
										{value 0.55}
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
										{say advantage}
										{text "mission/multi/enemy_offficer_on_field_3"}
									}
								}
								{"default"
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
										{say advantage}
										{text "mission/multi/enemy_offficer_on_field_1"}
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
									{value 0.45}
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
									{say advantage}
									{text "mission/multi/enemy_offficer_on_field_1"}
								}
							}
							{"case"
								{condition
									{type rand}
									{value 0.55}
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
									{say advantage}
									{text "mission/multi/enemy_offficer_on_field_3"}
								}
							}
							{"default"
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
									{say advantage}
									{text "mission/multi/enemy_offficer_on_field_1"}
								}
							}
						}
					}
				}
			}

; ========== Spawn Functions ==========
			{"reset_ai_spawn_zones"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 1}
						}
						{"delay"
							{time 0.5}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "5001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_2}
							}
							{target_waypoint "5002"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_3}
							}
							{target_waypoint "5003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_4}
							}
							{target_waypoint "5004"}
						}
					}
					{"default"
						{"delay"
							{time 0.5}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_1}
							}
							{target_waypoint "6001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_2}
							}
							{target_waypoint "6002"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_3}
							}
							{target_waypoint "6003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_4}
							}
							{target_waypoint "6004"}
						}
					}
				}
			}
			{"move_ai_spawn_to_zones_1_and_2"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 1}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
										{tag
											{tag spawn_2}
										}
									}
									{include
										{tag
											{tag spawn_b}
										}
									}
								}
							}
							{target_waypoint "5001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
										{tag
											{tag spawn_4}
										}
									}
									{include
										{tag
											{tag spawn_b}
										}
									}
								}
							}
							{target_waypoint "5002"}
						}
					}
					{"default"
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
										{tag
											{tag spawn_2}
										}
									}
									{include
										{tag
											{tag spawn_a}
										}
									}
								}
							}
							{target_waypoint "6001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
										{tag
											{tag spawn_4}
										}
									}
									{include
										{tag
											{tag spawn_a}
										}
									}
								}
							}
							{target_waypoint "6002"}
						}
					}
				}
			}
			{"move_to_zone_flanks"
				{"switch"
					{"case"
						{condition
							{type entities}
							{selector
								{tag spawn_4}
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
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag spawn_b}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag spawn_b}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5004"}
								}
							}
							{"default"
								{"delay"
									{time 0.4}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag spawn_a}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag spawn_a}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6004"}
								}
							}
						}
					}
					{"default"
						{"switch"
							{"case"
								{condition
									{type cmp_i}
									{var "user_team$"}
									{op "=="}
									{value 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag spawn_b}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag spawn_b}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5003"}
								}
							}
							{"default"
								{"delay"
									{time 0.4}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag spawn_a}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag spawn_a}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6003"}
								}
							}
						}
					}
				}
			}
			{"move_to_zone_flanks_narrow"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 1}
						}
						{## "select"
							{source advanced}
							{group
								{select
									{tag
										{tag ai_spawn}
									}
								}
								{include
									{tag
										{tag spawn_b}
									}
								}
								{exclude
									{tag
										{tag moved}
									}
								}
							}
							{amount 2
							}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_1}
									}
									{tag
										{tag spawn_2}
									}
								}
								{include
									{tag
										{tag spawn_b}
									}
								}
							}
							{amount 2
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "5001"}
						}
						{## "delay"
							{time 0.4}
						}
						{## "entity_state"
							{tag_add moved}
						}
						{"delay"
							{time 1}
						}
						{## "select"
							{source advanced}
							{group
								{select
									{tag
										{tag ai_spawn}
									}
								}
								{include
									{tag
										{tag spawn_b}
									}
								}
								{exclude
									{tag
										{tag moved}
									}
								}
							}
							{amount 2
							}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_3}
									}
									{tag
										{tag spawn_4}
									}
								}
								{include
									{tag
										{tag spawn_b}
									}
								}
							}
							{amount 2
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "5003"}
						}
						{## "delay"
							{time 0.4}
						}
						{## "entity_state"
							{tag_remove moved}
						}
					}
					{"default"
						{"delay"
							{time 0.4}
						}
						{## "select"
							{source advanced}
							{group
								{select
									{tag
										{tag ai_spawn}
									}
								}
								{include
									{tag
										{tag spawn_a}
									}
								}
								{exclude
									{tag
										{tag moved}
									}
								}
							}
							{amount 2
							}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_1}
									}
									{tag
										{tag spawn_2}
									}
								}
								{include
									{tag
										{tag spawn_a}
									}
								}
							}
							{amount 2
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "6001"}
						}
						{## "delay"
							{time 0.4}
						}
						{## "entity_state"
							{tag_add moved}
						}
						{"delay"
							{time 1}
						}
						{## "select"
							{source advanced}
							{group
								{select
									{tag
										{tag ai_spawn}
									}
								}
								{include
									{tag
										{tag spawn_a}
									}
								}
								{exclude
									{tag
										{tag moved}
									}
								}
							}
							{amount 2
							}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_3}
									}
									{tag
										{tag spawn_4}
									}
								}
								{include
									{tag
										{tag spawn_a}
									}
								}
							}
							{amount 2
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "6003"}
						}
						{## "delay"
							{time 0.4}
						}
						{## "entity_state"
							{tag_remove moved}
						}
					}
				}
			}
			{"move_ai_spawn_to_zones_2_and_3"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 1}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
										{tag
											{tag spawn_2}
										}
									}
									{include
										{tag
											{tag spawn_b}
										}
									}
								}
							}
							{target_waypoint "5003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
										{tag
											{tag spawn_4}
										}
									}
									{include
										{tag
											{tag spawn_b}
										}
									}
								}
							}
							{target_waypoint "5002"}
						}
					}
					{"default"
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
										{tag
											{tag spawn_2}
										}
									}
									{include
										{tag
											{tag spawn_a}
										}
									}
								}
							}
							{target_waypoint "6003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
										{tag
											{tag spawn_4}
										}
									}
									{include
										{tag
											{tag spawn_a}
										}
									}
								}
							}
							{target_waypoint "6002"}
						}
					}
				}
			}
			{"move_ai_spawn_to_zones_3_and_4"
				{"if"
					{condition
						{type entities}
						{selector
							{tag spawn_4}
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
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag spawn_b}
											}
										}
									}
								}
								{target_waypoint "5003"}
							}
							{"delay"
								{time 0.4}
							}
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag spawn_b}
											}
										}
									}
								}
								{target_waypoint "5004"}
							}
						}
						{"default"
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag spawn_a}
											}
										}
									}
								}
								{target_waypoint "6003"}
							}
							{"delay"
								{time 0.4}
							}
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag spawn_a}
											}
										}
									}
								}
								{target_waypoint "6004"}
							}
						}
					}
				}
			}
			{"init_ai_spawn_to_rear_flank"
				{"delay"
					{time 300}
				}
				{"talk"
					{selector
						{source standart}
						{amount 1
						}
						{tag player}
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
								{source standart}
								{amount 1
								}
								{tag player}
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
								{source standart}
								{amount 1
								}
								{tag player}
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
								{source standart}
								{amount 1
								}
								{tag player}
							}
							{text "mission/multi/flankattack3"}
						}
					}
					{"default"
						{"talk"
							{selector
								{source standart}
								{amount 1
								}
								{tag player}
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
								{source standart}
								{amount 1
								}
								{tag player}
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
								{source standart}
								{amount 1
								}
								{tag player}
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
								{source standart}
								{amount 1
								}
								{tag player}
							}
							{text "mission/multi/flankattack3"}
						}
					}
					{"default"
						{"talk"
							{selector
								{source standart}
								{amount 1
								}
								{tag player}
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
				{## "switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 1}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_b}
										}
									}
								}
								{amount 1
								}
								{sort
									{type shuffle}
								}
							}
							{target_waypoint "6001"}
						}
						{"delay"
							{time 1}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_b}
										}
									}
								}
								{amount 1
								}
								{sort
									{type shuffle}
								}
							}
							{target_waypoint "6002"}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 2}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_a}
										}
									}
								}
								{amount 1
								}
								{sort
									{type shuffle}
								}
							}
							{target_waypoint "5001"}
						}
						{"delay"
							{time 1}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_a}
										}
									}
								}
								{amount 1
								}
								{sort
									{type shuffle}
								}
							}
							{target_waypoint "5002"}
						}
					}
				}
			}
			{"rear_move_ai_spawn_to_zones_1_and_2"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 2}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
									}
									
								}
							}
							{target_waypoint "5001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
									}
									
								}
							}
							{target_waypoint "5002"}
						}
					}
					{"default"
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "6001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "6002"}
						}
					}
				}
			}
			{"rear_move_to_zone_flanks"
				{"switch"
					{"case"
						{condition
							{type entities}
							{selector
								{tag spawn_4}
							}
						}
						{"switch"
							{"case"
								{condition
									{type cmp_i}
									{var "user_team$"}
									{op "=="}
									{value 2}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5004"}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag spawn_2}
												}
											}
											{include
												{tag
													{tag ai_spawn}
												}
											}
										}
									}
									{target_waypoint "5002"}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag spawn_4}
												}
											}
											{include
												{tag
													{tag ai_spawn}
												}
											}
										}
									}
									{target_waypoint "5004"}
								}
							}
							{"default"
								{"delay"
									{time 0.4}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6004"}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5004"}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag spawn_2}
												}
											}
											{include
												{tag
													{tag ai_spawn}
												}
											}
										}
									}
									{target_waypoint "6002"}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{selector
										{source advanced}
										{group
											{select
												{tag
													{tag spawn_4}
												}
											}
											{include
												{tag
													{tag ai_spawn}
												}
											}
										}
									}
									{target_waypoint "6004"}
								}
							}
						}
					}
					{## "default"
						{"switch"
							{"case"
								{condition
									{type cmp_i}
									{var "user_team$"}
									{op "=="}
									{value 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "5003"}
								}
							}
							{"default"
								{"delay"
									{time 0.4}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
											{tag
												{tag spawn_2}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6001"}
								}
								{"delay"
									{time 1}
								}
								{"select"
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
											{tag
												{tag spawn_4}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
									{amount 2
									}
								}
								{"delay"
									{time 0.4}
								}
								{"placement"
									{target_waypoint "6003"}
								}
							}
						}
					}
				}
			}
			{"rear_move_to_zone_flanks_narrow"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 2}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_1}
									}
								}
								{include
									{tag
										{tag ai_spawn}
									}
								}
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "5001"}
						}
						{"delay"
							{time 1}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_3}
									}
								}
								{include
									{tag
										{tag ai_spawn}
									}
								}
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "5003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_2}
										}
									}
									
								}
							}
							{target_waypoint "6001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_4}
										}
									}
									
								}
							}
							{target_waypoint "6003"}
						}
					}
					{"default"
						{"delay"
							{time 0.4}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_1}
									}
								}
								{include
									{tag
										{tag ai_spawn}
									}
								}
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "6001"}
						}
						{"delay"
							{time 1}
						}
						{"select"
							{source advanced}
							{group
								{select
									{tag
										{tag spawn_3}
									}
								}
								{include
									{tag
										{tag ai_spawn}
									}
								}
							}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{target_waypoint "6003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_2}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "5001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_4}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "5003"}
						}
					}
				}
			}
			{"rear_move_ai_spawn_to_zones_2_and_3"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 2}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
									}
									
								}
							}
							{target_waypoint "5003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
									}
									
								}
							}
							{target_waypoint "5002"}
						}
					}
					{"default"
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "6003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_3}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "6002"}
						}
					}
				}
			}
			{"rear_move_ai_spawn_to_zones_3_and_4"
				{"if"
					{condition
						{type entities}
						{selector
							{tag spawn_4}
						}
					}
					{"switch"
						{"case"
							{condition
								{type cmp_i}
								{var "user_team$"}
								{op "=="}
								{value 2}
							}
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{target_waypoint "5003"}
							}
							{"delay"
								{time 0.4}
							}
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{target_waypoint "5004"}
							}
						}
						{"default"
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_1}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{target_waypoint "6003"}
							}
							{"delay"
								{time 0.4}
							}
							{"placement"
								{selector
									{source advanced}
									{group
										{select
											{tag
												{tag spawn_3}
											}
										}
										{include
											{tag
												{tag ai_spawn}
											}
										}
									}
								}
								{target_waypoint "6004"}
							}
						}
					}
				}
			}
			{"rear_move_all_ai_spawn_zones"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "user_team$"}
							{op "=="}
							{value 2}
						}
						{"delay"
							{time 0.5}
						}
						{"placement"
							{selector
								{source advanced}
								{group
									{select
										{tag
											{tag spawn_1}
										}
									}
									{include
										{tag
											{tag ai_spawn}
										}
									}
								}
							}
							{target_waypoint "5001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_2}
							}
							{target_waypoint "5002"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_3}
							}
							{target_waypoint "5003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_4}
							}
							{target_waypoint "5004"}
						}
					}
					{"default"
						{"delay"
							{time 0.5}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_1}
							}
							{target_waypoint "6001"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_2}
							}
							{target_waypoint "6002"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_3}
							}
							{target_waypoint "6003"}
						}
						{"delay"
							{time 0.4}
						}
						{"placement"
							{selector
								{source standart}
								{tag spawn_4}
							}
							{target_waypoint "6004"}
						}
					}
				}
			}			

; ========== Paratrooper Functions ==========
			{"assign_drop_group_for_player_drop_plane"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "player_drop_plane_index$"}
							{op "=="}
							{value 0}
						}
						{"entity_state"
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_0}
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "player_drop_plane_index$"}
							{op "=="}
							{value 1}
						}
						{"entity_state"
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_1}
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "player_drop_plane_index$"}
							{op "=="}
							{value 2}
						}
						{"entity_state"
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_2}
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "player_drop_plane_index$"}
							{op "=="}
							{value 3}
						}
						{"entity_state"
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_3}
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
								{amount 1
								}
							}
							{tag_add player_drop_plane_assigned}
						}
					}
				}
				{"delay"
					{time 0.2}
				}
				{"set_i"
					{var "player_drop_plane_index$"}
					{op "+"}
					{value 1}
				}
				{"if"
					{condition
						{type cmp_i}
						{var "player_drop_plane_index$"}
						{op ">="}
						{value "max_count_of_player_drop_planes$"}
					}
					{"set_i"
						{var "player_drop_plane_index$"}
						{op "="}
						{value 0}
					}
				}
			}
			{"assign_player_paras"
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
										{player
											{player "2"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "3"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "4"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "5"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "6"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "7"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "8"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "9"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "10"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "11"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "12"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "13"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "14"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "15"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
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
										{player
											{player "16"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
							}
							{operation set}
							{player "16"}
						}
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
										{player
											{player "17"}
										}
									}
								}
							}
						}
						{"player"
							{selector
								{source standart}
								{tag player_para}
								{type human}
								{state "not dead"}
							}
							{operation set}
							{player "17"}
						}
					}
				}
				{"delay"
					{time 0.5}
				}
				{"actor_state"
					{selector
						{source standart}
						{tag player_para}
						{type human}
						{state "not dead"}
					}
					{control user}
				}
			}
			{"assign_ai_drop_planes"
				{"switch"
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 1}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_1}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
							}
							{tag_add para_plane_1}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_1}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_1}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_1}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_1}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_1}
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
										{tag para_plane_1}
									}
								}
								{amount 13
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_1}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_1}
							{tag_remove para_need_tag}
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
											{tag on_plane_1}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_1}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_1}
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
											{tag para_plane_1}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 2}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_2}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_2}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_2}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_2}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_2}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_2}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_2}
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
										{tag para_plane_2}
									}
								}
								{amount 13
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_2}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_2}
							{tag_remove para_need_tag}
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
											{tag on_plane_2}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_2}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_2}
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
											{tag para_plane_2}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 3}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_3}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_3}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_3}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_3}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_3}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_3}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_3}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_3}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_3}
							{tag_remove para_need_tag}
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
											{tag on_plane_3}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_3}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_3}
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
											{tag para_plane_3}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 4}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_4}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_4}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_4}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_4}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_4}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_4}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_4}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_4}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_4}
							{tag_remove para_need_tag}
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
											{tag on_plane_4}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_4}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_4}
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
											{tag para_plane_4}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 5}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_5}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_5}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_5}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_5}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_5}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_5}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_5}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_5}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_5}
							{tag_remove para_need_tag}
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
											{tag on_plane_5}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_5}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_5}
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
											{tag para_plane_5}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 6}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_6}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_6}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_6}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_6}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_6}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_6}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_6}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_6}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_6}
							{tag_remove para_need_tag}
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
											{tag on_plane_6}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_6}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_6}
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
											{tag para_plane_6}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 7}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_7}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_7}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_7}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_7}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_7}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_7}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_7}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_7}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_7}
							{tag_remove para_need_tag}
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
											{tag on_plane_7}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_7}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_7}
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
											{tag para_plane_7}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 8}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_8}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_8}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_8}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_8}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_8}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_8}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_8}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_8}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_8}
							{tag_remove para_need_tag}
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
											{tag on_plane_8}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_8}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_8}
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
											{tag para_plane_8}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 9}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_9}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_9}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_9}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_9}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_9}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_9}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_9}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_9}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_9}
							{tag_remove para_need_tag}
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
											{tag on_plane_9}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_9}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_9}
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
											{tag para_plane_9}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 10}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_10}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_10}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_10}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_10}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_10}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_10}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_10}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_10}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_10}
							{tag_remove para_need_tag}
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
											{tag on_plane_10}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_10}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_10}
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
											{tag para_plane_10}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 11}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_11}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_11}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_11}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_11}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_11}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_11}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_11}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_11}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_11}
							{tag_remove para_need_tag}
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
											{tag on_plane_11}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_11}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_11}
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
											{tag para_plane_11}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}
					{"case"
						{condition
							{type cmp_i}
							{var "para_plane_index$"}
							{op "=="}
							{value 12}
						}
						{"entity_state"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
										}
										{state
											{state inhabited}
										}
									}
									{exclude
										{tag
											{tag hidden}
										}
										{tag
											{tag ordering}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag player_drop_plane}
										}
										{tag
											{tag para_plane_12}
										}
										{zone
											{zone "gamezone"}
										}
									}
								}
								{amount 1
								}
							}
							{tag_add para_plane_12}
							{tag_remove moving_to_start_waypoint}
						}
						{"delay"
							{time 0.5}
						}
						{"switch"
							{"case"
								{condition
									{type entities}
									{selector
										{tag target_para_drop}
									}
								}
								{"entity_state"
									{selector
										{source standart}
										{amount 1
										}
										{tag target_para_drop}
									}
									{tag_add current_group_12}
								}
							}
							{"default"
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
													{tag used}
												}
											}
										}
										{amount 1
										}
									}
									{tag_add current_group_12}
								}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"entity_state"
							{selector
								{source standart}
								{tag current_group_12}
							}
							{tag_add used}
						}
						{"delay"
							{time 0.1}
						}
						{## "action"
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
											{state operatable}
										}
										{tag
											{tag drop_plane}
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
											{tag hidden}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{drop orders}
							{action move}
							{target
								{amount 1
								}
								{tag current_group_12}
							}
						}
						{"delay"
							{time 0.1}
						}
						{"effect"
							{selector
								{source advanced}
								{group
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
										{tag
											{tag para_need_tag}
										}
										{tag
											{tag on_plane_12}
										}
										{state
											{state inactive}
										}
									}
								}
							}
							{effect tag_paratroopers_on_plane}
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
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
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
											{state inactive}
										}
									}
								}
								{sort
									{type entity}
									{entity
										{tag para_plane_12}
									}
								}
								{amount 13
								}
							}
							{tag_add on_plane_12}
							{tag_remove para_need_tag}
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
											{tag on_plane_12}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "ger_m43_cap_luftwaffe"}
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
											{tag on_plane_12}
										}
										{tag
											{tag para_need_tag}
										}
									}
									{include
										{state
											{state linked}
										}
										{state
											{state operatable}
										}
										{prop
											{prop human}
										}
										{with_item
											{type existance}
											{item "soviet_tankovy_helmet"}
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
										{tag}
									}
									{include
										{with_item
											{type existance}
											{item "cap_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_usa_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "helmet_eng_pilot"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "jappilot_cap"}
										}
									}
								}
								{group
									{include
										{with_item
											{type existance}
											{item "cap_ita_bustina"}
										}
									}
								}
							}
							{tag_remove on_plane_12}
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
											{tag para_plane_12}
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
											{tag hidden}
										}
										{tag
											{tag plane_assigned}
										}
										{tag
											{tag need_orders}
										}
										{tag
											{tag player_drop_plane}
										}
									}
								}
							}
							{tag_add plane_assigned}
						}
					}							
				}
				{"set_i"
					{var "para_plane_index$"}
					{op "+"}
					{value 1}
				}
				{"if"
					{condition
						{type cmp_i}
						{var "para_plane_index$"}
						{op ">"}
						{value 12}
					}
					{"set_i"
						{var "para_plane_index$"}
						{op "="}
						{value 1}
					}
				}
			}

; ========== Random Functions ==========
			{"cleanse_incorrect_player_tags"
				{"effect"
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
					{effect remove_incorrect_tags_from_player}
				}
				{"delay"
					{time 180}
				}
			}
			{"medic"
				{"delay"
					{time 1}
				}
				{"entity_state"
					{selector
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
							{exclude
								{tag
									{tag needrevive1}
								}
								{tag
									{tag needrevive2}
								}
								{tag
									{tag needrevive3}
								}
								{tag
									{tag needrevive4}
								}
								{tag
									{tag needrevive5}
								}
							}
						}
						{amount 1
						}
						{sort
							{type entity}
							{entity
								{amount 1
								}
								{tag medicmarker}
							}
						}
					}
					{tag_add needrevive1}
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
									{tag player}
								}
							}
							{include
								{state
									{state operatable}
								}
								{with_item
									{type amount}
									{item "tent_kit"}
									{min 1}
								}
							}
							{exclude
								{tag
									{tag medic1}
								}
								{tag
									{tag medic2}
								}
								{tag
									{tag medic3}
								}
								{tag
									{tag medic4}
								}
								{tag
									{tag medic5}
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
											{tag needrevive1}
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
						{amount 1
						}
					}
					{tag_add medic1}
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
									{tag medic1}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action medic}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive1}
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
				{"delay"
					{time 1}
				}
				{"entity_state"
					{selector
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
							{exclude
								{tag
									{tag needrevive1}
								}
								{tag
									{tag needrevive2}
								}
								{tag
									{tag needrevive3}
								}
								{tag
									{tag needrevive4}
								}
								{tag
									{tag needrevive5}
								}
							}
						}
						{amount 1
						}
						{sort
							{type entity}
							{entity
								{amount 1
								}
								{tag medicmarker}
							}
						}
					}
					{tag_add needrevive2}
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
									{tag player}
								}
							}
							{include
								{state
									{state operatable}
								}
								{with_item
									{type amount}
									{item "tent_kit"}
									{min 1}
								}
							}
							{exclude
								{tag
									{tag medic1}
								}
								{tag
									{tag medic2}
								}
								{tag
									{tag medic3}
								}
								{tag
									{tag medic4}
								}
								{tag
									{tag medic5}
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
											{tag needrevive2}
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
						{amount 1
						}
					}
					{tag_add medic2}
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
									{tag medic2}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action medic}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive2}
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
				{"delay"
					{time 1}
				}
				{"entity_state"
					{selector
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
							{exclude
								{tag
									{tag needrevive1}
								}
								{tag
									{tag needrevive2}
								}
								{tag
									{tag needrevive3}
								}
								{tag
									{tag needrevive4}
								}
								{tag
									{tag needrevive5}
								}
							}
						}
						{amount 1
						}
						{sort
							{type entity}
							{entity
								{amount 1
								}
								{tag medicmarker}
							}
						}
					}
					{tag_add needrevive3}
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
									{tag player}
								}
							}
							{include
								{state
									{state operatable}
								}
								{with_item
									{type amount}
									{item "tent_kit"}
									{min 1}
								}
							}
							{exclude
								{tag
									{tag medic1}
								}
								{tag
									{tag medic2}
								}
								{tag
									{tag medic3}
								}
								{tag
									{tag medic4}
								}
								{tag
									{tag medic5}
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
											{tag needrevive3}
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
						{amount 1
						}
					}
					{tag_add medic3}
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
									{tag medic3}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action medic}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive3}
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
				{"delay"
					{time 0.1}
				}
				{"entity_state"
					{selector
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
							{exclude
								{tag
									{tag needrevive1}
								}
								{tag
									{tag needrevive2}
								}
								{tag
									{tag needrevive3}
								}
								{tag
									{tag needrevive4}
								}
								{tag
									{tag needrevive5}
								}
							}
						}
						{amount 1
						}
						{sort
							{type entity}
							{entity
								{amount 1
								}
								{tag medicmarker}
							}
						}
					}
					{tag_add needrevive4}
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
									{tag player}
								}
							}
							{include
								{state
									{state operatable}
								}
								{with_item
									{type amount}
									{item "tent_kit"}
									{min 1}
								}
							}
							{exclude
								{tag
									{tag medic1}
								}
								{tag
									{tag medic2}
								}
								{tag
									{tag medic3}
								}
								{tag
									{tag medic4}
								}
								{tag
									{tag medic5}
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
											{tag needrevive4}
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
						{amount 1
						}
					}
					{tag_add medic4}
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
									{tag medic4}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action medic}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive4}
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
				{"delay"
					{time 0.1}
				}
				{"entity_state"
					{selector
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
							{exclude
								{tag
									{tag needrevive1}
								}
								{tag
									{tag needrevive2}
								}
								{tag
									{tag needrevive3}
								}
								{tag
									{tag needrevive4}
								}
								{tag
									{tag needrevive5}
								}
							}
						}
						{amount 1
						}
						{sort
							{type entity}
							{entity
								{amount 1
								}
								{tag medicmarker}
							}
						}
					}
					{tag_add needrevive5}
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
									{tag player}
								}
							}
							{include
								{state
									{state operatable}
								}
								{with_item
									{type amount}
									{item "tent_kit"}
									{min 1}
								}
							}
							{exclude
								{tag
									{tag medic1}
								}
								{tag
									{tag medic2}
								}
								{tag
									{tag medic3}
								}
								{tag
									{tag medic4}
								}
								{tag
									{tag medic5}
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
											{tag needrevive5}
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
						{amount 1
						}
					}
					{tag_add medic5}
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
									{tag medic5}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action medic}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive5}
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
				{"delay"
					{time 3}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag medic1}
								}
							}
						}
					}
					{tag_remove medic1}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag medic2}
								}
							}
						}
					}
					{tag_remove medic2}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag medic3}
								}
							}
						}
					}
					{tag_remove medic3}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag medic4}
								}
							}
						}
					}
					{tag_remove medic4}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag medic5}
								}
							}
						}
					}
					{tag_remove medic5}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive1}
								}
							}
						}
					}
					{tag_remove needrevive1}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive2}
								}
							}
						}
					}
					{tag_remove needrevive2}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive3}
								}
							}
						}
					}
					{tag_remove needrevive3}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive4}
								}
							}
						}
					}
					{tag_remove needrevive4}
				}
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag needrevive5}
								}
							}
						}
					}
					{tag_remove needrevive5}
				}
			}			
			{"link"
				{"delay"
					{time 1}
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
								{prop
									{prop cannon}
								}
								{state
									{state operatable}
								}
							}
							{exclude
								{tag
									{tag needtowing1}
								}
								{tag
									{tag needtowing2}
								}
								{tag
									{tag needtowing3}
								}
								{tag
									{tag needtowing4}
								}
								{tag
									{tag needtowing5}
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
								{amount 1
								}
								{tag towingmarker}
							}
						}
					}
					{tag_add needtowing1}
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
								{tag
									{tag player_armor}
								}
								{tag
									{tag player_car}
								}
							}
							{include
								{state
									{state operatable}
								}
								{prop
									{prop tractor}
								}
							}
							{exclude
								{tag
									{tag towing1}
								}
								{tag
									{tag towing2}
								}
								{tag
									{tag towing3}
								}
								{tag
									{tag towing4}
								}
								{tag
									{tag towing5}
								}
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
											{tag needtowing1}
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
					{tag_add towing1}
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
									{tag towing1}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action attach}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needtowing1}
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
				{"delay"
					{time 1}
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
								{prop
									{prop cannon}
								}
								{state
									{state operatable}
								}
							}
							{exclude
								{tag
									{tag needtowing1}
								}
								{tag
									{tag needtowing2}
								}
								{tag
									{tag needtowing3}
								}
								{tag
									{tag needtowing4}
								}
								{tag
									{tag needtowing5}
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
								{amount 1
								}
								{tag towingmarker}
							}
						}
					}
					{tag_add needtowing2}
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
								{tag
									{tag player_armor}
								}
								{tag
									{tag player_car}
								}
							}
							{include
								{state
									{state operatable}
								}
								{prop
									{prop tractor}
								}
							}
							{exclude
								{tag
									{tag towing1}
								}
								{tag
									{tag towing2}
								}
								{tag
									{tag towing3}
								}
								{tag
									{tag towing4}
								}
								{tag
									{tag towing5}
								}
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
											{tag needtowing2}
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
					{tag_add towing2}
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
									{tag towing2}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action attach}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needtowing2}
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
				{"delay"
					{time 1}
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
								{prop
									{prop cannon}
								}
								{state
									{state operatable}
								}
							}
							{exclude
								{tag
									{tag needtowing1}
								}
								{tag
									{tag needtowing2}
								}
								{tag
									{tag needtowing3}
								}
								{tag
									{tag needtowing4}
								}
								{tag
									{tag needtowing5}
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
								{amount 1
								}
								{tag towingmarker}
							}
						}
					}
					{tag_add needtowing3}
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
								{tag
									{tag player_armor}
								}
								{tag
									{tag player_car}
								}
							}
							{include
								{state
									{state operatable}
								}
								{prop
									{prop tractor}
								}
							}
							{exclude
								{tag
									{tag towing1}
								}
								{tag
									{tag towing2}
								}
								{tag
									{tag towing3}
								}
								{tag
									{tag towing4}
								}
								{tag
									{tag towing5}
								}
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
											{tag needtowing3}
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
					{tag_add towing3}
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
									{tag towing3}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action attach}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needtowing3}
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
				{"delay"
					{time 1}
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
								{prop
									{prop cannon}
								}
								{state
									{state operatable}
								}
							}
							{exclude
								{tag
									{tag needtowing1}
								}
								{tag
									{tag needtowing2}
								}
								{tag
									{tag needtowing3}
								}
								{tag
									{tag needtowing4}
								}
								{tag
									{tag needtowing5}
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
								{amount 1
								}
								{tag towingmarker}
							}
						}
					}
					{tag_add needtowing4}
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
								{tag
									{tag player_armor}
								}
								{tag
									{tag player_car}
								}
							}
							{include
								{state
									{state operatable}
								}
								{prop
									{prop tractor}
								}
							}
							{exclude
								{tag
									{tag towing1}
								}
								{tag
									{tag towing2}
								}
								{tag
									{tag towing3}
								}
								{tag
									{tag towing4}
								}
								{tag
									{tag towing5}
								}
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
											{tag needtowing4}
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
					{tag_add towing4}
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
									{tag towing4}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action attach}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needtowing4}
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
				{"delay"
					{time 1}
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
								{prop
									{prop cannon}
								}
								{state
									{state operatable}
								}
							}
							{exclude
								{tag
									{tag needtowing1}
								}
								{tag
									{tag needtowing2}
								}
								{tag
									{tag needtowing3}
								}
								{tag
									{tag needtowing4}
								}
								{tag
									{tag needtowing5}
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
								{amount 1
								}
								{tag towingmarker}
							}
						}
					}
					{tag_add needtowing5}
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
								{tag
									{tag player_armor}
								}
								{tag
									{tag player_car}
								}
							}
							{include
								{state
									{state operatable}
								}
								{prop
									{prop tractor}
								}
							}
							{exclude
								{tag
									{tag towing1}
								}
								{tag
									{tag towing2}
								}
								{tag
									{tag towing3}
								}
								{tag
									{tag towing4}
								}
								{tag
									{tag towing5}
								}
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
											{tag needtowing5}
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
					{tag_add towing5}
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
									{tag towing5}
								}
							}
							{include
								{state
									{state operatable}
								}
							}
						}
					}
					{drop orders}
					{action attach}
					{target
						{source advanced}
						{group
							{select
								{tag
									{tag needtowing5}
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
				{"entity_state"
					{selector
						{source advanced}
						{group
							{select
								{tag
									{tag needtowing1}
								}
							}
						}
					}
					{tag_remove needtowing1}
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
									{tag towing1}
								}
							}
						}
					}
					{tag_remove towing1}
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
									{tag needtowing2}
								}
							}
						}
					}
					{tag_remove needtowing2}
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
									{tag towing2}
								}
							}
						}
					}
					{tag_remove towing2}
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
									{tag needtowing3}
								}
							}
						}
					}
					{tag_remove needtowing3}
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
									{tag towing3}
								}
							}
						}
					}
					{tag_remove towing3}
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
									{tag needtowing4}
								}
							}
						}
					}
					{tag_remove needtowing4}
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
									{tag towing4}
								}
							}
						}
					}
					{tag_remove towing4}
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
									{tag needtowing5}
								}
							}
						}
					}
					{tag_remove needtowing5}
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
									{tag towing5}
								}
							}
						}
					}
					{tag_remove towing5}
				}
			}