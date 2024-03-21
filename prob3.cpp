#include <iostream>

using namespace std;

int recFunc31(int x, int n){ // fib with tail
    if (n == 0){
        return 1;
    }
    else{
        return x * recFunc31(x, n-1);
    }

}

int recFunc32(int x, int n, int rec = 1){ // fib with head 
    if (n == 0){
        return 1;
    }
    else{
        return recFunc32(x, n-1, rec * x);
    }

}



int main(){


}