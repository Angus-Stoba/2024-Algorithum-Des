// functions of Ninja

#include "Ninja.h"

Ninja::Ninja(){
    winsAgainst = {"Pirate", "Zombie"};
    moveName = "Ninja";
}

vector<string> Ninja::get_winsAgainst(){
    return winsAgainst;
}