// functions of rock

#include "Rock.h"

Rock::Rock(){
    winsAgainst = {"Scissors"};
    moveName = "Rock";
}

vector<string> Rock::get_winsAgainst(){
    return winsAgainst;
}