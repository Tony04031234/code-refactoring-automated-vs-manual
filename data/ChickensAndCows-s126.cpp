#ifndef CHICKENSANDCOWS_H
#define CHICKENSANDCOWS_H

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

class ChickensAndCows {
public:
    vector<int> howMany(int heads, int legs) {
        vector<int> result;
        int chickenlegs = 2;
        int cowlegs = 4;
        int cows = 0;
        // int chickens = 0;
        if (heads == 0 && legs == 0) {
            result.push_back(0);
            result.push_back(0);
            return result;
        }

        // chickens
        for (int chickens = 0; chickens <= heads; chickens++) {
            // cows
            cows = heads-chickens;
                // if (cows+chickens == heads) {
                    if (((cows*cowlegs) + (chickens*chickenlegs)) == legs) {
                        result.push_back(chickens);
                        result.push_back(cows);
                        return result;
                    // }
                }
            }
        }

        // return result;
    
};

#endif






