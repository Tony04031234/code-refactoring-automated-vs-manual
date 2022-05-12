#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <bitset>
#include <math.h>
using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs) {

		int cows;
		int chickens;
		int sum;
		vector<int> ret;

		for (int i = 0; i <= heads; i++) {
			
			cows = 4*i;
			chickens = 2*(heads-i);

			sum = cows+chickens;

			if (legs == sum) {
				ret.push_back(heads-i);
				ret.push_back(i);
			}
		}

		return ret;

	}
}; 