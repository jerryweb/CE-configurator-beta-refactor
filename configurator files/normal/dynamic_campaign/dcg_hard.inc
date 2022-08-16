{Hard
	{GlobalMaxCP 1900}
	{StageCP 90 90 90 95 100 100 100 } 
	{SpecialCP 1001}					;// airstrikes special tab
	{EmplacementCP 50}				;// buildable with engineer
	{Bots
		{StartMP	0.05 min 3002 attackerMultiplier 14.0}
		{FinishMP	0.15 attackerMultiplier 55.5}
		{CP
			{Base "0:0,60:0,480:11,960:10,1080:10,1300:10,1500:12,1900:10,3300:0,4200:10"} ;// seconds : CP
			{RoundMultiplier "0:0.1 1:0.3 2:0.3 3:0.6 4:0.5 5:0.6 6:0.7 7:0.8 11:1.0 15:1.1 20:1.2"} ;// games played : multiplier for CP
			{AttackMultiplier 3.9}
		}
		{DefenseLevel
			{level_1
				{DefenseBudgetPlayer	114.00}	;// budget it multiplied by number of flags
				{DefenseBudgetAI		111.25}	;// places defender units with bot StartMP * this factor (StartMP without attackermultiplier) for player side
				{unlock games 0 progress 0.0}	;// number of games to unlock this level, or progress in percent (campaign progress bar)
			}
			{level_2							;// once level is reached previous level values are ignored only currently level is used
				{DefenseBudgetPlayer	1200.0}
				{DefenseBudgetAI		1200.0}
				{unlock games 5 progress 0.4}
			}
			{level_3
				{DefenseBudgetPlayer	404.5}
				{DefenseBudgetAI		444.5}
				{unlock games 14 progress 0.75}
			}
		}
	}
	{PaybackFactor 0.4}		;// MP paid back when loosing solider, squad or vehicle
	{SellFactor 0.7}
	{ScavengedVehicleSellFactor 0.5}		;// captured enemy vehicle 
	{RiskFactor
		{Low
			{BotResources 7.0}
			{BotVeterancy 2}
			{Rewards 1.0}
		}
		{Standard
			{BotResources 7.0}
			{BotVeterancy 5}
			{Rewards 1.25}
		}
		{High
			{BotResources 7.0}
			{BotVeterancy 7}
			{Rewards 1.50}
		}
	}
	{Resources
		{Standard
			{MP ;// Manpower (generic money)
				{StartVal 4000}
				{WinGain "1:200 4:300 6:700 8:900 10:1000 12:1400 14:1700"} ;// games played : MP gain 
				{LoseGain "1:100 4:150 6:30 8:400 10:500 12:700 14:900"}
				{MapRewards	;//Bonus resources on various game types (a game can only be one randomly chosen type). Types: Airfield, Ammodepot, Bonus, Factory, Research.
					{Airfield	1400}
					{Ammodepot	300}
					{Bonus		1100}
					{Factory	600}
					{Research	300}
				}
			}
			{SP ;// Special Points (airstrikes)
				{StartVal 0}
				{WinGain "1:2 4:3 6:5 8:6 10:7 12:8 14:10"}
				{LoseGain "1:1 4:2 6:3 8:4 10:5 12:6 14:7" }
				{MapRewards
					{Airfield	20}
				}
			}
			{AP ;// Ammo points
				{StartVal 2000}
				{WinGain "5:300 10:500 15:800"}
				{LoseGain "5:150 10:250 15:40"}
				{MapRewards
					{Ammodepot	2800}
					{Factory	1200}
				}
			}
			{RP ;// Research points
				{StartVal 10}
				{WinGain "1:1 3:2 4:2 6:6 7:3 10:4 15:6"}
				{LoseGain "1:1 3:1 4:1 6:3 7:2 10:3 15:4"}
				{MapRewards
					{Bonus		1.5}
					{Research	3.5}
					{Factory	1.5}
				}
			}
			{Budget
				{Start "0:501"}
				{PointsPerSecond 0} ;// CP income
				{Limit 5001} ;// Max CP 
			}
		}
	}
	{Duration
		{Short
			{FlagCount "1:5 1:5 2:5 1:5 2:5 1:5 3:5 2:5 3:5 2:5 3:5 2:5 3:5 2:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5"}
			{Bots
				{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"} ;// number of games played : research tree level bots can have
			}
			{MapSelection "0:3-4 1:2-3 2:1 3:2-3 4:1 5:2-3 6:3-4 7:2-3 8:3-4 9:2-3 10:3-4 11:2-3 12:3-4 13:2-3 14:3-4 15:2-3 16:3-4 17:2-3 18:3-4 19:2-3 20:3-4 21:2-3 22:3-4 23:2-3 24:3-4 25:2-3 26:3-4 27:2-3 28:3-4 29:2-3 30:3-4 31:2-3 32:3"}	;// number of games played : map selection value from map .info file
			{MapBorder "0:1"}
		}
		{Normal
			{FlagCount "1:5 1:5 2:5 1:5 2:5 1:5 3:5 2:5 3:5 2:5 3:5 2:5 3:5 2:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5"}
			{Bots
				{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"} 
			}
			{MapSelection "0:3-4 1:2-3 2:1 3:2-3 4:1 5:2-3 6:3-4 7:2-3 8:3-4 9:2-3 10:3-4 11:2-3 12:3-4 13:2-3 14:3-4 15:2-3 16:3-4 17:2-3 18:3-4 19:2-3 20:3-4 21:2-3 22:3-4 23:2-3 24:3-4 25:2-3 26:3-4 27:2-3 28:3-4 29:2-3 30:3-4 31:2-3 32:3"}
			{MapBorder "0:1"}
		}
		{Long
			{FlagCount "1:5 1:5 2:5 1:5 2:5 1:5 3:5 2:5 3:5 2:5 3:5 2:5 3:5 2:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5"}
			{Bots
				{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"} 
			}
			{MapSelection "0:3-4 1:2-3 2:1 3:2-3 4:1 5:2-3 6:3-4 7:2-3 8:3-4 9:2-3 10:3-4 11:2-3 12:3-4 13:2-3 14:3-4 15:2-3 16:3-4 17:2-3 18:3-4 19:2-3 20:3-4 21:2-3 22:3-4 23:2-3 24:3-4 25:2-3 26:3-4 27:2-3 28:3-4 29:2-3 30:3-4 31:2-3 32:3"}
			{MapBorder "0:1"}
		}
		{VeryLong
			{FlagCount "1:5 1:5 2:5 1:5 2:5 1:5 3:5 2:5 3:5 2:5 3:5 2:5 3:5 2:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5"}
			{Bots
				{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"}  
			}
			{MapSelection "0:3-4 1:2-3 2:1 3:2-3 4:1 5:2-3 6:3-4 7:2-3 8:3-4 9:2-3 10:3-4 11:2-3 12:3-4 13:2-3 14:3-4 15:2-3 16:3-4 17:2-3 18:3-4 19:2-3 20:3-4 21:2-3 22:3-4 23:2-3 24:3-4 25:2-3 26:3-4 27:2-3 28:3-4 29:2-3 30:3-4 31:2-3 32:3"}
			{MapBorder "0:1"}
		}
		{Unlimited
			{FlagCount "1:5 1:5 2:5 1:5 2:5 1:5 3:5 2:5 3:5 2:5 3:5 2:5 3:5 2:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5 4:5 5:5"}
			{Bots
				{ResearchStages "0:1 1:2 2:3 3:4 4:5 5:6 6:7 7:8 8:9 9:10 10:11 11:12 12:13 13:14 14:15 15:16 16:17 17:18 18:19 19:20"} 
			}
			{MapSelection "0:3-4 1:2-3 2:1 3:2-3 4:1 5:2-3 6:3-4 7:2-3 8:3-4 9:2-3 10:3-4 11:2-3 12:3-4 13:2-3 14:3-4 15:2-3 16:3-4 17:2-3 18:3-4 19:2-3 20:3-4 21:2-3 22:3-4 23:2-3 24:3-4 25:2-3 26:3-4 27:2-3 28:3-4 29:2-3 30:3-4 31:2-3 32:3"}
			{MapBorder "0:1"}
		}
	}
}