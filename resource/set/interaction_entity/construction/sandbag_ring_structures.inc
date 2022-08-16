{"vehicle"
	{on "sandbag_ring_heap_curved"
		{delay 10
			{spawn "sandbag_heap_curved" offset 75 0 0}
			{delay 2
				{spawn "sandbag_heap_pile" offset 68 68 0}
				{delay 2
					{spawn "sandbag_heap_curved_90" offset 0 75 0}
					{delay 2
						{spawn "sandbag_heap_pile" offset -68 68 0}
						{delay 2
							{spawn "sandbag_heap_curved_180" offset -75 0 0}
							{delay 2
								{spawn "sandbag_heap_curved_270" offset 0 -75 0}
								{delay 2
									{spawn "sandbag_heap_pile" offset 70 -70 0}
									{call "activate_vehicle"}
								}
							}
						}
					}
				}
			}
		}
	}			
	{on "sandbag_ring_framed_curved"
		{delay 10
			{spawn "sandbag_framed_curved" offset 80 0 0}
			{delay 2
				{spawn "sandbag_heap_pile" offset 68 68 0}
				{delay 2
					{spawn "sandbag_framed_curved_90" offset 0 80 0}
					{delay 2
						{spawn "sandbag_heap_pile" offset -68 68 0}
						{delay 2
							{spawn "sandbag_framed_curved_180" offset -80 0 0}
							{delay 2
								{spawn "sandbag_framed_curved_270" offset 0 -80 0}
								{delay 2
									{spawn "sandbag_heap_pile" offset 70 -70 0}
									{call "activate_vehicle"}
								}
							}
						}
					}
				}
			}
		}
	}
	{on "sandbag_ring_framed_straight"
		{delay 10
			{spawn "sandbag_framed_straight" offset 80 25 0}
			{spawn "sandbag_framed_straight" offset 80 -25 0}
			{delay 2
				{spawn "sandbag_heap_pile" offset 72 72 0}
				{delay 2
					{spawn "sandbag_framed_straight_90" offset 25 80 0}
					{spawn "sandbag_framed_straight_90" offset -25 80 0}
					{delay 2
						{spawn "sandbag_heap_pile" offset -72 72 0}
						{delay 2
							{spawn "sandbag_framed_straight_180" offset -80 25 0}
							{spawn "sandbag_framed_straight_180" offset -80 -25 0}
							{delay 2
								{spawn "sandbag_framed_straight_270" offset 25 -80 0}
								{spawn "sandbag_framed_straight_270" offset -25 -80 0}
								{delay 2
									{spawn "sandbag_heap_pile" offset 72 -72 0}
									{call "activate_vehicle"}
								}
							}
						}
					}
				}		
			}
		}	
	}	
	{on "sandbag_ring_heap_straight_with_lane"
		{delay 10
			{spawn "sandbag_heap_straight" offset 80 25 0}
			{spawn "sandbag_heap_straight" offset 80 -25 0}
			{delay 2
				{spawn "sandbag_heap_pile" offset 72 72 0}
				{delay 2
					{spawn "sandbag_heap_straight_90" offset 25 80 0}
					{spawn "sandbag_heap_straight_90" offset -25 80 0}
					{delay 2
						{spawn "sandbag_heap_pile" offset -72 72 0}
						{delay 2
							{spawn "sandbag_heap_straight" offset -80 25 0}
							{spawn "sandbag_heap_pile" offset -90 -25 0}
							{spawn "sandbag_heap_pile" offset -130 -25 0}
							{delay 2
								{spawn "sandbag_heap_straight_270" offset 25 -80 0}
								{spawn "sandbag_heap_pile" offset -30 -80 0}
								{spawn "sandbag_heap_pile" offset -70 -80 0}
								{spawn "sandbag_heap_pile" offset -110 -80 0}
								{delay 2
									{spawn "sandbag_heap_pile" offset 72 -72 0}
									{call "activate_vehicle"}
								}
							}
						}
					}
				}		
			}
		}	
	}	
	{on "sandbag_ring_heap_straight_no_piles"
		{delay 8
			{spawn "sandbag_heap_straight" offset 80 25 0}
			{spawn "sandbag_heap_straight" offset 80 -25 0}
			{delay 2	
				{spawn "sandbag_heap_straight_90" offset 25 80 0}
				{spawn "sandbag_heap_straight_90" offset -25 80 0}
				{delay 2					
					{spawn "sandbag_heap_straight" offset -80 25 0}
					{delay 2
						{spawn "sandbag_heap_straight_270" offset 25 -80 0}
						{spawn "sandbag_heap_straight_270" offset -25 -80 0}
													
						{call "activate_vehicle"}
							
					}					
				}											
			}						
		}	
	}
	{on "sandbag_ring_heap_straight"
		{delay 8
			{spawn "sandbag_heap_straight" offset 80 25 0}
			{spawn "sandbag_heap_straight" offset 80 -25 0}
			{delay 2
				{spawn "sandbag_heap_pile" offset 76 76 0}
				{delay 2
					{spawn "sandbag_heap_straight_90" offset 25 80 0}
					{spawn "sandbag_heap_straight_90" offset -25 80 0}
					{delay 2
						{spawn "sandbag_heap_pile" offset -76 76 0}
						{delay 2
							{spawn "sandbag_heap_straight" offset -80 25 0}
							{delay 2
								{spawn "sandbag_heap_pile" offset -76 -76 0}
								{delay 2
									{spawn "sandbag_heap_straight_270" offset 25 -80 0}
									{spawn "sandbag_heap_straight_270" offset -25 -80 0}
									{delay 2
										{spawn "sandbag_heap_pile" offset 76 -76 0}
										{call "activate_vehicle"}
									}
								}
							}
						}
					}
				}		
			}
		}	
	}
	{on "sandbag_ring_heap_straight_short_no_piles"
		{delay 8
			{spawn "sandbag_structured_straight" offset 80 25 0}
			{spawn "sandbag_structured_straight" offset 80 -25 0}
			{delay 2	
				{spawn "sandbag_structured_straight2" offset 25 80 0}
				{spawn "sandbag_structured_straight2" offset -25 80 0}
				{delay 2					
					{spawn "sandbag_structured_straight" offset -80 25 0}
					{spawn "sandbag_structured_straight" offset -80 -25 0}
					{delay 2
						{spawn "sandbag_structured_straight2" offset 25 -80 0}
						{spawn "sandbag_structured_straight2" offset -25 -80 0}
						{delay 2							
							{call "activate_vehicle"}
						}	
					}					
				}											
			}						
		}	
	}
	{on "sandbag_ring_heap_curved_small"
		{delay 10
			{spawn "sandbag_heap_curved" offset 40 0 0}
			{delay 5
				{spawn "sandbag_heap_curved_90" offset 0 40 0}
				{delay 5
					{spawn "sandbag_heap_curved_270" offset 0 -40 0}
					{delay 5
						{spawn "sandbag_heap_pile" offset -60 40 0}
						{delay 5
							{spawn "sandbag_heap_pile" offset -60 -40 0}
							{call "activate_vehicle"}
						}
					}
				}
			}
		}
	}
	{on "sandbag_ring_frame_curved_small"
		{delay 10
			{spawn "sandbag_framed_curved" offset 40 0 0}
			{delay 5
				{spawn "sandbag_framed_curved_90" offset 0 40 0}
				{delay 5
					{spawn "sandbag_framed_curved_270" offset 0 -40 0}
					{delay 5
						{spawn "sandbag_heap_pile" offset -60 40 0}
						{delay 5
							{spawn "sandbag_heap_pile" offset -60 -40 0}
							{call "activate_vehicle"}
						}
					}
				}
			}
		}
	}			
}
