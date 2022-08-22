			(include "conquest_enhanced_ai_logic_triggers.inc")
			(include "conquest_enhanced_ai_spawn_triggers.inc")
			(include "conquest_enhanced_ai_offmap_support_triggers.inc")
			(include "conquest_enhanced_init_triggers.inc")
			(include "conquest_enhanced_paratrooper_triggers.inc")
			(include "conquest_enhanced_player_paratrooper_triggers.inc")
			(include "conquest_enhanced_player_triggers.inc")
			(include "conquest_enhanced_misc_triggers.inc")

			{## "only_for_testing/give_player_map_units"
				{condition
				}
				{actions
					{"delay"
						{time 3}
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
									{player
										{player "5"}
									}
								}
							}
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
										{state linked}
									}
									{player
										{player "5"}
									}
								}
							}
						}
						{operation set}
						{player "7"}
					}
				}
			}
