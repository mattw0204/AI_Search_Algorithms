#include "Map.h"

// Converts a grid index to a coordinate
int* Map::GetGridCoord(int Index)
{
	// Create an output variable to give coords
	int Output[2] = { 0, 0 };

	Output[0] = Index % sizeof(MapGrid[0]); // Get column
	Output[1] = (Index - Output[0]) / sizeof(MapGrid); // Get row

	return Output;
}

// Converts a grid coordinate to an index
int Map::GetGridIndex(int* Coord)
{
	// Null check the input
	if (!Coord) return 0;

	int Column = Coord[1]; // Get column
	int Row = Coord[0] * (sizeof(MapGrid[0]) / sizeof(MapGrid)); //Get row

	return Row + Column;
}