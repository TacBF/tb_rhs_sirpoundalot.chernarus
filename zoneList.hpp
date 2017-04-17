#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },
	
	{ 1, TEAM_BLUE, 		SPAWN_XRAY,     		{2}      				, {}    	, 1      , {}        			, 0    , "%X-Ray" },
	{ 2, TEAM_BLUE, 		SPAWN_NEVER,    		{1,3}					, {}    	, 1      , {}        			, 0    , "%Alpha" },
	{ 3, TEAM_BLUE, 		SPAWN_NEVER,    		{2,4}      				, {}   		, 1      , {}        			, 0    , "%Bravo" },
	{ 4, TEAM_BLUE, 		SPAWN_NEVER,    		{3,5,6}  				, {}    	, 1      , {}        			, 0    , "%Charli" },
	{ 5, TEAM_BLUE, 		SPAWN_NEVER,    		{4,7}      				, {6}  		, 1      , {}        			, 0    , "%Delta" },
	{ 6, TEAM_BLUE, 		SPAWN_NEVER,    		{4,7}      				, {5}   	, 1      , {}        			, 0    , "%Echo" },
	{ 7, TEAM_NEUTRAL, 		SPAWN_NEVER,    		{5,6,8,9,10}			, {}    	, 1      , {}        			, 0    , "%Foxtrot" },
	{ 8, TEAM_NEUTRAL, 		SPAWN_NEVER,    		{7,11}      			, {9,10}    , 1      , {}		 			, 0    , "%Golf" },
	{ 9, TEAM_NEUTRAL, 		SPAWN_NEVER,  			{7,11}					, {8,10}    , 1      , {}    	 			, 0    , "%Hotel" },
	{ 10, TEAM_NEUTRAL,   	SPAWN_NEVER,  			{7,11}					, {8,9}    	, 1	     , {}    				, 0    , "%India" },
	{ 11, TEAM_NEUTRAL,   	SPAWN_NEVER,  			{8,9,10,12,13}			, {}    	, 1      , {}   	 			, 0    , "%Juliet" },
	{ 12, TEAM_RED, 		SPAWN_NEVER,    		{14,11}      			, {13}    	, 1      , {}		 			, 0    , "%Kilo" },
	{ 13, TEAM_RED, 		SPAWN_NEVER,    		{14,11}      			, {12}    	, 1      , {}		 			, 0    , "%Lima" },	
	{ 14, TEAM_RED, 		SPAWN_NEVER,    		{12,13,15}      		, {}    	, 1      , {}		 			, 0    , "%Mike" },
	{ 15, TEAM_RED, 		SPAWN_NEVER,    		{14,16}      			, {}    	, 1      , {}		 			, 0    , "%November" },
	{ 16, TEAM_RED, 		SPAWN_NEVER,    		{15,17}      			, {}    	, 1      , {}		 			, 0    , "%Oscar" },
	{ 17, TEAM_RED, 		SPAWN_XRAY,    			{16}      				, {}    	, 1      , {}		 			, 0    , "%X-Ray" },
	{ 18, TEAM_BLUE, 		SPAWN_INSTANT,    		{}      				, {}    	, 1      , {3,2}		 		, 1    , "%Starting point" },
	{ 19, TEAM_RED, 		SPAWN_INSTANT,    		{}      				, {}    	, 1      , {15,16}		 		, 1    , "%Starting point" },

};



