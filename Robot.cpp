// functions of Robot

#include "Robot.h"

Robot::Robot(){
    winsAgainst = {"Ninja", "Zombie"};
    moveName = "Robot";
}

vector<string> Robot::get_winsAgainst(){
    return winsAgainst;
}