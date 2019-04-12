/************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implements certain functions which are unique
to a lake-type region.
************************************************************/
#include "Lake.hpp"
#include <iostream>
using std::cout;

Lake::Lake() : Space::Space()
{
	
} 

void Lake::lookAround()
{
	cout << "As you look out in front of "
	     << "you, you see a clear blue lake.\n"
	     << "You know immediately that this "
	     << "is the place you've been searching for.\n"
	     << "A place to call home.\n";
}

