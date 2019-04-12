/************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implements certain functions which are unique
to a forest climate zone.
************************************************************/
#include "Forest.hpp"
#include <iostream>
using std::cout;

Forest::Forest() : Space::Space()
{
	
} 

void Forest::lookAround()
{
	cout << "The creaks of the tall trees"
	     << " around you, the soft hushing"
	     << " sound of the leaves, the"
	     << " percussive tapping of the"
	     << " birds and rodents, the forest"
	     << " is an orchestra.\n";
	prey->printAnimal();
	plant->printPlant();
	material->printMaterial();
}

int Forest::nightEncounters()
{
	int result;
	int encounter = randomGen();
	switch(encounter)
	{
		case 1: cout << "A pack of dire wolves "
			     << "has attacked your camp!\n";
			result = 1
			break;
		case 2: cout << "Another tribe has ambushed "
			     << "your camp!\n";
			result = 1;
			break;
		case 3: cout << "Your tribe sleeps soundly, "
			     << "in the cover of the forest.\n";
			result = 2;
			break;
		case 4: cout << "Your tribe sleeps soundly, "
			     << "in the cover of the forest.\n";
			result = 2;
			break;
		case 5: cout << "Your tribe sleeps soundly, "
			     << "in the cover of the forest.\n";
			result = 2;
 			break;
		case 6: cout << "Your tribe sleeps soundly, "
			     << "in the cover of the forest.\n";
			result = 2;
			break;
	}
}
