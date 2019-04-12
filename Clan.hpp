/*************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for the Clan class; functions as the
player in the game.
*************************************************************/
#ifndef CLAN_HPP
#define CLAN_HPP
#include <list>
#include <ctime>
#include <cstdlib>
#include <string>
using std::list;
class Clan
{
protected:
	int clanSize;
	int health;
	list<std::string> meatStores;
	list<std::string> veggieStores;
	list<std::string> weaponStores;
//	enum ResourceType {MEAT, PLANT, MATERIAL};
	unsigned seed = time(0);
	srand(seed);
public:
	Clan();
	int hunter();
	void addResource(int);
	void useResource(int);
	void changeHealth(int);
	int getHealth();
	int getSize();
	void loseMembers();
	void plusHealth(int);
	int showMeatStores();
	int showVeggieStores();
	int randomGen(int);
}

#endif
