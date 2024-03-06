// takes strings, converts to return move pointer

#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"


class moveFactory {
public:
    moveFactory();
    Move * winningConditions(string input);
};

#endif