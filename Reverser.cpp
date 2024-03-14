// Defines recurring functions for Reverser

#include "Reverser.h"

int Reverser::reverseDigit(int value){
    int sum;
    if (value <= 0){
        return reversedSum;    
    }
    else {
        reversedSum = reversedSum * 10 + value % 10;
        return reverseDigit(value/10);
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
