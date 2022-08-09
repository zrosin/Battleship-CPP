#pragma once
#include "boats.hpp"
#include "board.hpp"
#include "StringManip.hpp"
#include <string>


class Game
{
public:
	Game();
	void InitializeShips(std::string ShipString, int i);
	bool IsGameOver();
	std::string NewAttack(std::string location);
	void OutPutBoardRequest();
	int ReturnCounter();
	
	

private:
	Board board;
	using Boats = std::array <Ships, 5>;
	Boats boats;
	int counter;

};