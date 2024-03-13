// Defines recurring functions for Reverser

#include "Reverser.h"

int Reverser::reverseDigit(int value){
    if (value < 10){
        return value;
    }
    else {
        return value % 10 + (10 * reverseDigit(value / 10));
    };
}


string Reverser::reverseString(string characters){
    if (characters.size() == 1){
        return characters;
    }
    else {
        int strLen = characters.length();        
        return reverseString(characters.substr(1, strLen)) + characters.at(0);
    };
}
