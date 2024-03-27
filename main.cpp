#include "Finder.h"

using namespace std;

int main(){
    
    Finder findVals;

    string s1 = "112312341234588";

    string s2 = "1234567";

    vector<int> newVector;

    newVector = findVals.findSubstrings(s1, s2);

    for (int i = 0; i < newVector.size(); i++){
        cout << i << " = " << newVector.at(i) << endl;
    }

}
