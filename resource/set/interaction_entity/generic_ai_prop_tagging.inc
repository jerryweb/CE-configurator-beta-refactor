{"car"
	{on spawn
		{delay 0.2
			{if not user_control
			    {if not tagged "player_car"
				    {if not tagged "cmp_def"
				        {if not tagged "ger"
					        {if not tagged "rus"
						        {if not tagged "player_armor"
								    {if not tagged "player_veh"
									    {if operatable
									        {if not "hidden"
										        {if tagged "artillery"
									        		{tags add "freeroam"}								    		
									    		else tagged "rocket_artillery"
									    			{tags add "freeroam"}
									    		else
									    			{tags add "ai_car"}
								    			}
										    }
										}
									}
							    }
						    }
					    }
				    }
			    }
			}
	    }
	}
}

{"cannon"
	{on spawn
		{delay 0.2
			{if not user_control	
		    	{if operatable
				    {if tagged "cmp_mg" 
				        {tags add "no_scavenge"}
				    else tagged "cmp_def"
				    	{tags add "no_scavenge"}
					else 
				        {if not tagged "ger"
					        {if not tagged "rus"
						        {if not tagged "player_armor"
								    {if not tagged "player_veh"
								        {if not "hidden"
									        {if tagged "artillery"
								        		{tags add "freeroam"}								    		
								    		else tagged "rocket_artillery"
								    			{tags add "freeroam"}
								    		else
								    			{tags add "ai_veh"}
							    			}
									    }
								    }
							    }
							}
						}
					} 			
				}
			}
		}
	}
	{on "set_no_scavage"
		 {if not tagged "player_veh"
			{if operatable
			    {if tagged "cmp_mg" 
			        {tags add "no_scavenge"}
			    else tagged "cmp_def"
			    	{tags add "no_scavenge"}
				}
			}
		}
	}
}

{"truck"
	{on spawn
		{delay 0.2
			{if not user_control
			    {if not tagged "cmp_def"
			        {if not tagged "ger"
				        {if not tagged "rus"
					        {if not tagged "player_armor"
							    {if not tagged "player_veh"
								    {if not tagged "player_car"
									    {if operatable
									        {if not "hidden"
										        {if tagged "artillery"
									        		{tags add "freeroam"}								    		
									    		else tagged "rocket_artillery"
									    			{tags add "freeroam"}
									    		else
									    			{tags add "ai_car"}
								    			}
										    }
										}
									}
								}
						    }
					    }
				    }
			    }
		   }
	    }
	}
}

{"halftrack"
	{on spawn
		{delay 0.2
			{if not user_control	    
		        {if not tagged "ger"
			        {if not tagged "rus"
				        {if not tagged "player_armor"
						    {if not tagged "player_veh"
							    {if not tagged "cmp_def"
								    {if operatable
								        {if not "hidden"
									        {tags add "ai_car"}
									    }
									}
								}									
							}
					    }
				    }
			    }
		    }
	    }
	}
}

{"tank"
	{on spawn
		{delay 0.2
			{if not user_control		    
		        {if not tagged "ger"
			        {if not tagged "rus"
				        {if not tagged "player_armor"
						    {if not tagged "player_veh"
							    {if not tagged "cmp_def"
								    {if operatable
								        {if not "hidden"
									        {if tagged "artillery"
								        		{tags add "freeroam"}								    		
								    		else tagged "rocket_artillery"
								    			{tags add "freeroam"}
								    		else
								    			{tags add "ai_armor"}
							    			}
									    }
									}
								}	
							}
					    }
				    }
			    }
		    }
	    }
	}
}

{"human"
	{on spawn
		{tags remove "noammo23"}
		{delay 0.2
			{if not dead
				{if not user_control				
					{if not linked 
						{if not "hidden"
							{if not tagged "player"
							    {if not tagged "cmp_def"
							        {if not tagged "ger"
								        {if not tagged "rus"
								        	{if not tagged "cookie_hawk"
												{tags add "ai_inf"}
											}
										}
									}		
								}
							}	
						}	
					}
				}
			}
		}
	}
}


