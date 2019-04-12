/************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implements certain functions which are unique
to a tundra climate zone.
************************************************************/
#include "Tundra.hpp"
#include <iostream>
using std::cout;

Tundra::Tundra() : Space::Space()
{
	
} 

void Tundra::lookAround()
{
	std::cout << "The sun rises low in the southern"
		  << " sky and frost nips at your"
		  << " fingertips. The cold, hard"
		  << " ground crunches under your"
		  << " feet.\n";
	prey->printAnimal();
	plant->printPlant();
	found->printMaterial();
}

void Tundra::nightEncounters()
{
	int result
	int encounter = randomGen();
	switch(encounter)
	{
		case 1: cout << "In the night, a blizzard blows "
			     << "through your camp!\n"
			result = 1;
			break;
		case 2: cout << "In the night, a blizzard blows "
			     << "through your camp!\n"
			result = 1;
			break;
		case 3: cout << "In the night, a blizzard blows "
			     << "through your camp!\n"
			result = 1;
			break;
		case 4: cout << "Despite the blistering cold, your "
			     << "clan stays huddled together enough "
			     << "that you all make it through the night."
			result = 2;
			break;
		case 5: cout << "Despite the blistering cold, your "
			     << "clan stays huddled together enough "
			     << "that you all make it through the night."
			result = 2;
			break;
		case 6: cout << "Despite the blistering cold, your "
			     << "clan stays huddled together enough "
			     << "that you all make it through the night."
			result = 2;
			break;
	}
}
