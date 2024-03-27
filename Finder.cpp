#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

    int index = 0; // adding index for optimisation 
    
    for(size_t i = 1; i <= s2.size(); i++) {
        if (index < 0){ // use of index to speed through the looping
            result.push_back(-1);
        }
        else{
            size_t found = s1.find(s2.substr(0, i), index); // use of index in the .find function
            if (found != string::npos) {
                result.push_back(found);
                index = found; // adjustment of index for next loop
            } else {
                result.push_back(-1);
                index = -1; // change of index to go into if statement
            }
        }
    }
return result;
}
