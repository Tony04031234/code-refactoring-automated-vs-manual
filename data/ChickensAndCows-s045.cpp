#include <vector>

using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		int chickens = 0, cows = 0;
		vector<int> animals;

		if(heads*2==legs)
		{
			animals.push_back(heads);
			animals.push_back(0);
			return animals;
		}
		if(heads*4==legs)
		{
			animals.push_back(0);
			animals.push_back(heads);
			return animals;
		}

		int temp = heads*2;
		chickens = heads;

		if(temp>legs)
		{
			return animals;
		}

		while(temp<legs)
		{
			temp+=2;
			cows++;
			chickens--;
		}

		if(cows*4+chickens*2!=legs || chickens<0)
		{
			return animals;
		}

		animals.push_back(chickens);
		animals.push_back(cows);
		return animals;
	}
};