/********************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for Forest, a subclass of 
the Space class.
*******************************************************/
#ifndef FOREST_HPP
#define FOREST_HPP
#include "Space.hpp"

class Forest : public Space
{
public:
	Forest();
	virtual void lookAround();
	virtual int nightEncounters();
};

#endif
