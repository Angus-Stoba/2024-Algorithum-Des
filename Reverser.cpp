// Defines recurring functions for Reverser

#include "Reverser.h"

int Reverser::reverseDigit(int value){
    if (value < 0){ // Input Value Validation
        return -1;
    }
    else if (value == 0){
        if(recursionBool == true){
            recursionBool = false;                                  // Resets bool
            return reverseSum;                                      // Returns the final sum
        }
        else{
            return 0;                                               // this if / else statement is for if '0' is the input number (would not trigger a recursion)
        }
    }
    else {
        if(value < 10){
            recursionBool = true;                                   // Used to validate if a recursion has occured

            reverseSum = reverseAddition;                           // copy reverseAddition to reverseSum
            reverseAddition = 0;                                    // reset reverseAddition for future reverseDigit uses
            reverseSum = reverseSum * 10 + value % 10;              // final use of the formula
            return reverseDigit(value/10);                          
        }
        else{
            reverseAddition = reverseAddition * 10 + value % 10;    // formula for reversing a digit 
            return reverseDigit(value/10);                         
        }
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
