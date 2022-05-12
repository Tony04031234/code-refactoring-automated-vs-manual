#include <vector>
using namespace std;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs) {
		vector<int> result;

		// Chickens
		if (legs/2 == heads) {
			result.push_back(heads);
			result.push_back(0);
			return result;
		// Cows
		} else if (legs/4 == heads) {
			result.push_back(0);
			result.push_back(heads);
		// Odd amount of legs.
		} else if (legs % 2 != 0) {
			return result;
		} else {



			result.push_back(2);
			result.push_back(1);

		}

		return result;
	}
};