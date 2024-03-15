// Defines recurring function for Truckloads

#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1; // when the numCrates is <= loadSize, that 'pile' only needs 1 truck
    }
    else {
        int half1 = numCrates / 2; // 'a' is the smaller half (in terms of odd numbers)
        int half2 = numCrates - half1; // 'b' is the larger half
        return (numTrucks(half1, loadSize) + numTrucks(half2, loadSize));
        // each half is recursive for as long as they are larger that loadsize
    }
}