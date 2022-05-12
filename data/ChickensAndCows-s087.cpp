#include <vector>

class ChickensAndCows {
public:
	std::vector<int> howMany(int numHeads, int numLegs) {
		int legs;
		int heads;
		std::vector<int> result;
		if(numHeads == 0 && numLegs == 0) {
			result.push_back(0);
			result.push_back(0);
			return result;
		}
		if(numHeads == 0 || numLegs == 0 || numLegs%2 != 0) {
			return result;
		}
		//i = chickens, j = cows 
		for(int i = 0; i < numHeads; i++) {
			legs = (i*2)+((numHeads-i)*4);
			if(legs == numLegs) {
				result.push_back(i);
				result.push_back(numHeads-i);
				return result;
			}
		}
		return result;
	}
};