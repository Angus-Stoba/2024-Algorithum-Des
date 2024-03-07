// functions of Scissors

#include "Scissors.h"

Scissors::Scissors(){
    winsAgainst = {"Paper"};
    moveName = "Scissors";
}

vector<string> Scissors::get_winsAgainst(){
    return winsAgainst;
}