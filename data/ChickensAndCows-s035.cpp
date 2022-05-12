#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs){

		vector<int> thismany;

		int chickenleg = 2;
		int cowleg = 4;
		int chickens = 0;
		int cows = 0;

		bool check = false; 

		int x = 0;
		int counter= 0;

		if( heads == 0 && legs == 0){

			thismany.push_back(0);
			thismany.push_back(0);
			return thismany;
		}

		if(legs/cowleg == heads && legs%cowleg == 0){

			thismany.push_back(0);
			thismany.push_back(heads);

			return thismany;

		}
		if(legs/chickenleg == heads && legs%chickenleg == 0){

			thismany.push_back(heads);
			thismany.push_back(0);
			return thismany;

		}
		if(heads*4 < legs)
		{
			thismany.clear();
			return thismany;
		}

		if (heads*2 > legs)
		{
			thismany.clear();
			return thismany;
		}
		if (legs%2 != 0)
		{
			thismany.clear();
			return thismany;
		}


		for(int i = 0; i < heads; i++){

			chickens += 2;
			counter++;

			if((legs - chickens)%4 == 0){
				cows = (legs-chickens)/4;
				if(cows + counter == heads){
					thismany.push_back(counter);
					thismany.push_back(cows);
					return thismany;
				}
			}

		}

		return thismany;
		
	}
	
	
};