{"light_mortar_barrage"				;// Flare Marker ammo, for special missions scripting
	{on spawn
	    {delay 15
			{if not tagged "fired"
				{tags add "fired"}
				(define "rnd_art_bomb"
					{delay %delay 0.1
						{spawn "mortar_single_120_dummy" random_position 550}
					}
				)
				("rnd_art_bomb" delay(1))
				("rnd_art_bomb" delay(2))
				("rnd_art_bomb" delay(3))
				("rnd_art_bomb" delay(6))
				("rnd_art_bomb" delay(6.1))
				("rnd_art_bomb" delay(6.2))
				("rnd_art_bomb" delay(6.5))
				("rnd_art_bomb" delay(6.7))
				("rnd_art_bomb" delay(7))
				
				("rnd_art_bomb" delay(10))
				("rnd_art_bomb" delay(11))
				("rnd_art_bomb" delay(12))
				("rnd_art_bomb" delay(12.1))
				("rnd_art_bomb" delay(12.2))
				("rnd_art_bomb" delay(12.3))
				("rnd_art_bomb" delay(12.4))
				("rnd_art_bomb" delay(12.5))
				("rnd_art_bomb" delay(12.6))
				("rnd_art_bomb" delay(15))
				("rnd_art_bomb" delay(16))
				("rnd_art_bomb" delay(17))
				("rnd_art_bomb" delay(18))
				("rnd_art_bomb" delay(21))
				("rnd_art_bomb" delay(21.1))
				("rnd_art_bomb" delay(21.2))
				("rnd_art_bomb" delay(21.3))
				("rnd_art_bomb" delay(21.4))
				{hide 25}
			}
		}
	}
}

{"light_mortar_barrageger"				;// Flare Marker ammo, for special missions scripting
	{on spawn
	    {delay 15
			{if not tagged "fired"
				{tags add "fired"}
				(define "rnd_art_bomb"
					{delay %delay 0.1
						{spawn "mortar_single_120_dummy" random_position 550}
					}
				)
				("rnd_art_bomb" delay(1))
				("rnd_art_bomb" delay(2))
				("rnd_art_bomb" delay(3))
				("rnd_art_bomb" delay(6))
				("rnd_art_bomb" delay(6.1))
				("rnd_art_bomb" delay(6.2))
				("rnd_art_bomb" delay(6.5))
				("rnd_art_bomb" delay(6.7))
				("rnd_art_bomb" delay(7))
				
				("rnd_art_bomb" delay(10))
				("rnd_art_bomb" delay(11))
				("rnd_art_bomb" delay(12))
				("rnd_art_bomb" delay(12.1))
				("rnd_art_bomb" delay(12.2))
				("rnd_art_bomb" delay(12.3))
				("rnd_art_bomb" delay(12.4))
				("rnd_art_bomb" delay(12.5))
				("rnd_art_bomb" delay(12.6))
				("rnd_art_bomb" delay(15))
				("rnd_art_bomb" delay(16))
				("rnd_art_bomb" delay(17))
				("rnd_art_bomb" delay(18))
				("rnd_art_bomb" delay(21))
				("rnd_art_bomb" delay(21.1))
				("rnd_art_bomb" delay(21.2))
				("rnd_art_bomb" delay(21.3))
				("rnd_art_bomb" delay(21.4))
				{hide 25}
			}
		}
	}
}

{"heavy_arty_barrage"	
    {on spawn
		{delay 15
			{if not tagged "fired"
				{tags add "fired"}
				(define "rnd_art_bomb"
					{delay %delay 0.1
						{spawn "artillery_single_150_dummy" random_position 1000}
					}
				)
				("rnd_art_bomb" delay(1))
				("rnd_art_bomb" delay(2))
				("rnd_art_bomb" delay(3))
				("rnd_art_bomb" delay(6))
				("rnd_art_bomb" delay(6.1))
				("rnd_art_bomb" delay(6.2))
				("rnd_art_bomb" delay(6.5))
				("rnd_art_bomb" delay(6.7))
				("rnd_art_bomb" delay(7))
				
				("rnd_art_bomb" delay(10))
				("rnd_art_bomb" delay(11))
				("rnd_art_bomb" delay(12))
				("rnd_art_bomb" delay(12.1))
				("rnd_art_bomb" delay(12.2))
				("rnd_art_bomb" delay(12.3))
				("rnd_art_bomb" delay(12.4))
				("rnd_art_bomb" delay(12.5))
				("rnd_art_bomb" delay(12.6))

				("rnd_art_bomb" delay(15))
				("rnd_art_bomb" delay(16))
				("rnd_art_bomb" delay(17))
				("rnd_art_bomb" delay(18))
				("rnd_art_bomb" delay(21))
				("rnd_art_bomb" delay(21.1))
				("rnd_art_bomb" delay(21.2))
				("rnd_art_bomb" delay(21.3))
				("rnd_art_bomb" delay(21.4))
				{hide 25}
			}
		}
	}
}

{"heavy_arty_barrageger"	
    {on spawn
		{delay 15
			{if not tagged "fired"
				{tags add "fired"}
				(define "rnd_art_bomb"
					{delay %delay 0.1
						{spawn "artillery_single_150_dummy" random_position 1000}
					}
				)
				("rnd_art_bomb" delay(1))
				("rnd_art_bomb" delay(2))
				("rnd_art_bomb" delay(3))
				("rnd_art_bomb" delay(6))
				("rnd_art_bomb" delay(6.1))
				("rnd_art_bomb" delay(6.2))
				("rnd_art_bomb" delay(6.5))
				("rnd_art_bomb" delay(6.7))
				("rnd_art_bomb" delay(7))
				
				("rnd_art_bomb" delay(10))
				("rnd_art_bomb" delay(11))
				("rnd_art_bomb" delay(12))
				("rnd_art_bomb" delay(12.1))
				("rnd_art_bomb" delay(12.2))
				("rnd_art_bomb" delay(12.3))
				("rnd_art_bomb" delay(12.4))
				("rnd_art_bomb" delay(12.5))
				("rnd_art_bomb" delay(12.6))

				("rnd_art_bomb" delay(15))
				("rnd_art_bomb" delay(16))
				("rnd_art_bomb" delay(17))
				("rnd_art_bomb" delay(18))
				("rnd_art_bomb" delay(21))
				("rnd_art_bomb" delay(21.1))
				("rnd_art_bomb" delay(21.2))
				("rnd_art_bomb" delay(21.3))
				("rnd_art_bomb" delay(21.4))
				{hide 25}
			}
		}
	}
}

{"smoke_cover_callin"
    {on spawn 
		{tags add "smokefired"}
		{delay 7
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "75mm_ger_l24_sm2" offset -250 0 1000 random_position 1000}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.5))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(0.6))
			("rnd_art_bomb" delay(1.1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3.1))
			("rnd_art_bomb" delay(3.2))
			("rnd_art_bomb" delay(3.3))
			("rnd_art_bomb" delay(0.7))
			("rnd_art_bomb" delay(1.2))
			("rnd_art_bomb" delay(1.7))
			("rnd_art_bomb" delay(2.2))
			("rnd_art_bomb" delay(2.7))
			("rnd_art_bomb" delay(3.4))
			("rnd_art_bomb" delay(0.8))
			("rnd_art_bomb" delay(1.3))
			("rnd_art_bomb" delay(1.8))
			("rnd_art_bomb" delay(2.3))
			("rnd_art_bomb" delay(2.8))
			("rnd_art_bomb" delay(3.8))
			("rnd_art_bomb" delay(0.9))
			("rnd_art_bomb" delay(1.9))
			("rnd_art_bomb" delay(2.9))
			("rnd_art_bomb" delay(2.4))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(0.6))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(3.0))
			("rnd_art_bomb" delay(3))
			
			{hide 10}
		}
		{delay 3
			{tags add "callin_moved"}
		}
	}
}

{"smoke_cover_callinger"
    {on spawn 
		{delay 7
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "75mm_ger_l24_sm2" offset -250 0 1000 random_position 1000}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.5))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(0.6))
			("rnd_art_bomb" delay(1.1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3.1))
			("rnd_art_bomb" delay(3.2))
			("rnd_art_bomb" delay(3.3))
			("rnd_art_bomb" delay(0.7))
			("rnd_art_bomb" delay(1.2))
			("rnd_art_bomb" delay(1.7))
			("rnd_art_bomb" delay(2.2))
			("rnd_art_bomb" delay(2.7))
			("rnd_art_bomb" delay(3.4))
			("rnd_art_bomb" delay(0.8))
			("rnd_art_bomb" delay(1.3))
			("rnd_art_bomb" delay(1.8))
			("rnd_art_bomb" delay(2.3))
			("rnd_art_bomb" delay(2.8))
			("rnd_art_bomb" delay(3.8))
			("rnd_art_bomb" delay(0.9))
			("rnd_art_bomb" delay(1.9))
			("rnd_art_bomb" delay(2.9))
			("rnd_art_bomb" delay(2.4))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(0.6))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(3.6))
			("rnd_art_bomb" delay(4))
						
			{hide 10}
		}
	}
}

{"offmap_mortar"			;// Spawns delayed explosion (fake mortar)
	{on spawn
		{start_sound "weapon/mortar/whistle"}
		{delay 1.5
			{stuff_detonate}
		}
	}
}

{"big_bertha_callin"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn 
	 	{if not tagged "fired"
			{tags add "firedrus"}
			
			{tags add "600"}		
			(define "bertha_round"
				{delay %delay 0.5
					{link_sound "bkg_big_bertha_cannon" "weapon/shot/bkg/big_bertha_cannon/"}
					{play_sound "bkg_big_bertha_cannon"}

					{delay 12
						{tags add "big_bertha_incoming"}
						{link_sound "big_bertha_whistle" "weapon/shot/bkg/big_bertha_whistle/"}
						{play_sound "big_bertha_whistle"}
						{delay 2.5
							{spawn "600mm_big_bertha" offset -250 0 1000 random_position 700}
						}
					}
				}
				
			)
			("bertha_round" delay(3))
			{hide 15}
		}	
		{delay 3
			{tags add "callin_moved"}	
		}
	}
}

{"rocket_arty_callinger"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn 
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
		{play_sound "bkg_rocket"}
		{tags add "120"}
		{delay 7
			{start_sound "bkg_rocket"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "300mm_nebelwerfer2" offset -250 0 1000 random_position 1000}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.5))
			("rnd_art_bomb" delay(3))
						
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
						
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			{hide 31}
		}
	}
}

{"rocket_arty_callinrus"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn 
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
		{play_sound "bkg_rocket"}
		{tags add "120"}
		{delay 7
			{start_sound "bkg_rocket"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "m13_rocket2" offset -250 0 1000 random_position 1000}
					{play_sound "bkg_rocket"}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.5))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(0.6))
			("rnd_art_bomb" delay(1.1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3.1))
			("rnd_art_bomb" delay(3.2))
			("rnd_art_bomb" delay(3.3))
			("rnd_art_bomb" delay(0.7))
			("rnd_art_bomb" delay(1.2))
			("rnd_art_bomb" delay(1.7))
			("rnd_art_bomb" delay(2.2))
			("rnd_art_bomb" delay(2.7))
			("rnd_art_bomb" delay(3.4))
			("rnd_art_bomb" delay(0.8))
			("rnd_art_bomb" delay(1.3))
			("rnd_art_bomb" delay(1.8))
			("rnd_art_bomb" delay(2.3))
			("rnd_art_bomb" delay(2.8))
			("rnd_art_bomb" delay(3.8))
			("rnd_art_bomb" delay(0.9))
			("rnd_art_bomb" delay(1.9))
			("rnd_art_bomb" delay(2.9))
			("rnd_art_bomb" delay(2.4))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(0.6))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(3.))
			("rnd_art_bomb" delay(3))
						
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
						
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			{hide 31}
		}
	}
}

{"mortar_barrage"			;// Flare that spawns timed explosions randomized in area
	{on spawn
		{if not tagged "fired"
			{tags add "fired"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "artillery_single_105_dummy" random_position 350}
				}
			)
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(4))
			("rnd_art_bomb" delay(6))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(10))
			("rnd_art_bomb" delay(12))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(18))

			{hide 19}
		}
	}
}

{"rocket_arty_callinger"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn 
		{play_sound "bkg_rocket"}
		{tags add "120"}
		{delay 7
			{start_sound "bkg_rocket"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "300mm_nebelwerfer2" offset -250 0 1000 random_position 1000}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(3.5))
			("rnd_art_bomb" delay(5))
			("rnd_art_bomb" delay(6.5))
			("rnd_art_bomb" delay(8))
						
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(16.5))
			("rnd_art_bomb" delay(18))
			("rnd_art_bomb" delay(19.5))
			("rnd_art_bomb" delay(20))
						
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(28))
			("rnd_art_bomb" delay(29.5))
			("rnd_art_bomb" delay(31))
			("rnd_art_bomb" delay(33.5))
			{hide 37}
		}
	}
}

{"rocket_arty_callinrus"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn 
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
		{play_sound "bkg_rocket"}
		{tags add "120"}
		{delay 7
			{start_sound "bkg_rocket"}
			(define "rnd_art_bomb"
				{delay %delay 0.5
					{spawn "m13_rocket2" offset -250 0 1000 random_position 1000}
					{play_sound "bkg_rocket"}
				}
			)
			("rnd_art_bomb" delay(0.5))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(3.5))
			("rnd_art_bomb" delay(5))
			("rnd_art_bomb" delay(6.5))
			("rnd_art_bomb" delay(8))
			("rnd_art_bomb" delay(8.6))
			("rnd_art_bomb" delay(1.1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3.1))
			("rnd_art_bomb" delay(3.2))
			("rnd_art_bomb" delay(3.3))
			("rnd_art_bomb" delay(0.7))
			("rnd_art_bomb" delay(1.2))
			("rnd_art_bomb" delay(1.7))
			("rnd_art_bomb" delay(2.2))
			("rnd_art_bomb" delay(2.7))
			("rnd_art_bomb" delay(3.4))
			("rnd_art_bomb" delay(0.8))
			("rnd_art_bomb" delay(1.3))
			("rnd_art_bomb" delay(1.8))
			("rnd_art_bomb" delay(2.3))
			("rnd_art_bomb" delay(2.8))
			("rnd_art_bomb" delay(3.8))
			("rnd_art_bomb" delay(0.9))
			("rnd_art_bomb" delay(1.9))
			("rnd_art_bomb" delay(2.9))
			("rnd_art_bomb" delay(2.4))
			("rnd_art_bomb" delay(2.1))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(0.6))
			("rnd_art_bomb" delay(1))
			("rnd_art_bomb" delay(1.6))
			("rnd_art_bomb" delay(2))
			("rnd_art_bomb" delay(2.6))
			("rnd_art_bomb" delay(3))
			("rnd_art_bomb" delay(3.))
			("rnd_art_bomb" delay(3))
						
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
			("rnd_art_bomb" delay(13.5))
			("rnd_art_bomb" delay(14))
			("rnd_art_bomb" delay(14.5))
			("rnd_art_bomb" delay(15))
			("rnd_art_bomb" delay(15.5))
			("rnd_art_bomb" delay(16))
						
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			("rnd_art_bomb" delay(23.5))
			("rnd_art_bomb" delay(24))
			("rnd_art_bomb" delay(24.5))
			("rnd_art_bomb" delay(25))
			("rnd_art_bomb" delay(25.5))
			("rnd_art_bomb" delay(26))
			("rnd_art_bomb" delay(26.5))
			{hide 31}
		}
	}
}

{"mortar_single_120_dummy2"			;// Shells that fall to ground. Source Off-map artillery
	{on spawn 
		{start_sound "weapon/mortar/whistle" ambient}
		{delay 5.1
		    {spawn "mortar_single_1202" offset -250 0 600}
		}
		{tags add "smoke"}
		{delay 5.1
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 25 -500 random_position 700}
			{spawn "shell_smoke" offset -500 77 -500 random_position 700}
			{spawn "shell_smoke" offset -500 33 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{spawn "shell_smoke" offset -500 25 -500  random_position 700}
			{spawn "shell_smoke" offset -500 77 -500  random_position 700}
			{spawn "shell_smoke" offset -500 33 -500  random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 25 -500 random_position 700}
			{spawn "shell_smoke" offset -500 77 -500 random_position 700}
			{spawn "shell_smoke" offset -500 33 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500 random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{spawn "shell_smoke" offset -500 25 -500  random_position 700}
			{spawn "shell_smoke" offset -500 77 -500  random_position 700}
			{spawn "shell_smoke" offset -500 33 -500  random_position 700}
			{spawn "shell_smoke" offset -500 0 -500  random_position 700}
			{hide 1}
		}
		{delay 2
			{tags add "callin_moved"}
		}
	}
}

{"light_mortar_barrageai"				;// Flare Marker ammo, for special missions scripting
	{on spawn
	    {if not tagged "fired"
			{tags add "firedrus"}

			{delay 15
				{if rand 0.33
					(define "rnd_art_bomb"
						{delay %delay 0.1
							{spawn "artillery_single_105_dummy" random_position 600}
						}
					)
				else rand 0.33 
					(define "rnd_art_bomb"
						{delay %delay 0.1
							{spawn "artillery_single_105_dummy" random_position 1000}
						}
					)
				else 
					(define "rnd_art_bomb"
						{delay %delay 0.1
							{spawn "artillery_single_105_dummy" random_position 1700}
						}
					)
				}
				("rnd_art_bomb" delay(0.5))
				("rnd_art_bomb" delay(2))
				("rnd_art_bomb" delay(2.5))
				("rnd_art_bomb" delay(3.0))
				("rnd_art_bomb" delay(4.5))
				("rnd_art_bomb" delay(6.0))
				("rnd_art_bomb" delay(6.1))
				("rnd_art_bomb" delay(6.3))
				("rnd_art_bomb" delay(6.5))
				("rnd_art_bomb" delay(9.2))
				("rnd_art_bomb" delay(9.4))
				("rnd_art_bomb" delay(9.6))
				("rnd_art_bomb" delay(9.7))
				("rnd_art_bomb" delay(13.0))
				("rnd_art_bomb" delay(13.5))
				("rnd_art_bomb" delay(14.0))
				("rnd_art_bomb" delay(14.5))
				("rnd_art_bomb" delay(15.0))
				("rnd_art_bomb" delay(15.5))
				{hide 10}
			}
			{delay 3
				{tags add "callin_moved"}
			}
		}
	}
}

{"heavy_arty_barrageai"	
    {on spawn
    	{if not tagged "fired"
			{tags add "firedrus"}
			{delay 20
				{if rand 0.33
					(define "rnd_art_bomb"
						{delay %delay 0.1
							{spawn "artillery_single_150_dummy" random_position 600}
						}
					)
				else rand 0.33 
					(define "rnd_art_bomb"
						{delay %delay 0.1
							{spawn "artillery_single_150_dummy" random_position 1000}
						}
					)
				else 
					(define "rnd_art_bomb"
						{delay %delay 0.1
							{spawn "artillery_single_150_dummy" random_position 1500}
						}
					)
				}
				("rnd_art_bomb" delay(0.5))
				("rnd_art_bomb" delay(2))
				("rnd_art_bomb" delay(2.5))
				("rnd_art_bomb" delay(3.0))
				("rnd_art_bomb" delay(3.1))
				("rnd_art_bomb" delay(6.0))
				("rnd_art_bomb" delay(6.1))
				("rnd_art_bomb" delay(6.2))
				("rnd_art_bomb" delay(8.0))
				("rnd_art_bomb" delay(8.5))
				("rnd_art_bomb" delay(9.0))
				("rnd_art_bomb" delay(9.5))
				("rnd_art_bomb" delay(13.0))
				("rnd_art_bomb" delay(13.5))
				("rnd_art_bomb" delay(14.0))
				("rnd_art_bomb" delay(14.5))
				("rnd_art_bomb" delay(15.0))
				("rnd_art_bomb" delay(15.5))
				{hide 16}
			}
			{delay 3
				{tags add "callin_moved"}
			}
		}
	}
}

{"hedgehog_service"
	{on "offmap_destroy_hedgehog"
		{tags add "set_to_blow"}

        {add_view "smoke_flare_red" "smoke" "root"}
		{view start "smoke"}
		{if rand 0.33
			{spawn "dynamite_ger_x7" random_position 10}
		else rand 0.33 
			{spawn "geballteladung_3kg" random_position 10}
		else
			{spawn "satchel_charge_rus" random_position 10}
		}	
		{delay 10 2 {view stop "smoke"}
			{spawn "explosion"}
			{delay 1 {delete}}
		}
    }
}

