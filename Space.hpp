/*************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for the class that holds the Space 
structures and their pointers.
************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include <cstdlib>
#include <ctime>
#include <string>
#include "Animal.hpp"
#include "Plant.hpp"
#include "Material.hpp"

class Space
{
protected:
	Animal* prey;
	Plant* plant;
	Material* found;
	std::string spaceName;
public:
	Space* north;
	Space* east;
	Space* south;
	Space* west;
	Space();
	~Space();
	void setPointer(Space*, Space*, Space*, Space*);
//	Animal* pickAnimal();
//	Plant* pickPlant();
//	Material* pickMaterial();
	std::string getName();
	bool hunt(int);
	virtual void lookAround() = 0;
	virtual int nightEncounter() = 0;
	int randomGen();
};

#endif
