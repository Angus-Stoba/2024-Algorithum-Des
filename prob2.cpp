#include <iostream>

using namespace std;

int recFunc21(int n){ // fib with head
    if (n == 0 || n == 1){
        return n;
    }
    else{
        return recFunc21(n-1) + recFunc21(n-2);
    }

}

int recFunc22(int n, int a = 0, int b = 1){ // fib with tail
    if (b == 0){
        return a;
    }
    else{
        return recFunc22(n-1, b, a+b);;
    }

}

int main(){


}