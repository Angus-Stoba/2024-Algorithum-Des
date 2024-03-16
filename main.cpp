// Main code for Truckloads prac

#include <iostream>

#include "Truckloads.h"
#include "Reverser.h"

int main(){

    Truckloads shipment1;

    int inputCrates = 19;
    int inputLoadSize = 5;

    int Trucks;

    Trucks = shipment1.numTrucks(inputCrates, inputLoadSize);


    std::cout << "Number of trucks = " << Trucks << std::endl;


    Reverser reverse;

    int forwardNumber = 12345;
    std::string forwardString = "Hello in esreveR";

    int reversedNumber;
    std::string reversedString;

    reversedNumber = reverse.reverseDigit(forwardNumber);
    std::cout << "Reversed Number = " << reversedNumber << std::endl;    
    
    reversedString = reverse.reverseString(forwardString);
    std::cout << "Reversed String = " << reversedString << std::endl;

}