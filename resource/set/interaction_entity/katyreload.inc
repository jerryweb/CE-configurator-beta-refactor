{"katusha car"
	{on spawn
		{add_view	"dust_bm13"		 "dust" "gun_rot"}
		{add_view	"dust_bm13_snow" "snow" "gun_rot"}
		{link_sound "bkg_rocket" "weapon/shot/bkg/rocket/"}
		{delay 10
		    {if tagged "katy"
		        {chassis_work 0}
		        {delay 20
			        {chassis_work 1}
			    }
		    }
	    }
	}
	{on fire "gun" overload
		{tags add "reloading"}
		{if tagged "katy"
		    {chassis_work 0}
		}
		{delay 150.3 
		    {tags remove "reloading"}
			{chassis_work 1}
		}
		(define "bm13_fire"
			{if terrain_fx "snow"
				{view start "snow"}
				{delay 0.3 {view pause "snow"}}
			else terrain_fx "ice"
				{view start "snow"}
				{delay 0.3 {view pause "snow"}}
			else terrain_fx "shallow_water"
				;nothing
			else
				{view start "dust"}
				{delay 0.3 {view pause "dust"}}
			}
		)
		{play_sound "bkg_rocket"}
		{if name "00"
			("bm13_fire")
		else name "01"
			("bm13_fire")
		else name "02"
			("bm13_fire")
		else name "03"
			("bm13_fire")
		else name "04"
			("bm13_fire")
		else name "05"
			("bm13_fire")
		else name "06"
			("bm13_fire")
		else name "07"
			("bm13_fire")
		else name "08"
			("bm13_fire")
		else name "09"
			("bm13_fire")
		else name "10"
			("bm13_fire")
		else name "11"
			("bm13_fire")
		else name "12"
			("bm13_fire")
		else name "13"
			("bm13_fire")
		else name "14"
			("bm13_fire")
		else name "15"
			("bm13_fire")
		}
		{ik_enable "turret" 0}
		{ik_enable "gun_rot" 0}
		{delay 1
			{if work "turret"
				{if work "gun"
					{ik_enable "turret" 1}
					{ik_enable "gun_rot" 1}
				}
			}
		}
	}
	{on "__explosion"
		{set "big_explosion" 0}
		{if explosive_amount 50
			{blastwave c4 20 r0 10 r1 25}
			{spawn "tank_die_light" "basis"}
			{set "big_explosion" 1}
		}
	}
	{on "spawn_shellhole"
		{if "big_explosion"
			{spawn "crater_big" "basis" terrain_texmod}
			{spawn "shellhole_big_dead" "basis"}
		}
	}
	{on engine on
		{weapon_work "gun" 0}
	}
	{on engine off
		{if not tagged "gun_brake"
			{if work "gun"
				{weapon_work "gun" 1}
			}
		}
	}
	{##on blast				;// blastwave hits specific volume
		{if volume "body"
			{if min_energy 3
				{call "blast_body"}
			else min_energy 1
				{if rand 0.6
					{call_synced "blast_body"}
				}
			else stuff "grenade"
				{if rand 0.4
					{call_synced "blast_body"}
				}
			}
		}
	}
}
