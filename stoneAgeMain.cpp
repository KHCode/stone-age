/*************************************************************
Author: Kris Hill
Date: 8/14/18
Description: Main function for controlling general gameplay.
************************************************************/
#include "Clan.hpp"
#include "Tundra.hpp"
#include "Grasslands.hpp"
#include "Forest.hpp"
#include "Lake.hpp"
#include "Mammoth.hpp"
#include "GiantDeer.hpp"
#include "Berries.hpp"
#include "Grass.hpp"
#include "Nuts.hpp"
#include "Obsidian.hpp"
#include "Wood.hpp"
#include "Flint.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	Space* tile1 = new Tundra;
	Space* tile2 = new Tundra;
	Space* tile3 = new Forest;
	Space* tile4 = new Forest;
	Space* tile5 = new Forest;
	Space* tile6 = new Grassland;
	Space* tile7 = new Grassland;
	Space* tile8 = new Grassland;
	Space* tile9 = new Lake;

	tile1->setPointer(nullptr, tile2, nullptr, nullptr);
	tile2->setPointer(nullptr, nullptr, tile3, tile1);
	tile3->setPointer(tile2, tile4, nullptr, nullptr);
	tile4->setPointer(nullptr, nullptr, tile5, tile3);
	tile5->setPointer(tile4, nullptr, tile6, nullptr);
	tile6->setPointer(tile5, tile7, tile8, nullptr);
	tile7->setPointer(nullptr, nullptr, tile9, tile6);
	tile8->setPointer(tile6, tile9, nullptr, nullptr);
	tile9->setPointer(tile7, nullptr, nullptr, tile8);

	Clan player;
//	enum ResourceType {MEAT, PLANT, MATERIAL};
	int endChoice;
	cout << "\nDawn rise towards the south and the cold winds "
	     << "blow from the north.\nYou are Crog of the clan "
	     << "of the Giant Beavers in the time before years.\n"
	     << "The temperature is dropping, you can feel it in "
	     << "your bones, and so you must lead your people to "
	     << "warmer climes before winter comes or they will " 
	     << "not survive.\n\nDo you choose[1] the arduous road "
	     << "ahead (play game), or [2] to face the your fate "
	     << "in the coming ice (exit)?\n\n";
	cin >> endChoice;	
	while(endChoice != 2)
	{
		Space* current = tile1;
		cout << "Your journey begins here.\n";
		while(current->getName() != "lake")
		{
			cout << current->lookAround();
			cout << "What would you like to do next?\n";
			cout << "1. Hunt\n"
			     << "2. Gather plants\n"
			     << "3. Gather materials\n"
			     << "4. Make camp\n"
			int actionChoice;
			cin >> actionChoice;
			int huntCount = 0;
			int plantCount = 0;
			int materialCount = 0;
			do
			{
				switch(actionChoice)
				{
					case 1: if(huntCount == 0)
						{
							if(current->hunt(player.hunter()))
							{
								player.addResource(1);
							}
							huntCount++;
						}
						else
						{
							cout << "You only have energy "
								"for one hunt!\n";
						}
						break;
					case 2: if(plantCount == 0)
						{
							player.addResource(2);
							plantCount++;
						}
						else
						{
							cout << "You've gathered as much "
								"as you can today!\n";
						}
						break;
					case 3: if(materialCount == 0)
						{
							player.addResource(3);
							materialCount++;
						}
						else
						{
							cout << "You've gathered as much "
								"as you can today!\n";
						}
						break;
					case 4: cout << "You have " << player.showMeatStores() << "meals worth of meat, "
						     << "and " << player.showVeggieStores() << "meals worth of plant food.\n"
						     << "Which would you like to eat tonight?\n"
						     << "1. Meat\n"
						     << "2. Veggies\n";
						cin >> foodChoice;
						if(foodChoice == 1)
						{
							player.plusHealth(1); 
						}
						else
						{
							player.plusHealth(2);
						}
						player.changeHealth(current->nightEncounters());
						break;
				}

			}while(actionChoice != 4);
			cout << "Your clan lives to see another day.\n"
			     << "There are now " << player.getClanSize()
			     << " members of your clan that are still alive.\n"
			     << "Your clan's health is currently at " << Player->getHealth() << "out of 10.\n";
			     << "The winds of winter nip at your heels, "
			     << "you must continue to move on.\n"
			bool move;
			do
			{
				cout << "Where would you like to move?\n"
				     << "1. North\n"
				     << "2. East\n"
				     << "3. South\n"
				     << "4. West\n";
				int moveChoice;
				Space* nextMove;
				cin >> moveChoice;
				switch(moveChoice)
				{
					case 1: nextMove = current->north;
						break;
					case 2: nextMove = current->east;
						break;
					case 3: nextMove = current->south;
						break;
					case 4: nextMove = current->west;
						break;
				}
				if(nextMove == nullptr)
				{
					cout << "Your scout warns you that "
					     << "way is certain death!\n";
					move = false;
				}
				else
				{
					current = nextMove;
					move = true;
				}
			}while(!move)
		}
		current->lookAround();
		cout << "Congratulations, you made it to the end with at least some of your clan still alive!\n"
		     << "You still have " << player.getSize() << " members of your clan still alive!\n\n"
		     << "Would you like to play again?\n"
		     << "1. Yes, play again\n"
		     << "2. No, exit\n";
		cin >> endChoice;
	}	
	
	delete tile1;
	tile1 = nullptr;
	delete tile2;
	tile2 = nullptr;
	delete tile3;
	tile3 = nullptr;
	delete tile4;
	tile4 = nullptr;
	delete tile5;
	tile5 = nullptr;
	delete tile6;
	tile6 = nullptr;
	delete tile7;
	tile7 = nullptr;
	delete tile8;
	tile8 = nullptr;
	delete tile9;
	tile9 = nullptr;
	return 0;
}
