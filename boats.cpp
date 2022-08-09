#pragma once
#include "boats.hpp"
#include <string>
#include <iostream>



Ships::Ships()
{
	boat.x = 0;
	boat.y = 0;
	boat.length = 0;
	boat.direction = Direction::Unknown;
	boat.type = BoatType::Unknown;
}

//-------------------------------------------------------------------

Ships::Ships(int row, int col, int type, int direction)
{
	boat.x = row;
	boat.y = col;
	boat.type = static_cast<BoatType>(type);
	boat.direction = static_cast<Direction>(direction);
	SetShipLength();
	SetShipName();
}

//-------------------------------------------------------------------

//iterates through the length of the ship to see if anywhere on the ship is where the shell landed
bool Ships::IsTheBoatThere(int row, int col)
{
	//Vertical 
	if (boat.direction == Direction::Vertical && col == boat.y)
	{
		for (int i = boat.x; i <= boat.x + boat.length; i++)
		{
			if (i == row)
				return true;
		}
	}
	//Horizontal
	if (boat.direction == Direction::Horizontal && row == boat.x)
	{
		for (int i = boat.y; i <= boat.y + boat.length; i++)
		{
			if (i == col)
				return true;
		}
	}
	//If neither of those are true then the shot is a miss
	return false;
}

//-------------------------------------------------------------------

std::string Ships::ReturnShipName()
{
	return boat.name;
}

//-------------------------------------------------------------------

void Ships::SetShipX(int row)
{
	boat.x = row;
}

void Ships::SetShipY(int col)
{
	boat.y = col;
}

void Ships::SetShipType(int type)
{
	boat.type = static_cast<BoatType>(type);
	SetShipLength();
	SetShipName();
}

void Ships::SetShipDirection(int dir)
{
	if (dir == 1)
	{
		boat.direction = Direction::Vertical;
	}
	else
	{
		boat.direction = Direction::Horizontal;
	}
}

//-------------------------------------------------------------------

//for some reason it adds a mystery 1 to the length. if i say boat.length = 5 the ship is 6 tiles long.
void Ships::SetShipLength()
{
	if (boat.type == BoatType::CV)
	{
		boat.length = 4;
	}
	else if (boat.type == BoatType::BB)
	{
		boat.length = 3;
	}
	else if (boat.type == BoatType::DD)
	{
		boat.length = 1;
	}
	else
	{
		boat.length = 2;
	}
}

void Ships::SetShipName()
{
	if (boat.type == BoatType::CV)
	{
		boat.name = "Carrier";
	}
	else if (boat.type == BoatType::BB)
	{
		boat.name = "Battleship";
	}
	else if (boat.type == BoatType::CL)
	{
		boat.name = "Cruiser";
	}
	else if (boat.type == BoatType::SS)
	{
		boat.name = "Submarine";
	}
	else
	{
		boat.name = "Destroyer";
	}
}


