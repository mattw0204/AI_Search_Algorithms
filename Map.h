#pragma once

// The map class holds the data for the traversable space
class Map
{
public:
	int CurrentSpace[2] = { 0,0 };
	int StartSpace = 1;
	int EndSpace[2] = { 4,4 };
	// Map constructor and destructor
	Map() {};
	~Map() {};

	// The 2-dimensional array that holds the playspace
	// 1 represents walkable space, 0 represents non-walkable space
	int MapGrid[5][5] = { {1, 1, 1, 1, 1},
						  {1, 1, 1, 1, 1},
						  {1, 1, 1, 1, 1},
						  {1, 1, 1, 1, 1},
						  {1, 1, 1, 1, 1} };

private:
	// The start and end co-ordinates for the path

public:
	// Getters for a safe start/end request
	int GetStart() { return this->StartSpace; };
	//int GetEnd() { return this->EndSpace; };

	// Converts a grid index to a coordinate
	int* GetGridCoord(int Index = 0);
	// Converts a grid coordinate to an index
	int GetGridIndex(int* Coord);
};

