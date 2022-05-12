#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs){
		bool feasible = false;
		for(int cow=0; cow<=heads; cow++){
			int totalLeg = cow*4 + (heads-cow)*2;
			if(totalLeg == legs){
				return {heads-cow, cow};
				feasible = true;
				break;
			}
		}
		if(feasible == false){
			return {};
		}
	}
};