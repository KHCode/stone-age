/********************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for Tundra, a subclass of 
the Space class.
*******************************************************/
#ifndef TUNDRA_HPP
#define TUNDRA_HPP
#include "Space.hpp"

class Tundra : public Space
{
public:
	Tundra();
	virtual void lookAround();
	virtual int nightEncounters();
};

#endif
