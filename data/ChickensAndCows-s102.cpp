#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include <cstdlib>
using namespace std;

class ChickensAndCows {
public:

    // Is digit
    string dig(string d_O) {
        for (unsigned int i = 0; i < d_O.length(); i++) {
            if (isdigit(d_O[i])) {
                continue;
            }
            else {
                d_O.erase(i,1);
            }
        }
        return d_O;
    }

    // Print
    void p(vector<int> a) {
        for (unsigned int i = 0; i < a.size(); i++) {
            cout << a[i];
        }
    }

    // String to Vector
    vector<string> s2v(string input) {
        string tmp, vS;
        vector<string> iV;

        istringstream ss(input);

        while(getline(ss, tmp, ' ')) {
            stringstream ss(tmp);
            ss >> vS;
            iV.push_back(vS);
        }
        return iV;
    }

    // Int to vector
    vector<int> i2V(string input) {
        vector<int> iV;
        int returnValue;
        string tmp;

        for (unsigned int i = 0; i < input.size(); i++) {
            stringstream convert;
            convert << input[i];
            convert >> returnValue;
            iV.push_back(returnValue);
        }
        return iV;
    }

    vector<int> howMany(int heads, int legs) {
        int legsTally = legs;
        int headsTally = heads;
        int cows = 0;
        int chickens = 0;
        vector<int> combo;
        vector<int> error;

        if (legs % 2 == 1 || heads * 4 < legs) {
            return error;
        }
        

        for (int i = 0; i < heads; ++i) {
            if (legsTally % 4 == 0 && legsTally % headsTally == 0) {
                legsTally -= 4;
                cows++;
            }
            else {
                legsTally -= 2;
                chickens++;
            }
            headsTally--;
        }

        combo.push_back(chickens);
        combo.push_back(cows);

        if (chickens + cows != heads) {
            return error;
        }

        return combo;

    }

};