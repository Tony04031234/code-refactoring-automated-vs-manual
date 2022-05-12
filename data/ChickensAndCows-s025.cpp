#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector <int> howMany(int heads, int legs){
		vector<int> array = {0,0}; 
		vector <int> a;
		int runHeads = 0;
		int cowLegs = 0;
		int chickenLegs = 0;
		if (heads == 0 && legs == 0){
			return array;
		} else if (heads == 0 || legs == 0){
			return a;
		}
		for (int i = heads; i >= 0; i--){
			cowLegs = 4*i;
			chickenLegs = 2*(heads-i);
			if (cowLegs+chickenLegs == legs){
				array[0] = heads-i;
				array[1] = i;
				return array;
			}
		}
		return a;
	}
};