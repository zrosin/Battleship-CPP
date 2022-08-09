#pragma once
#include <array>


enum class Cell
{
	Unknown,
	Miss,
	Hit
};

using Row = std::array<Cell, 10>;

class Board
{
public:
	Board();
	Cell GetCell(int row, int col);
	void SetCell(int row, int col, Cell cell);
	int NumberOfHits();


private:
	using Gameboard = std::array<Row, 10>;
	Gameboard gameboard;
};

