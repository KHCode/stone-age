/****************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Implementation file for the abstract class Material.
*****************************************************************/
#include "Material.hpp"
#include <string>
#include <iostream>
using std::cout;

Material::Material(std::string name)
{
	materialName = name;
}

void Material::printMaterial()
{
	cout << "You look around and see "
	     << materialName
	     << " that you can use to make weapons.\n";
}

std::string Material::getName()
{
	return materialName;
}
