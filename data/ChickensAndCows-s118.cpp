#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs){
		/*int numChickens = 0;
		int numCows = 0;
		vector<int> animals;

		int sum = 0;
		while (sum <= legs){
			if (sum == legs){
				animals.push_back(numChickens);
				animals.push_back(numCows);
				return animals;
			}

			sum = sum+4;
			numCows = numCows + 1;
			if (sum > legs){
				sum = sum-2;
				numCows = numCows -1;
				numChickens = numChickens + 1;
			}
		}
		return animals;*/

		int i = 0;
		int j = heads;
		int sum;
		vector<int> animals;

		for (i; i <= heads; i++){
			sum = i*2 + j*4;
			if (sum == legs){
				animals.push_back(i);
				animals.push_back(j);
				return animals;
			}
			j = j -1;
		}
		if ((heads == 0) && (legs == 0)){
			animals.push_back(0);
			animals.push_back(0);
		}
		return animals;

	}
};