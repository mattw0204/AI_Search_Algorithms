#include "Player.h"

// Get from front of queue
int Player::GetFIFO()
{
	// null check
	if (this->FIFOQueue.empty()) return 0;

	// Get the value of the front element
	int FrontElem = *this->FIFOQueue.begin();
	// Remove the element from the front of the queue
	this->FIFOQueue.erase(this->FIFOQueue.begin());
	this->FIFOQueue.shrink_to_fit();

	return FrontElem;
}

// Get from top of queue
int Player::GetFILO()
{
	// null check
	if (this->FILOStack.empty()) return 0;

	// Get the value of the top element of the stack
	int TopElem = *this->FILOStack.end();
	// Remove element from stack
	this->FILOStack.pop_back();

	return TopElem;
}

std::vector<int> Player::getNeighbours() {
    int coords[2] = { map->CurrentSpace[0] ,map->CurrentSpace[1] };
    map->GetGridIndex(coords);
    int* coord = map->GetGridCoord(map->GetGridIndex(coords));

    std::vector<int> neighbours;
    int left[2] = { coords[0] - 1, coords[1] };
    if (left[0] >= 0) neighbours.push_back(map->GetGridIndex(left));
    {

    }
    int up[2] = { coords[0], coords[1] - 1 };
    if (left[1] >= 0) neighbours.push_back(map->GetGridIndex(up));
    {

    }

    int right[2] = { coords[0] + 1, coords[1] };
    if (right[0] <= 0) neighbours.push_back(map->GetGridIndex(right));
    {

    }
    int down[2] = { coords[0], coords[1] + 1 };
    if (down[1] <= 0) neighbours.push_back(map->GetGridIndex(down));
    {

    }

    return neighbours;
}