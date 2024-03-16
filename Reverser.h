// Reverser takes string / int variables 

#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Reverser {
private:
    int reverseAddition = 0; // Active counter of the reverse variable for reverseDigit
    int reverseSum = 0;      // Final outputted variable for reverseDigit
    bool recursionBool = false;
public:
    int reverseDigit(int value);
    string reverseString(string characters);
};

#endif