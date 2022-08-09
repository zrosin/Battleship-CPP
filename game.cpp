#pragma once
#include "game.hpp"

Game::Game()
{
	counter = 0;
}

//-------------------------------------------------------------------

void Game::InitializeShips(std::string ShipString, int shipnumber)
{
	boats[shipnumber].SetShipX(ChangeCharToInt(ShipString.substr(0, 1)));
	boats[shipnumber].SetShipY(ChangeCharIntToRealInt(ShipString.substr(1, 1)));
	boats[shipnumber].SetShipType(shipnumber);
	boats[shipnumber].SetShipDirection(ChangeStringToDirection(ShipString.substr(2, 1)));

}

//-------------------------------------------------------------------

bool Game::IsGameOver()
{
	if (board.NumberOfHits() == 17)
	{
		return true;
	}
	return false;
}

//-------------------------------------------------------------------

//takes a string, parses the attack into ints to check if the boat is there. if it is sets cell and returns hit "ship"
std::string Game::NewAttack(std::string location)
{
	counter++;
	for (int i = 0;i < boats.size(); i++)
	{
		if (boats[i].IsTheBoatThere(ChangeCharToInt(location.substr(0, 1)), ChangeCharIntToRealInt(location.substr(1, 1))))
		{
			board.SetCell(ChangeCharToInt(location.substr(0, 1)), ChangeCharIntToRealInt(location.substr(1, 1)), Cell::Hit);

			//if i had time to implement it this is where i would put an if statenement to check if the ship is sunk, but i forgot about it.

			return "Hit " + boats[i].ReturnShipName();
		}
	}
	board.SetCell(ChangeCharToInt(location.substr(0, 1)), ChangeCharIntToRealInt(location.substr(1, 1)), Cell::Miss);
	return "Miss";
}

//-------------------------------------------------------------------

void Game::OutPutBoardRequest()
{
	OutputBoard(board);
}

//-------------------------------------------------------------------

int Game::ReturnCounter()
{
	return counter;
}
