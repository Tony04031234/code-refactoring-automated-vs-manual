#include <vector>
using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		int nChickens = 0;
		int nCows = 0;

		vector<int> results;

		if(legs % 2 != 0) return results;
		if(heads < 1 || legs < 1)
		{
			results.push_back(nChickens);
			results.push_back(nCows);
			return results;
		}

		while(legs > 0)
		{
			//all cows
			if (legs % 4 == 0 && legs / 4 == heads)
			{
				nCows = legs/4;
				results.push_back(nChickens);
				results.push_back(nCows);
				return results;
			}

			//all chickens
			if (legs / 2 == heads)
			{
				nChickens = legs/2;
				results.push_back(nChickens);
				results.push_back(nCows);
				return results;
			}

			nChickens++;
			heads--;
			legs = legs - 2;

			if(heads < 1) return results;
			if(legs < 1)	return results;
			
		}

		return results;
		
	};
};