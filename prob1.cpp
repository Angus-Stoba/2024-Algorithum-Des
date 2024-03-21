#include <iostream>
#include <map>

using namespace std;

int recFunc11(int n){ // factorial 

    if (n == 0){
        return 1;
    }
    return n * recFunc1(n-1);

}

int recFunc12(int n){ // factorial 

    if (n == 0){
        return 1;
    }
    return n * recFunc1(n-1);

}

int main(){

    cout << recFunc1(4) << endl;

    cout << recFunc1(5) << endl;


}