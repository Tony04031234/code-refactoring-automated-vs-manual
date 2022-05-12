#include <string>
#include <vector>
using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		int chickens;
		int cows;
		vector<int> ans;
		cows = (legs - 2 * heads) / 2;
		chickens = heads - cows;
		if (chickens >= 0 && legs % 2 == 0 && cows >= 0)
		{
			ans.push_back(chickens);
			ans.push_back(cows);
		}
		return ans;
	};
};