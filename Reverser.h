// Reverser takes string / int variables 

#ifndef REVERSER_H
#define REVERSER_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Reverser {
protected:
    int reversedSum = 0;
public:
    int reverseDigit(int value);
    string reverseString(string characters);
};

#endif