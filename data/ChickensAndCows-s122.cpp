#include <vector>
#include <iostream>
using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs){
		vector<int> animals;

		for(int i = 0 ; i<heads; i++){
			int chickens = i;
			int cows = heads-i;
			int legs_com = (cows*4)+(chickens*2);
			if(legs_com == legs){
				animals.push_back(chickens);
				animals.push_back(cows);
				return animals;
			}
		}
		return animals;
	}
};