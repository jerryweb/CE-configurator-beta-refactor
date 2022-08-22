{"conquest_enhanced/at/delet ammo_point"
				{condition
					{terms
						{"1.entities"
							{selector
								{tag "4_a_2-3"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"2.entities"
							{selector
								{tag "1_b_2-3"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"3.entities"
							{selector
								{tag "2_b_2-3"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"4.entities"
							{selector
								{tag "3_b_2-3"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"5.entities"
							{selector
								{tag "5_b_2-3"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"6.entities"
							{selector
								{tag "4_a_2-3_mg"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"7.entities"
							{selector
								{tag "1_b_2-3_mg"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"8.entities"
							{selector
								{tag "2_b_2-3_mg"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"9.entities"
							{selector
								{tag "3_b_2-3_mg"}
								
							}
							{count
								{op "=="}
								{value 0}
							}
						}
						{"10.entities"
							{selector
								{tag "5_b_2-3_mg"}
								
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
			