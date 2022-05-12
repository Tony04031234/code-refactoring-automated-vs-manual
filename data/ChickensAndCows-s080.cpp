#include<iostream>
#include<vector>
using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads,int legs)
	{
		//Returns {NumChickens,NumCows}
		int numChickens=heads;
		int numCows=0;

		//Vector to return. 
		vector<int> totals;
		if(legs<heads*2 || legs>heads*4)
		{
			return totals;
		}
		while(heads<legs/2)
		{
			numCows++;
			numChickens--;
			legs=legs-2;
		}
		if(numChickens>=0)
		{
			totals.push_back(numChickens);
			totals.push_back(numCows);
		}
		cout<<totals[0]<<" "<<totals[1]<<endl;
	return totals;
	}
};

