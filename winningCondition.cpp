// Functions of winningCon.h

#include "winningCondition.h"
/*
winningCon::winningCon(){};
winningCon::winningCon(string inputMove){move = inputMove;};
*/
// Functions
bool winningCondition::winningMove(string p1moveName, vector<string> p2win){
    for (const auto& element : p2win) {
        if (p1moveName == element){
            return true;
        }
    }
    return false;

}



/*
string* winningCon::getStronger(){
    if(move == "Rock" || move == "Paper" || move == "Scissors"){
        return rpsWin(move);
    }
    else if(move == "Robot" || move == "Ninja" || move == "Pirate" || move == "Zombie" || move == "Monkey"){
        return mrnWin(move);
    }
    else {return nullptr;}

};

string* winningCon::getWeeker(){
    if(move == "Rock" || move == "Paper" || move == "Scissors"){
        return rpsLoss(move);
    }
    else if(move == "Robot" || move == "Ninja" || move == "Pirate" || move == "Zombie" || move == "Monkey"){
        return mrnLoss(move);
    }
    else {return nullptr;}

}

int winningCon::getArrayLen(){
    if(move == "Rock" || move == "Paper" || move == "Scissors"){
        return 1;
    }
    else if(move == "Robot" || move == "Ninja" || move == "Pirate" || move == "Zombie" || move == "Monkey"){
        return 2;
    }
    else {return 0;}
}



// Sub Functions

string* winningCon::rpsWin(string input){
    // Possible outcomes
    static string winRock[1] = {"Scissors"};
    static string winPaper[1] = {"Rock"};
    static string winScissors[1] = {"Paper"};

    // input checks
    if(input == "Rock"){return winRock;}
    else if(input == "Paper"){return winPaper;}
    else {return winScissors;}
}

string* winningCon::rpsLoss(string input){
    // Possible outcomes
    static string lossRock[1] = {"Paper"};
    static string lossPaper[1] = {"Scissors"};
    static string lossScissors[1] = {"Rock"};

    // input checks
    if(input == "Rock"){return lossRock;}
    else if(input == "Paper"){return lossPaper;}
    else {return lossScissors;}
}

string* winningCon::mrnWin(string input){
    // Possible outcomes
    static string winMonkey[2] = {"Ninja", "Robot"};
    static string winRobot[2] = {"Ninja", "Zombie"};
    static string winPirate[2] = {"Robot", "Monkey"};
    static string winNinja[2] = {"Pirate", "Zombie"};
    static string winZombie[2] = {"Pirate", "Monkey"};

    // input checks
    if(input == "Monkey"){return winMonkey;}
    else if(input == "Robot"){return winRobot;}
    else if(input == "Pirate"){return winPirate;}
    else if(input == "Ninja"){return winNinja;}
    else {return winZombie;}
}

string* winningCon::mrnLoss(string input){
    // Possible outcomes
    static string lossMonkey[2] = {"Pirate", "Zombie"};
    static string lossRobot[2] = {"Monkey", "Pirate"};
    static string lossPirate[2] = {"Ninja", "Zombie"};
    static string lossNinja[2] = {"Monkey", "Pirate"};
    static string lossZombie[2] = {"Robot", "Ninja"};

    // input checks
    if(input == "Monkey"){return lossMonkey;}
    else if(input == "Robot"){return lossRobot;}
    else if(input == "Pirate"){return lossPirate;}
    else if(input == "Ninja"){return lossNinja;}
    else {return lossZombie;}
}

*/