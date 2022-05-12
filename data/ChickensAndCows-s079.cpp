#ifndef CHICKENSANDCOWS_HPP
#define CHICKENSANDCOWS_HPP

#include <vector>

using namespace std;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs){
		int nCows;
		int nChickens;


		nCows = (legs - 2*heads)/2;
		nChickens = heads - nCows;

		vector<int> results;
		
		if(nCows >= 0 && nChickens >= 0 && legs%2==0){		
			results = {nChickens,nCows};
		}
		return results;
	}
};

#endif