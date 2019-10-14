//Spawn helper function
void SpawnObject( string type, vector position, vector orientation )
{
    auto obj = GetGame().CreateObject( type, position );
    obj.SetPosition( position );
    obj.SetOrientation( orientation ); //Collision fix
    //obj.SetOrientation( obj.GetOrientation() ); //Collision fix
}


void main()
{
	//--- Trader safe zones NEAF and Devils Castle
	//Your custom spawned objects
	// NEAF
	SpawnObject( "Land_Construction_House1", "11900.599609 144.044006 12451.799805", "9.000000 0.000000 0.000000" );
	SpawnObject( "Land_Garage_Office", "11903.099609 143.509995 12483.900391", "-68.000000 0.000000 0.000000" );
	SpawnObject( "Land_Factory_Small", "11883.299805 146.264008 12476.599609", "26.000000 0.000000 0.000000" );
	SpawnObject( "Land_Pipe_Big_BuildL", "11895.500000 143.832993 12463.000000", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Smokestack_Big", "11866.299805 169.334000 12503.099609", "132.000000 0.000000 0.000000" );
	SpawnObject( "Land_Smokestack_Big", "11890.299805 169.334000 12520.799805", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Tank_Big", "11882.500000 144.841995 12504.599609", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Tank_Big", "11874.200195 144.841995 12518.000000", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Tank_Medium_Stairs", "11902.099609 141.360001 12465.900391", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Airfield_Radar_Tall", "11952.599609 162.895996 12531.599609", "25.000002 0.000000 0.000000" );
	SpawnObject( "Land_Wreck_S1023_Blue", "11904.599609 140.998993 12469.400391", "-67.000000 0.000000 0.000000" );
	SpawnObject( "Land_Wreck_Volha_Grey", "11899.299805 140.737000 12475.599609", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Wreck_Uaz", "11903.200195 140.843002 12460.700195", "-33.000000 0.000000 0.000000" );
	SpawnObject( "Land_Workshop2", "11895.700195 141.223007 12495.799805", "22.999998 0.000000 0.000000" );
	SpawnObject( "Land_Power_Pole_Conc1_Amp", "11898.500000 143.514999 12491.900391", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Smokestack_Metal", "11885.500000 157.231003 12428.099609", "3.000000 0.000000 0.000000" );
	SpawnObject( "Land_Tank_Medium_Stairs", "11894.700195 141.360001 12527.299805", "-119.000000 0.000000 0.000000" );
	SpawnObject( "Land_Guardhouse", "11898.099609 141.070007 12503.599609", "112.999992 0.000000 0.000000" );
	SpawnObject( "Land_Garage_Row_Big", "11909.400391 143.535004 12499.400391", "-67.000000 0.000000 0.000000" );
	SpawnObject( "Land_Power_Pole_Conc1_Amp", "11892.700195 143.514999 12479.700195", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Container_1Aoh", "11919.700195 141.209000 12515.200195", "-20.000000 0.000000 0.000000" );
	SpawnObject( "Land_Container_1Bo", "11913.500000 141.209000 12517.000000", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Container_1Mo", "11917.700195 141.209000 12521.500000", "98.000000 0.000000 0.000000" );
	SpawnObject( "Land_Container_1Aoh", "11915.599609 143.709000 12520.200195", "44.000000 0.000000 0.000000" );
	SpawnObject( "Land_Cementworks_Conveyorhall", "11926.700195 145.632996 12467.500000", "-157.000000 0.000000 0.000000" );

	// Devils Castle
	SpawnObject( "Land_Mil_Guardhouse2", "6989.180176 387.681000 11374.099609", "19.000000 -6.000000 2.000000" );
	SpawnObject( "Land_FuelStation_Feed", "6989.500000 386.265015 11378.599609", "-71.000000 0.000000 8.000002" );
	SpawnObject( "Land_Lunapark_Shooting_Gallery", "6931.118652 403.930328 11397.456055", "-28.999998 6.000001 0.000000" );
	SpawnObject( "Land_Lunapark_Shooting_Gallery", "6919.138672 406.256378 11400.024414", "-97.999954 8.000001 -3.999998" );
	SpawnObject( "Land_Misc_Well_Pump_Blue", "6925.885742 403.236969 11392.509766", "-2.000013 6.000001 5.000011" );
	SpawnObject( "Land_Lamp_City1_amp", "6924.587402 408.041931 11402.326172", "-52.999996 0.000000 0.000000" );
	SpawnObject( "Land_Wreck_V3S", "6910.765137 407.360413 11400.215820", "97.000038 -11.000000 14.000000" );
	SpawnObject( "Land_Construction_House1", "6901.229980 404.777008 11364.500000", "57.999996 2.000000 6.000000" );
	SpawnObject( "Land_Water_Station", "6979.189941 388.398010 11377.099609", "141.000000 0.000000 -2.000000" );


	// SEVEROGRAD
	SpawnObject( "Land_Mil_Tower_Small", "7854.493652 121.840355 12643.764648", "-10.000008 0.000000 0.000000" );
	SpawnObject( "Land_Mil_Tower_Small", "7848.746582 121.800949 12670.065430", "170.000015 0.000000 0.000000" );
	SpawnObject( "Land_Mil_Tent_Big1_1", "7857.791016 117.750420 12636.135742", "-179.000061 0.000000 0.000000" );
	SpawnObject( "Land_Container_1Mo", "7869.153320 118.745995 12642.345703", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Wreck_Uaz", "7867.654785 118.363182 12654.776367", "95.000031 0.000000 0.000000" );
	SpawnObject( "Land_Mil_CamoNet_Roof_east", "7862.985352 119.362091 12647.788086", "0.000000 0.000000 0.000000" );
	SpawnObject( "Land_Container_1Moh", "7858.386230 118.759247 12649.885742", "-77.000000 0.000000 0.000000" );
	SpawnObject( "Land_Container_1Moh", "7673.842773 120.372780 12651.748047", "1.000000 -2.000000 0.000000" );
	SpawnObject( "Land_Container_1Moh", "7679.859375 120.277405 12651.041992", "61.999992 -2.000000 0.000000" );
	SpawnObject( "Land_Mil_Tent_Big1_1", "7687.508789 118.973915 12650.398438", "50.000004 -1.000000 1.000000" );
	SpawnObject( "Land_Mil_Tower_Small", "7671.294922 123.722778 12642.871094", "67.000328 0.000000 0.000000" );
	SpawnObject( "Land_Wreck_Uaz", "7670.504883 120.149452 12649.781250", "2.000000 -2.000000 3.999999" );
	SpawnObject( "Land_Wreck_Uaz", "7682.254395 120.104881 12640.615234", "-45.999996 0.000000 0.000000" );
	SpawnObject( "Land_Mil_CamoNet_Roof_east", "7680.793457 121.099968 12646.503906", "0.000000 0.000000 0.000000" );


	// KRONA
	SpawnObject( "Land_Mil_Tent_Big4", "1375.809082 293.139435 9308.558594", "-1.000000 1.000000 0.000000" );
	SpawnObject( "Land_Mil_Tent_Big1_3", "1358.280273 291.600006 9314.229492", "-40.000004 0.000000 0.000000" );
	SpawnObject( "Land_Mil_Tent_Big2_4", "1354.716309 293.639923 9305.744141", "3.000007 -4.000000 -2.000002" );


	//--- end of custom objects



	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	weather.GetOvercast().Set( Math.RandomFloatInclusive(0.4, 0.6), 1, 0);
	weather.GetRain().Set( 0, 0, 1);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.1), 1, 0);

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 6, reset_day = 26;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}


	// quick airdrop 100 seconds in
	GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( dayx_airDropCreate, 10000, false );

	// first air drop at 30 minutes
	GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( dayx_airDropCreate, (100*60*30), false );

	// after this one the drop will come 90minutes after game start, meaning 60 after this one ^^^^


	//--- Add custom objects to the CE hive
	GetCEApi().ExportProxyData( "7500 0 7500", 10000 );  //Center of map, radius of how far to go out and find buildings.
}
void dayx_airDropCreate () {
	Print("dayx - Mission.airDropCreate");
	//GetAirdropBase().EOnPlayerDrop("-100 0 -100");
	GetAirdropBase().EOnRandomDrop();
};

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			int rndHlt = Math.RandomInt(55,100);
			itemEnt.SetHealth("","",rndHlt);
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");//Creates random player
		Class.CastTo(m_player, playerEnt);

		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemTop;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemTop = player.FindAttachmentBySlotName("Body");

		if ( itemTop )
		{
			itemEnt = itemTop.GetInventory().CreateInInventory("Rag");
			if ( Class.CastTo(itemBs, itemEnt ) )
				itemBs.SetQuantity(4);

			SetRandomHealth(itemEnt);

			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
			int rndIndex = Math.RandomInt(0, 4);
			itemEnt = itemTop.GetInventory().CreateInInventory(chemlightArray[rndIndex]);
			SetRandomHealth(itemEnt);

			rand = Math.RandomFloatInclusive(0.0, 1.0);
			if ( rand < 0.35 )
				itemEnt = player.GetInventory().CreateInInventory("Apple");
			else if ( rand > 0.65 )
				itemEnt = player.GetInventory().CreateInInventory("Pear");
			else
				itemEnt = player.GetInventory().CreateInInventory("Plum");

			SetRandomHealth(itemEnt);
		}
		//Weapon_Base oWpn = player.GetHumanInventory().CreateInHands( "Glock19" );
		//Magazine oMag = Magazine.Cast( player.GetInventory().CreateInInventory( "Mag_Glock_15Rnd" ) );
		//player.GetDayZPlayerInventory().PostWeaponEvent( new WeaponEventAttachMagazine( player, oMag ) );
		//bool isMagAttached = oWpn.AttachMagazine(oWpn.GetCurrentMuzzle(), oMag);
		itemEnt = player.GetInventory().CreateInInventory( "MakarovIJ70" );
		player.SetQuickBarEntityShortcut( itemEnt, 0, true );
		itemEnt = player.GetInventory().CreateInInventory( "Mag_IJ70_8Rnd" );
		player.SetQuickBarEntityShortcut( itemEnt, 1, true );
		itemEnt = player.GetInventory().CreateInInventory( "Ammo_380" );
		if ( Class.CastTo(itemBs, itemEnt ) ) {
			itemBs.SetQuantity(20);
		};
		player.SetQuickBarEntityShortcut( itemEnt, 2, true );

		// add flare
		itemEnt = player.GetInventory().CreateInInventory("Roadflare");

		// add flashlight
		itemEnt = player.GetInventory().CreateInInventory("Flashlight");		
    	itemEnt.GetInventory().CreateAttachment("Battery9V");


		// after giving the player the starting equipment, run the death check in 100 seconds
		GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(dayx_DeleteOnInstaDeath, 100000, false, player);
	}

	// deletes the player if he dies instantly(suicide to respawn or similar)
	void dayx_DeleteOnInstaDeath (PlayerBase player) {
		//Print("dayx - mission - dayx_DeleteOnInstaDeath");
		
		// if no player, leave
		//Print("dayx - mission - dayx_DeleteOnInstaDeath.player:" + player);
		if (!player) {
			return;
		};

		// if player is still alive, leave (this means if player survived longer than 60 seconds, this script is bye bye)
		//Print("dayx - mission - dayx_DeleteOnInstaDeath.IsAlive:" + player.IsAlive());
		if (player.IsAlive()) {
			return;
		};

		// player dead, check for other players nearby
		
		bool t_IsAPlayerNear = false;
		PlayerBase i_Player;
		float i_Dist;
		vector t_PosPlayer = player.GetPosition();

		// get players in the area and check them
		ref array<Man> players = new array<Man>;
		GetGame().GetPlayers( players );
		
		for ( int i = 0; i < players.Count(); i++ )
		{
			Class.CastTo(i_Player, players.Get(i));
			if( i_Player && i_Player.IsAlive()) {
				
				// distance
				i_Dist = vector.Distance( t_PosPlayer, i_Player.GetPosition() );
				if (i_Dist < 30) {
					t_IsAPlayerNear = true;
					break;
				};
			};
		};
		delete players;
		
		// there is a player near the body, add the same function to run again in 30 seconds
		if (t_IsAPlayerNear) {
			GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(dayx_DeleteOnInstaDeath, 30000, false, player);
			//Print("dayx - mission - dayx_DeleteOnInstaDeath.Try again");
			return;
		};
		Print("dayx - mission - dayx_DeleteOnInstaDeath.delete!");

		// at this point there were no players around the body
		GetGame().ObjectDelete(player);
	};
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}

//