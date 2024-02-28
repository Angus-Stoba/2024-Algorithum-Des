// Functions of Move.h

#include "Move.h"

Move::Move(){inputPlayer = 0;}
Move::Move(Player* playerInput){inputPlayer = playerInput;}

// This may be seen are forcing the result, but I didn't want to have move be a public variable 
// and was unsure on how else to get the move of a player...
string Move::getName(){return inputPlayer->getMove();}




