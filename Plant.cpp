/************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implementatial file for the abstract class Plant
************************************************************/
#include "Plant.hpp"
#include <string>
#include <iostream>
using std::cout;

Plant::Plant(std::string name)
{
	plantName = name;
}

void Plant::printPlant()
{
	cout << "Around you, you see "
	     << plantName << " for you to forage.\n";
}

std::string Plant::getName()
{
	return plantName;
}
