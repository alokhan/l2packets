#include "stdafx.h"
#include "L2Data.h"

// Lineage II  races
char *L2Race[L2MaxRaces];
// Lineage II classes
char *L2Class[L2MaxClasses];
// Sex :)
char *L2Sex[L2MaxSexes];
// Races pictures depending on sex
// L2MaxRacePics = L2MaxRaces * L2MaxSexes;
char *L2RacePic[L2MaxRacePics];
// NPC races/classes
// index is level of skill id = 4416
char *L2NPCRace[L2MaxNPCRaces];

void L2Data_init()
{
L2Race[0] = "Human";
L2Race[1] = "Elf";
L2Race[2] = "Dark Elf";
L2Race[3] = "Orc";
L2Race[4] = "Dwarf";
L2Race[5] = "Kamael";

memset( L2Class, 0, sizeof(L2Class) );
L2Class[0] = "Human Fighter";
L2Class[1] = "Warrior";
L2Class[2] = "Gladiator";
L2Class[3] = "Warlord";
L2Class[4] = "Knight";
L2Class[5] = "Paladin";
L2Class[6] = "Dark Avenger";
L2Class[7] = "Rogue";
L2Class[8] = "Treasure Hunter";
L2Class[9] = "Hawkeye";
L2Class[10] = "Human Mystic";
L2Class[11] = "Human Wizard";
L2Class[12] = "Sorceror";
L2Class[13] = "Necromancer";
L2Class[14] = "Warlock";
L2Class[15] = "Cleric";
L2Class[16] = "Bishop";
L2Class[17] = "Prophet";
L2Class[18] = "Elven Fighter";
L2Class[19] = "Elven Knight";
L2Class[20] = "Temple Knight";
L2Class[21] = "Sword Singer";
L2Class[22] = "Elven Scout";
L2Class[23] = "Plains Walker";
L2Class[24] = "Silver Ranger";
L2Class[25] = "Elven Mystic";
L2Class[26] = "Elven Wizard";
L2Class[27] = "SpellSinger";
L2Class[28] = "Elemental Summoner";
L2Class[29] = "Elven Oracle";
L2Class[30] = "Elven Elder";
L2Class[31] = "Dark Fighter";
L2Class[32] = "Paulus Knight";
L2Class[33] = "Shillien Knight";
L2Class[34] = "BladeDancer";
L2Class[35] = "Assassin";
L2Class[36] = "Abyss Walker";
L2Class[37] = "Phantom Ranger";
L2Class[38] = "Dark Mystic";
L2Class[39] = "Dark Wizard";
L2Class[40] = "Spellhowler";
L2Class[41] = "Phantom Summoner";
L2Class[42] = "Shillien Oracle";
L2Class[43] = "Shillien Elder";
L2Class[44] = "Orc Fighter";
L2Class[45] = "Orc Raider";
L2Class[46] = "Destroyer";
L2Class[47] = "Orc Monk";
L2Class[48] = "Tyrant";
L2Class[49] = "Orc Mystic";
L2Class[50] = "Orc Shaman";
L2Class[51] = "Overlord";
L2Class[52] = "Warcryer";
L2Class[53] = "Dwarven Fighter";
L2Class[54] = "Scavenger";
L2Class[55] = "Bounty Hunter";
L2Class[56] = "Artisan";
L2Class[57] = "Warsmith";
L2Class[88] = "Duelist";
L2Class[89] = "Dreadnought";
L2Class[90] = "Phoenix Knight";
L2Class[91] = "HellKnight";
L2Class[92] = "Sagittarius";
L2Class[93] = "Adventurer";
L2Class[94] = "Archmage";
L2Class[95] = "Soultaker";
L2Class[96] = "Arcana Lord";
L2Class[97] = "Cardinal";
L2Class[98] = "Hierophant";
L2Class[99] = "Eva's Templar";
L2Class[100] = "Sword Muse";
L2Class[101] = "Wind Rider";
L2Class[102] = "Moonlight Sentinel";
L2Class[103] = "Mystic Muse";
L2Class[104] = "Elemental Master";
L2Class[105] = "Eva's Saint";
L2Class[106] = "Shillien Templar";
L2Class[107] = "Spectral Dancer";
L2Class[108] = "Ghost Hunter";
L2Class[109] = "Ghost Sentinel";
L2Class[110] = "Storm Screamer";
L2Class[111] = "Spectral Master";
L2Class[112] = "Shillien Saint";
L2Class[113] = "Titan";
L2Class[114] = "Grand Khauatari";
L2Class[115] = "Dominator";
L2Class[116] = "Doomcryer";
L2Class[117] = "Fortune Seeker";
L2Class[118] = "Maestro";
L2Class[123] = "Kamael Male Soldier";
L2Class[124] = "Kamael Female Soldier";
L2Class[125] = "Trooper";
L2Class[126] = "Warder";
L2Class[127] = "Berserker";
L2Class[128] = "Soulbreaker (Male)"; //"Male Soulbreaker";
L2Class[129] = "Soulbreaker (Female)"; //"Female Soulbreaker";
L2Class[130] = "Arbalester";
L2Class[131] = "Doombringer";
L2Class[132] = "Soulhound (Male)"; // male
L2Class[133] = "Soulhound (Female)"; // female
L2Class[134] = "Trickster"; // female
L2Class[135] = "Inspector";
L2Class[136] = "Judicator";

L2Sex[0] = "Male";
L2Sex[1] = "Female";

L2RacePic[0]  = "human_male";
L2RacePic[1]  = "human_female";
L2RacePic[2]  = "elf_male";
L2RacePic[3]  = "elf_female";
L2RacePic[4]  = "darkelf_male";
L2RacePic[5]  = "darkelf_female";
L2RacePic[6]  = "orc_male";
L2RacePic[7]  = "orc_female";
L2RacePic[8]  = "dwarf_male";
L2RacePic[9]  = "dwarf_female";
L2RacePic[10] = "kamael_male";
L2RacePic[11] = "kamael_female";

L2NPCRace[0] = "NPC race index 0 not used";
L2NPCRace[1] = "Undead";
L2NPCRace[2] = "Magic Creatures";
L2NPCRace[3] = "Beasts";
L2NPCRace[4] = "Animals";
L2NPCRace[5] = "Plants";
L2NPCRace[6] = "Humanoids";
L2NPCRace[7] = "Spirits";
L2NPCRace[8] = "Angels";
L2NPCRace[9] = "Demons";
L2NPCRace[10] = "Dragons";
L2NPCRace[11] = "Giants";
L2NPCRace[12] = "Bugs";
L2NPCRace[13] = "Fairies";
L2NPCRace[14] = "Humans";
L2NPCRace[15] = "Elves";
L2NPCRace[16] = "Dark Elves";
L2NPCRace[17] = "Orcs";
L2NPCRace[18] = "Dwarves";
L2NPCRace[19] = "Others";
L2NPCRace[20] = "Non-living Beings";
L2NPCRace[21] = "Siege Weapons";
L2NPCRace[22] = "Defending Army";
L2NPCRace[23] = "Mercenaries";
L2NPCRace[24] = "Unknown Creature";
}

const char *L2Data_getRace( int raceID )
{
	if( (raceID<0) || (raceID>=L2MaxRaces) ) return NULL;
	return L2Race[raceID];
}
const char *L2Data_getClass( int classID )
{
	if( (classID<0) || (classID>=L2MaxClasses) ) return NULL;
	return L2Class[classID];
}
const char *L2Data_getSex( int sexID )
{
	if( (sexID<0) || (sexID>=L2MaxSexes) ) return NULL;
	return L2Sex[sexID];
}
const char *L2Data_getRacePic( int raceID, int sexID )
{
	int picID = raceID*2 + sexID;
	if( (picID<0) || (picID>=L2MaxRacePics) ) return NULL;
	return L2RacePic[picID];
}
const char *L2Data_getNPCRace( int npcRaceID )
{
	if( (npcRaceID<0) || (npcRaceID>=L2MaxNPCRaces) ) return NULL;
	return L2NPCRace[npcRaceID];
}
