// Main Code for Rock Paper Scissors game

#include <iostream>
#include <string>

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main(){

    // Player Creation
    Player* Steve = new Human("Steve");
    Player* Steve2 = new Computer("Steve2");

    // Referee Creation
    Referee Game1;
    
    // Running Rock Paper Scissors game between players
    Player* output = Game1.refGame(Steve, Steve2);

    // Code to cout the winner of the game
    if(output == nullptr){cout << "It's a Tie" << endl;}
    else if(output == Steve){cout << Steve->getName() << " Wins" << endl;} // "else {cout << output->getName() << " Wins" << endl;}"
    else if(output == Steve2){cout << (Steve2->getName()) << " Wins" << endl;}
    else{cout << "Error" << endl;} 


    // Just to remove this from unneeded storage
    delete output;

    return 0;
}