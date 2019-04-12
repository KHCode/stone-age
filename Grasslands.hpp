/********************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for Grasslands, a subclass of 
the Space class.
*******************************************************/
#ifndef GRASSLANDS_HPP
#define GRASSLANDS_HPP
#include "Space.hpp"

class Grasslands : public Space
{
public:
	Grasslands();
	virtual void lookAround();
	virtual int nightEncounters();
};

#endif
