#include <vector>

using namespace std;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs) {
		int chickens = 0;
		int cows = 0;
		

		int rem_legs = legs;

		for(int i = 0; i < heads; i++) {
			chickens++;
			rem_legs -= 2;
		}

		while(rem_legs > 0) {
			chickens--;
			cows++;
			rem_legs -= 2;
		}

		if( (rem_legs != 0) || (cows < 0) || (chickens < 0) ) {
			return {};
		}

		return {chickens,cows};
	}
};