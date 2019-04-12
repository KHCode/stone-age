/********************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for Lake, a subclass of 
the Space class.
*******************************************************/
#ifndef LAKE_HPP
#define LAKE_HPP
#include "Space.hpp"

class Lake : public Space
{
public:
	Lake();
	virtual void lookAround();
	virtual void nightEncounters() = 0;
};

#endif
