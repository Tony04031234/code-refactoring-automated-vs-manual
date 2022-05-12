#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs){
		int chickens = 0;
		int cows = 0;

		if(heads == 0 && legs == 0){
			return {0,0};
		} else if(heads < 1 || legs < 1){
			return {};
		}

		// chickens = 2 * heads;
		// // cout << 2 * heads << endl;
		// chickens -= legs/2;
		// cout << chickens - legs/2 << endl;
		// cout << (legs - 2 * heads)%2 << endl;

		if((legs - 2 * heads) % 2 == 0){
			cows = legs / 2;
			cows -= heads;
			chickens = 2 * heads - legs/2;
			cows = legs / 2 - heads;
		} else {
			return {};
		}

		if(chickens < 0 || cows < 0){
			return {};
		}
		return {chickens, cows};
	}	
};
// -std=c++11