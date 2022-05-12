#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs){
		vector<int> animals;
		int chickens=0;
		int cows=0;
		bool works=false;
		int count;

		if(heads>legs){
			return animals;
		} else if(heads==0 && legs==0){
			animals.push_back(0);
			animals.push_back(0);
			return animals;
		}


		while(legs/4!=heads && fmod(legs,4.0)!=0){
			if(legs%4!=0){
				chickens++;
				legs=legs-2;
			}

			count++;
			if(count>legs){
				return animals;
			}
		}



		cows=legs/4;

		animals.push_back(chickens);
		animals.push_back(cows);

		for(int i=0;i<2;i++){
			cout << animals[i] << endl;
		}
		
		return animals;
	}
};