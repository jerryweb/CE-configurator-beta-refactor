; // This script defines the VISION FIELDS of the units. 
; // Units can have several vision fields. For example, a human has the forward main vision field and the peripheral one.
; // 
; // {uncover 15} <- Will spot hidden soldiers in bushes within 15m
; // {h_fov 100}  <- Horizontal field of view arc = 100 degree
; // {v_fov 180}  <- Vertical field of view arc = 180 degree (straight up or down)
; // ("spotting" args 2)  <- Sets the "vision range", defined in generic.inc, so this unit will do spotting twice as far.
; // Or in other terms, the vision distances will be x2

;/*=============== Long Range Cannon Begin ===============*/

{"cannon_range_300"						; // Gunner Vision - Gun range 300m
	{uncover 5}
	{h_fov 50}
	{v_fov 170}
	("spotting2" args 2.5 50 0.66)
}

{"cannon_range_350"						; // Gunner Vision - Gun range 350m
	{uncover 5}
	{h_fov 50}
	{v_fov 170}
	("spotting2" args 3.0 50 0.66)
}

{"cannon_range_400"						; // Gunner Vision - Gun range 400m 
	{uncover 5}
	{h_fov 50}
	{v_fov 170}
	("spotting2" args 3.5 50 0.66)
}

{"cannon_range_450"						; // Gunner Vision - Gun range 450m 
	{uncover 5}
	{h_fov 50}
	{v_fov 170}
	("spotting2" args 4.0 500 4.0)
}

{"cannon_range_500"						; // Gunner Vision - Gun range 500m 
	{uncover 5}
	{h_fov 50}
	{v_fov 170}
	("spotting2" args 4.5 50 0.66)
}

{"cannon_range_550"						; // Gunner Vision - Gun range 550m 
	{uncover 5}
	{h_fov 50}
	{v_fov 170}
	("spotting2" args 5.0 50 0.66)
}

{"cannon_range_600"						; // Gunner Vision - Gun range 600m 
	{uncover 5}
	{h_fov 50}
	{v_fov 170}
	("spotting2" args 6.5 50 0.66)
}

;/*=============== Long Range Cannon End ===============*/
