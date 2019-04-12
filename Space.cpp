/**********************************************************
Author: Kris Hill
Date: 8/14/18
Description: Controls the movement of the player on the 
board; creates and destroys tile spaces as the player moves.
Each new tile generates elements of the environment for
the player to interact with. Using linked list structure.
***********************************************************/
#include "Space.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
using std::cout;

Space::Space()
{
	prey = new Mammoth;
	plant = new Berries;
	found = new Obsidian;
	unsigned seed = time(0);
	srand(seed);
}

Space::~Space()
{
	delete prey;
	prey = nullptr;
	delete plant;
	plant = nullptr;
	delete found;
	found = nullptr;
}

void Space::setPointer(Space* northPtr, Space* eastPtr, Space* southPtr, Space* westPtr)
{
	north = northPtr;
	east = eastPtr;
	south = southPtr;
	west = westPtr;
}
/*
Animal* Space::pickAnimal()
{
	Animal* randAnimal;
	int animalChoice = randomGen();
	switch(animalChoice)
	{
		case 1: randAnimal = new Mammoth;
			break;
		case 2: randAnimal = new Mammoth;
			break;
		case 3: randAnimal = new GiantDeer;
			break;
		case 4: randAnimal = new GiantDeer;
			break;
		case 5: randAnimal = new Mammoth;
			break;
		case 6: randAnimal = new GiantDeer;
			break;
	}
	return randAnimal;
}

Plant* Space::pickPlant()
{
	Plant* randPlant;
	int plantChoice = randomGen();
	switch(plantChoice)
	{
		case 1: randPlant = new Berries;
			break;
		case 2: randPlant = new Grass;
			break;
		case 3: randPlant = new Nuts;
			break;
		case 4: randPlant = new Berries;
			break;
		case 5: randPlant = new Grass;
			break;
		case 6: randPlant = new Nuts;
			break;
	}
	return randPlant;

}

Material* Space::pickMaterial()
{
	Material* randMaterial;
	int materialChoice = randomGen();
	switch(materialChoice)
	{
		case 1: randMaterial = new Wood;
			break;
		case 2: randMaterial = new Flint;
			break;
		case 3: randMaterial = new Obsidian;
			break;
		case 4: randMaterial = new Wood;
			break;
		case 5: randMaterial = new Obsidian;
			break;
		case 6: randMaterial = new Flint;
			break;
	}
	return randMaterial;

}
*/
std::string Space::getName()
{
	return spaceName;
}

bool Space::hunt(int huntAttack)
{
	bool result;
	int animalEvade = prey->defense();
	if(huntAttack <= animalEvade)
	{
		cout << "Despite your clan's hunting prowess,"
		     << " the " << prey->getName() << " got away!\n";
		result = false;
	}
	else if(huntAttack > animalEvade)
	{
		cout << "Your clan was able to track down"
		     << " and kill the " << prey->getName() << "!\n";
		result = true;
	}
	return result;
}	

int randomGen()
{
	return rand()%6 + 1;
}
