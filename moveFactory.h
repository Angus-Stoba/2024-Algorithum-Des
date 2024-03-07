// takes strings, converts to return move pointer

#ifndef MOVEFACTORY_H
#define MOVEFACTORY_H

#include "Move.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"


class moveFactory {
public:
    moveFactory();
    Move * moveTransformer(string input);
};

#endif