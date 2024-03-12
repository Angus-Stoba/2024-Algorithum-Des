// Defines recurring function for Truckloads

#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1; // when the numCrates is <= loadSize, that 'pile' only needs 1 truck
    }
    else {
        int a = numCrates / 2; // 'a' is the smaller half (in terms of odd numbers)
        int b = numCrates - a; // 'b' is the larger half
        return (numTrucks(a, loadSize) + numTrucks(b, loadSize));
        // each half is recursive for as long as they are larger that loadsize
    }
}