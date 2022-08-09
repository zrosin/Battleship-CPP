#pragma once
#include <string>


enum class Direction
{
	Vertical,
	Horizontal,
	Unknown
};
enum class BoatType
{
	CV,
	BB,
	CL,
	SS,
	DD,
	Unknown
};

struct Boat
{
	int x, y, length;
	Direction direction;
	BoatType type;
	std::string name;
};

class Ships
{
public:
	Ships();
	Ships(int row, int col, int type, int direction);
	bool IsTheBoatThere(int row, int col);
	std::string ReturnShipName();
	void SetShipX(int row);
	void SetShipY(int col);
	void SetShipType(int type);
	void SetShipDirection(int dir);


private:
	Boat boat;
	void SetShipLength();
	void SetShipName();
};