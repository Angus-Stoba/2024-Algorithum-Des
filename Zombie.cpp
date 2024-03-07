// functions of Zombie

#include "Zombie.h"

Zombie::Zombie(){
    winsAgainst = {"Pirate", "Monkey"};
    moveName = "Zombie";
}

vector<string> Zombie::get_winsAgainst(){
    return winsAgainst;
}