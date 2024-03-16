// Defines recurring functions for Reverser

#include "Reverser.h"

int Reverser::reverseDigit(int value){
    
    
    if (value < 0){ // Input Value Validation
        return -1;
    }
    else{
        int revSum = 0;
        return reverseDigitHelper(value, revSum);
    }
    
    
    /*
    else if (value == 0){
        return reversedSum; 
    }
    else {
        reversedSum = reversedSum * 10 + value % 10;
        return reverseDigit(value/10);
    };
    */
}

int Reverser::reverseDigitHelper(int value, int revSum){
    if (value == 0){
        return revSum; 
    }
    else {
        revSum = revSum * 10 + value % 10;
        return reverseDigitHelper(value/10, revSum);;
    };
}


string Reverser::reverseString(string characters){
    if(characters.size() == 0){ // Input String Validation
        return "ERROR";
    }
    else if (characters.size() == 1){
        return characters; 
    }
    else {
        int strLen = characters.length();        
        return reverseString(characters.substr(1, strLen)) + characters.at(0);
    };
}
