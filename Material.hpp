/***********************************************************
Author: Kris Hill
Date: 8/14/18
Description: Header file for the abstract class Material.
**********************************************************/
#ifndef MATERIAL_HPP
#define MATERIAL_HPP
#include <string>

class Material
{
protected:
	std::string materialName;
public:
	Material(std:string);
	void printMaterial();
	std::string getName();
};

#endif
