/****************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for the abstract Animal class.
****************************************************************/
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <ctime>
#include <cstdlib>
#include <string>

class Animal
{
protected:
	int animalSize;
	std::string animalName;
public:
	Animal(std::string, int);
	std::string getName();
	void printAnimal();
	int defense();
};

#endif
