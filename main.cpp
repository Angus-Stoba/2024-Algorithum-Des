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
    Player* Player1 = new Human("Steve");
    Player* Player2 = new Computer("Jane");

    // Referee Creation
    Referee Game1;
    
    // Running Rock Paper Scissors game between players
    Player* output = Game1.refGame(Player1, Player2);

    // Code to cout the winner of the game
    if(output == nullptr){cout << "It's a Tie" << endl;}
    else if(output == Player1){cout << Player1->getName() << " Wins" << endl;} // "else {cout << output->getName() << " Wins" << endl;}"
    else if(output == Player2){cout << (Player2->getName()) << " Wins" << endl;}
    else{cout << "Error" << endl;} 


    // Just to remove this from unneeded storage
    delete Player1;
    delete Player2;


    return 0;
}