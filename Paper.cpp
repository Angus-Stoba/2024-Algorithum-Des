// functions of paper

#include "Paper.h"

Paper::Paper(){
    winsAgainst = {"Rock"};
    moveName = "Paper";
}

vector<string> Paper::get_winsAgainst(){
    return winsAgainst;
}