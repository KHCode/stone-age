/*************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implementation file for the abstract Animal class.
***************************************************************/
#include "Animal.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using std::cout;

Animal::Animal(std::string name, int size)
{
	animalName = name;
	animalSize = size;
	unsigned seed = time(0);
	srand(seed);
}

std::string Animal::getName()
{
	return animalName;
}

void Animal::printAnimal();
{
	cout << "In the distance you can see a"
	     << animalName << ".\n";
}

int Animal::defense()
{
	return rand()%animalSize + 1;
}
