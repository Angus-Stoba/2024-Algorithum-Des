// Defines recurring function for Truckloads

#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1; // when the numCrates is <= loadSize, that 'pile' only needs 1 truck
    }
    else { // Using the smaller of methods
        int half1 = numCrates / 2; // 'a' is the smaller half (in terms of odd numbers)
        int half2 = numCrates - half1; // 'b' is the larger half
        return (numTrucks(half1, loadSize) + numTrucks(half2, loadSize));
        // each half is recursive for as long as they are larger that loadsize
    }


    // Alternatively it could be written with if statements to seperate odds and evens
    /*
        Evens would use
        "
        int half = numCrates / 2;                                           // evens split into two equal halves
        return (numTrucks(half, loadSize) * 2)                              // 'function output * 2' because each half would produce the same result
        "

        Odds would use
        "
        int half1 = (numCrates - 1)/2;                                      // 'numCrates - 1' for the highest even within numCrates (output is the smaller half of numCrates)
        int half2 = numCrates - half1;                                      // 'numCrates - half1' as half1 is the smaller half of numCrates, subtracking it results in the larger spit of numCrates 
        return (numTrucks(half1, loadSize) + numTrucks(half2, loadSize))    // running seperate functions per half (as the output will not the same)
        "
    
    */

}