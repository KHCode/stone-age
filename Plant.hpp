/***********************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for the abstract class Plant.
***********************************************************/
#ifndef PLANT_HPP
#define PLANT_HPP
#include <string>

class Plant
{
protected:
	std::string plantName;
public:
	Plant(std::string);
	void printPlant();
	std::string getName();
};

#endif
