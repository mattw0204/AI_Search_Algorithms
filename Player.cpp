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