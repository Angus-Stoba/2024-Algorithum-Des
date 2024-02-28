// Functions of Move.h

#include "Move.h"

Move::Move(){inputPlayer = 0;}

Move::Move(Player* playerInput){inputPlayer = playerInput;}


string Move::getName(){return inputPlayer->getMove();}




