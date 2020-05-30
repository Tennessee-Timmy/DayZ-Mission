I've had a couple of issues with the types file.
Loot sometimes stopped respawning, I didn't know why. 
Turns out it's because of lootrespawner errors.
	- When an item reaches it's min value, it will try to spawn another item, to reach the nominal value
	- If there are not enough loot spots on the map, the lootspawner will error
	- When more than 19 errors are reached, the lootspawner will stop functioning
	
	+ After vigerous testing, I found that the following was causing the issue:
		//--- Add custom objects to the CE hive
		//GetCEApi().ExportProxyData( "7500 0 7500", 10000 );  //Center of map, radius of how far to go out and find buildings.
	
	
	
	
Nominal - Total amount of this item
Restock - Seconds until spawning another item of this type
Min - when reached, spawn until nominal value
