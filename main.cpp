// Main Code for Rock Paper Scissors game

#include <iostream>
#include <string>

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main(){

    Player* Steve = new Human("Steve");

    Player* Steve2 = new Computer("Steve2");

    Referee Game1;
    
    Player* output = Game1.refGame(Steve, Steve2);

    if(output == nullptr){cout << "It's a Tie" << endl;}
    else if(output == Steve){cout << Steve->getName() << " Wins" << endl;}
    else if(output == Steve2){cout << (Steve2->getName()) << " Wins" << endl;}
    else if(output == 0){cout << "invalid input" << endl;}
    else{cout << "Error" << endl;}

    delete output;

    return 0;
}