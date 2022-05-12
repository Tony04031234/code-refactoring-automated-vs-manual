#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs)
	{
		int cows=legs-2*heads;
		cows=cows/2;
		int chickens=heads-cows;
		vector<int> count;
		if(chickens>=0 && cows>=0)
		{
			count.push_back(chickens);
			count.push_back(cows);
		}
		return count;
	}
};