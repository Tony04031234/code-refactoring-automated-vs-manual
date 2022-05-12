#include <iostream>
#include <vector>
#include <math.h>


using namespace std;

class ChickensAndCows
{
  public:
    vector<int> howMany(int heads, int legs)
    {
        vector<int> result;
        int cows = 0;
        int chickens = 0;

        // impossible cases
        if ( 4*heads > legs || 2*heads > legs ){
            return result;
        }

        chickens = legs%heads;
        cows = heads - chickens;

        result.push_back(chickens);
        result.push_back(cows);

        return result;
    }
};

