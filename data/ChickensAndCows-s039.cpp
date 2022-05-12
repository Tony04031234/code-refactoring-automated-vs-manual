#include "debug.h"

class ChickensAndCows {
public:
	std::vector<int> howMany(int heads, int legs) {
		std::vector<int> ans;
		//Suppose i is the number of chickens and j is number of cows
		for(int i=0; i<=heads; i++) {
			int totalLegs = i*2 + (heads-i) * 4;
			if(totalLegs == legs) {
				ans.push_back(i);
				ans.push_back(heads-i);
			}
		}
		return ans;
	}
};