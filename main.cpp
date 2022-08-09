//This program is a simplified game of battleship
//
//9/3/2020

#pragma once
#include <iostream>
#include <string>
#include "game.hpp"


int main()
{
	std::string Input;

	Game battleship;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> Input;
		battleship.InitializeShips(Input, i);
	}
	std::cin >> Input;
	do
	{
		std::cout << Input << ": ";
		std::cout << battleship.NewAttack(Input) << std::endl << std::endl;
		battleship.OutPutBoardRequest();
		std::cout << std::endl << std::endl;

		if (battleship.IsGameOver())
		{
			std::cout << " You won in " << battleship.ReturnCounter() << " turns.";
		}
		Input.clear();
		std::cin >> Input;
	} while (!Input.empty() && !battleship.IsGameOver());


	if (!battleship.IsGameOver())
	{
		std::cout << "You lost.";
	}

	return 0;
}