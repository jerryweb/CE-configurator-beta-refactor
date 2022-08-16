{"default"
	{clip
		{viewMin		-50	}	; camera rotate upward limit (looking down)
		{viewMax		55	}	; camera rotate downward limit (looking up)
		{distanceMin	40	}	; camera min distance from object. value / 20 = meters
		{distanceMax	100	}	; camera max distance from object. value / 20 = meters
	}
	; each level derives parameters from previous one
	{level ;0
		{linkBone "head"}
		{faroffset 0 11 22}
		{nearoffset	10 11 12}
		{delta 30}			; distance delta
		{camera "human_zoom0_60"}
		{ManualAccuracyZoom}
		{blur_strength 2}
		{hide_hitmarker 1}
		{disable_fow 0}
		{no_grain}
		{no_rim_light}
	}
	{level ;1
			    {zoom}
				{linkBone	"right_hand"	}
				{distanceset 		0}
				{distance			30}	; activation distance
				{delta		20		}		; distance delta
				{camera "human_zoom1"}
			    {offset		25.7 0.2 2.6}
				{blur_strength 10}
				{hide_hitmarker 0}
				{forceGrass 1}
				{disable_fow 0}
				{vignette	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01"}
				{blur_mask	"/texture/common/environment/lens_effects/zoom_vignette_infantry_01_mask"}
			}
}