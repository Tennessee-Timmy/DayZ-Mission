void main()
{
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
	int reset_month = 9, reset_day = 20;
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

	GetGame().GetCallQueue( CALL_CATEGORY_GAMEPLAY ).CallLater( dayx_airDropCreate, 10000, false );
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