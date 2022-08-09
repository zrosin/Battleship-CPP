#pragma once
#include "board.hpp"

Board::Board()
{
	gameboard = {
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,},
			Row{Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown, Cell::Unknown,}
	};
}

Cell Board::GetCell(int row, int col)
{
	return gameboard[row][col];
}

void Board::SetCell(int row, int col, Cell cell)
{
	gameboard[row][col] = cell;
}

int Board::NumberOfHits()
{
	int counter = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (gameboard[i][j] == Cell::Hit)
			{
				counter++;
			}
		}
	}
	return counter;
}

