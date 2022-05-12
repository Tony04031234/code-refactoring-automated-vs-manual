#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

class ChickensAndCows {
	public:
	vector<int> howMany(int heads, int legs) {
		int chickens = 0;
		int cows = 0;
		vector<int> res(2);
		if (heads*2 > legs) {
			return vector<int>();
		} else if (heads*4 < legs) {
			return vector<int>();
		}

		while (heads*2 < legs ) {
			cows++;
			legs -= 4;
			heads--;
		}

		if (legs > 0 && heads == 0) {
			return vector<int>();
		}

		//cout << heads << " " << legs << endl;
		chickens = legs/2.0;
		legs -= 2*chickens;
		heads -= chickens;

		if (legs != 0 || heads != 0) {
			return vector<int>();
		}

		res[0] = chickens;
		res[1] = cows;

		//cout << chickens << " " << cows << endl;
		return res;
	}
};