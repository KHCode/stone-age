/****************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implementation file for clan class; keeps track of 
stats and actions a player needs to act as the clan in the game.
****************************************************************/
#include "Clan.hpp"
#include <list>
#include <iostream>
#include <ctime>
#include <cstdlib>
using std::cout;
using std::endl;

Clan::Clan()
{
	unsigned seed = time(0);
	srand(seed);
	health = 5;
	clanSize = 10;
}

int Clan::hunter()
{
	return randomGen(8);
}

void Clan::addResource(int input)
{
	switch(input)
	{
		case 1: if(meatStores.size() <= 5)
			   {
				cout << "You've added some more meat "
					"to your stores!\n";
				meatStores.push_front("carcasses");
			   }
			   else
			   {
				cout << "You have no more room to "
					"carry your meat, you must "
					"leave the meat.\n"
			   }
			break;
		case 2: if(plantStores.size() <= 5)
			   {
				cout << "You've added some more plant "
					"food to your stores!\n";
				plantStores.push_front("seeds and tubers");
			   }
			   else
			   {
				cout << "You have no more room for "
					"extra plant food, you must "
					"leave the rest behind.\n"
			   }
			break;
		case 3: if(weaponStores.size() <= 5)
			   {
				cout << "You've fashioned some more "
					"weapons from what you found!\n";
				weaponStores.push_front("seeds and tubers");
			   }
			   else
			   {
				cout << "You have no more room for "
					"extra weapons, you must "
					"leave what you found behind.\n"
			   }
			break;
	}
}

void Clan::useResource(int input)
{
	switch(input)
	{
		case 1: meatStores.pop_front();
			break;
		case 2: veggieStores.pop_front();
			break;
		case 3: weaponStores.pop_front();
			break;
	}
}

void Clan::changeHealth(int hurtOrHelp)
{
	int dead = randomGen(2);
	int recover = randomGen(4);
	switch(hurtOrHelp)
	{
		case 1: cout << "Oh no! You lost " << dead 
			     << " members of your clan!\n";
			clanSize -= dead;
		case 2: cout << "You make it through the night "
			     << "without incident.\n";
			health += recover;
	}
}

int Clan::getHealth()
{
	return health;
}

int Clan::getSize()
{
	return clanSize;
}
void Clan::loseMembers()
{
	if(health <= 0)
	{
		cout << "One of your clan members died from exhaustion!\n";
		clanSize--;
		health = 5;
	}
}

void plusHealth(int foodSource)
{
	switch(foodSource)
	{
		case 1: health += 4;
			break;
		case 2: health += 2;
			break;
	}
	if(health >= 10)
	{
		health = 10;
	}
	cout << "Your clan's health is now at " << health << "out of 10.\n";
}

int Clan::showMeatStores()
{
	return	meatStores.size();
}

int Clan::showVeggieStores()
{
	return veggieStores.size();
}

int Clan::randomGen(int amount)
{
	return rand()%amount + 1;
}
