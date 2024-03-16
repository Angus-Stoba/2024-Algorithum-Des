// Reverser takes string / int variables 

#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Reverser {
public:
    int reverseDigit(int value);
    int reverseDigitHelper(int value, int revSum); // used so "revSum" is reset per use case

    string reverseString(string characters);
};

#endif