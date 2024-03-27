#include "Finder.h"

using namespace std;

int main(){
    
    Finder findVals;

    string s1 = "445145624567";

    string s2 = "456789";

    vector<int> newVector;

    newVector = findVals.findSubstrings(s1, s2);

    for (int i = 0; i < newVector.size(); i++){
        cout << i << " = " << newVector.at(i) << endl;
    }

}
