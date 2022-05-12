#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs){
		vector<int> res;
		if(heads == 0 && legs == 0){
			res.push_back(0);
			res.push_back(0);
			return res;
		}
		int chickens = 0;
		int cows = 0;
		while (heads>0){
			if(legs%4!=0 || legs/4!=heads){
				if(legs<2){
					return res;
				}
				heads--;
				chickens++;
				legs-=2;

			} else {
				break;
			}
		}
		if(heads == 0 && legs>0){
			return res;
		}
		
		cows = legs/4;
		res.push_back(chickens);
		res.push_back(cows);
		return res;
	}
};