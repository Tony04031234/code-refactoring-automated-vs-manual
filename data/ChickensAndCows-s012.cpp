#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		int animal, chickens, chickenLegs, cows, cowLegs;
		vector<int> result;

		animal = chickens = cows = 0;
		chickenLegs = 2;
		cowLegs = 4;

		if (legs % 2 != 0 || legs == 0 || heads == 0) {
			return result;
		}

		if (legs / cowLegs == heads) {
			result.push_back(0);
			result.push_back(heads);
			return result;

		} else if (legs / chickenLegs == heads) {
			result.push_back(heads);
			result.push_back(0);
			return result;
		}

		for (int i = 1; i <= heads; i++) {
			legs -= cowLegs;
			for (int j = 1; j <= heads-i; j++) {
				legs -= chickenLegs;
				if (legs == 0 && j == heads-i) {
					result.push_back(j);
					result.push_back(i);
					return result;
				}
			}

			result.push_back(0);
			result.push_back(i);
		}

		return result;
	}
};