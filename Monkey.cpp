// functions of monkey

#include "Monkey.h"

Monkey::Monkey(){
    winsAgainst = {"Ninja", "Robot"};
    moveName = "Monkey";
}

vector<string> Monkey::get_winsAgainst(){
    return winsAgainst;
}

string Monkey::getName(){
    return moveName;
}
