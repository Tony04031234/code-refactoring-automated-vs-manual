#include <vector>

using namespace std;

class ChickensAndCows
{
	public:
	vector<int> howMany( int heads, int legs )
	{
		vector<int> ChickenAndCow;
		int Cows, Chickens;
		int remainder;
		int condition;


		if ( legs % 2 == 0)
		{
			Cows = legs / 4;
			remainder = legs % 4;
			Chickens = remainder / 2;
			while ( remainder % 2 != 0 || Cows + Chickens != heads)
			{
				Cows--;
				Chickens += 2;
				if ( Cows < 0 )
				{
					return ChickenAndCow;
				}
			}
			ChickenAndCow.push_back(Chickens);
			ChickenAndCow.push_back(Cows);
			return ChickenAndCow;
		}
		else
		{
			return ChickenAndCow;
		}


		return ChickenAndCow;
	}
};
