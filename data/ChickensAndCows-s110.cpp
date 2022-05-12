#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs){
		vector<int> animals;

		//check for odds
		if(legs % 2 != 0){
			return animals;
		}



		// if all are cows
		/*if(legs / heads == 4){
				animals.push_back(0);
				animals.push_back(heads);
				return animals;
			}*/

		//assume all cows at first
		int counter = 0;
		animals.push_back(0);
		animals.push_back(heads);
		while(counter < heads){
			int chickenLegs = animals[0] * 2;
			int cowLegs = animals[1] * 4;

			if(chickenLegs+cowLegs == legs){
				return animals;
			} else {
				counter++;
				animals[0]++;
				animals[1]--;
			}
		}

		animals.pop_back();
		animals.pop_back();
		//animals.clear();
		//cout << animals.size() << endl;
		return animals;

	}

};