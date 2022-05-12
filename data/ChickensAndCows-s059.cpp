#include <vector>
#include <iostream>

using namespace std;

vector<int> result(2);
int cows = 0;
int chickens = 0;

class ChickensAndCows{
	public:

		vector<int> howMany(int heads, int legs)
		{
			
			
			if(heads == 0){
				return result;
			}

			else
			{
				if(legs - 4 != 0){
					cows++;
					result.at(0) = cows;
					return howMany(heads -= 1, legs -= 4);

				}

				if(legs - 4 == 0)
				{
					chickens++;
					result.at(1) = chickens;
					return howMany(heads -= 1, legs -= 2);

				}
			}

		}
		

};