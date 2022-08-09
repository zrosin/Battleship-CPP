#pragma once
#include "StringManip.hpp"

int ChangeCharToInt(std::string row)
{
	for (int i = 65; i < 75; i++)
	{
		if (i == static_cast<int>(row.front()))
		{
			return i - 65;
		}
	}
	for (int i = 97; i < 107; i++)
	{
		if (i == static_cast<int>(row.front()))
		{
			return i - 97;
		}
	}
}

void OutputBoard(Board bored)
{
	std::cout << "  ABCDEFGHIJ" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " ";
		for (int j = 0; j < 10; j++)
		{
			if (bored.GetCell(j, i) == Cell::Unknown)
			{
				std::cout << ".";
			}
			else if (bored.GetCell(j, i) == Cell::Hit)
			{
				std::cout << "X";
			}
			else
			{
				std::cout << "O";
			}
		}
		std::cout << std::endl;
	}
}

int ChangeCharIntToRealInt(std::string number)
{
	return static_cast<int>(number.front()) - 48;
}

int ChangeStringToDirection(std::string direction)
{
	if (static_cast<int>(direction.front()) == 86 || static_cast<int>(direction.front()) == 118)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
