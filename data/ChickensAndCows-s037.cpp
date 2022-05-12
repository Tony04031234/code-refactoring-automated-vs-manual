#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

class ChickensAndCows{
	public:
		vector<int> howMany(int heads, int legs){
			int TotalHeads = heads;
			int TotalLegs = legs;
			vector<int> ret;
			int chickens = 0;
			int cows = 0;
			
			if(legs/heads == heads){
				chickens = 0;
				cows = heads;
				ret.push_back(chickens);
				ret.push_back(cows);
				return ret;
			}

			for(int i = 1; i <= TotalLegs/TotalHeads; i++){				
				if(heads > 1 && legs > 2){
					chickens++;
					legs = legs - 2;
					heads--;
				}
			}

			TotalHeads = heads;
			TotalLegs = legs;

			for(int i = 1; i <= TotalHeads; i++){				
				if(heads > 1 && legs > 4){
					cows++;
					legs = legs - 4;
					heads--;
				}
			}
			ret.push_back(chickens);
			ret.push_back(cows);

			return ret;
		}	


};