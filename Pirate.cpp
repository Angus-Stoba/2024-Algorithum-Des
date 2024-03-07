// functions of Pirate

#include "Pirate.h"

Pirate::Pirate(){
    winsAgainst = {"Robot", "Monkey"};
    moveName = "Pirate";
}

vector<string> Pirate::get_winsAgainst(){
    return winsAgainst;
}