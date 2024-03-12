// Main code for Truckloads prac

#include <iostream>

#include "Truckloads.h"

int main(){

    Truckloads shipment1;

    int inputCrates = 1024;
    int inputLoadSize = 5;

    int Trucks;

    Trucks = shipment1.numTrucks(inputCrates, inputLoadSize);


    std::cout << "Number of trucks = " << Trucks << std::endl;
}