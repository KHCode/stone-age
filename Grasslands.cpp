/************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implements certain functions which are unique
to a grasslands climate zone.
************************************************************/
#include "Grasslands.hpp"
#include <iostream>
using std::cout;

Grasslands::Grasslands() : Space::Space()
{
	
} 

void Grasslands::lookAround()
{
	cout << "The winds send ripples through"
	     << " the yellow stalks of grass in"
	     << " front of you.\n";
	prey->printAnimal();
	plant->printPlant();
	found->printMaterial();
}

int Grasslands::nightEncounters()
{
	int result;
	int encounter = randomGen();
	switch(encounter)
	{
		case 1: cout << "A sabretooth tiger attacks in the middle "
			     << "of the night!\n";
			result = 1;
			break;
		case 2: cout << "Another clan found your camp and attacked "
			     << "in the middle of the night!\n";
			result = 1;
			break;
		case 3: cout << "Your shaman uses the open sky of the "
			     << "grasslands to spin a tale of your "
			     << "ancestors and the heroes of legend.\n";
			result = 2;
			break;
		case 4: cout << "You fall asleep looking up at all of "
			     << "the stars in the sky.\n";
			result = 2;
			break;
		case 5: cout << "Your shaman uses the open sky of the "
			     << "grasslands to spin a tale of your "
			     << "ancestors and the heroes of legend.\n";
			result = 2;
			break;
		case 6: cout << "You fall asleep looking up at all of "
			     << "the stars in the sky.\n";
			result = 2;
			break;
	}
	return result;
}
