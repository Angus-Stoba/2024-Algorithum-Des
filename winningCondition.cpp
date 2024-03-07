// Functions of winningCon.h

#include "winningCondition.h"

bool winningCondition::winningMove(string p1moveName, vector<string> p2winsAgainst){
    for (const auto& element : p2winsAgainst) {
        if (p1moveName == element){
            return true; // this means p2 wins
        }
    }
    return false; // this means p2 did not win (not necassarily p1 wins)
}