#include <vector>
using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		int cows = legs/2 - heads;
		int chichens = heads - cows;

		vector<int> total;

		if ( cows < 0 || chichens < 0 || legs%2 != 0 )
		{
			return total;
		}

		total.push_back(chichens);
		total.push_back(cows);

		return total;
	}
};