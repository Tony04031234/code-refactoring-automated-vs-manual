#include <iostream>
#include <vector>
using namespace std;


class ChickensAndCows
{
	public :
	vector<int> howMany(int heads, int legs)
	{
		vector<int> Numbers;
		int chicken=0;
		int cow=0;
		if(heads*2 ==legs)
		{
			Numbers.push_back(heads);
			Numbers.push_back(0);
			return Numbers;
		}

		else if(heads*4==legs)
		{
			Numbers.push_back(0);
			Numbers.push_back(heads);
			return Numbers;
		}

		else if(heads*4<legs || ((heads*4)-legs)%2 !=0)
		{
			return Numbers;
		}
		else
		{
			cow=heads;
			int assumeallcow=cow*4;
			int range=assumeallcow-legs;
			chicken=range/2;
			cow=heads-chicken;
			if(chicken<0 || cow<0)
			{
				return Numbers;
			}
			else
			{
				Numbers.push_back(chicken);
				Numbers.push_back(cow);
				return Numbers;
			}

		}
	}

};