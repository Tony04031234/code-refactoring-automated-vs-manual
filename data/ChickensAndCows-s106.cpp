#include <iostream>
#include <vector>

using namespace std;


class ChickensAndCows{
public:
	std::vector<int> howMany(int heads, int legs){
		std::vector<int> retVec;
		//assume all chickens.

		if(((legs%2) != 0)){
			return retVec;
		}
		int tempLegs = (legs - (heads*2));
		int numCows = (tempLegs/2);
		if(heads-numCows < 0){
			return retVec;
		}
		if(numCows < 0){
			return retVec;
		}
		retVec.push_back(heads - numCows);
		retVec.push_back(numCows);

		return retVec;
	}
};