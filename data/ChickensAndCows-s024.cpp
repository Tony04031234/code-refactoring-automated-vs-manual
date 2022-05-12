#include <vector>

using namespace std;

class ChickensAndCows {
	public:
	vector<int> howMany(int heads, int legs) {
		vector<int> answer;
		int maxLegs = heads * 4;
		int minLegs = heads * 2;
		
		//too many legs
		if (legs > maxLegs) return answer;

		//too little legs
		if (legs < minLegs) return answer;

		//abnormal animals not allowed
		if (legs%2 != 0) return answer;

		int cows = 0.5*(legs - (2*heads));
		int chickens = heads - cows;
		answer.push_back(chickens);
		answer.push_back(cows);
		return answer;
	}
};



