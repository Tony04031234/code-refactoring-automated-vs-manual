#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "math.h"

using namespace std;

class ChickensAndCows
{
public:
	vector <int> howMany(int heads, int legs)
	{
		//int four = 4;
		//int two = 2;
		//int total_legs = 0;
		//int chicken_count = 0;
		//int iterator = 0;
		//int res = 0;

		int ho = 0;

		//cout << heads << " " << legs << endl;

		//cout << heads * 4 << endl;


		vector <int> result;

		int copy_head = heads;
		while(heads > 0 )
		{
			int total_legs = heads * 4;

			//cout << total_legs << " oi " << endl;
			if (total_legs == legs && heads == copy_head)
			{
				//cout << " in 1" << endl;
				ho = heads;
				break;
			}

			else if (total_legs >= legs)
			{
				//cout << " in 2" << endl;
				heads--;
			}

			else if ((legs - total_legs) % 2 == 0)
			{
				//cout << " in 3" << endl;
				ho = heads;
				break;
			}
			else
			{
				//cout << " in 4" << endl;
				heads--;
			}

			//heads--;

			

			// cout << total_legs << endl;
			// cout <<  heads << endl;
			// cout << ho << endl << endl;
		}

		//cout << ho << endl;

		if (heads <= 0 && ho * 4 != legs)
		{
			vector < int> empty;
			empty.push_back(1);
			//empty.push_back(2);
			//cout << " in 5 " << endl;
			//result 
			//result.clear();
			//cout << "here" << endl;
			//empty.clear();
			return empty;
		}
		else if(((ho*4) + ((copy_head - ho)*2))   !=  legs)
		{
			vector < int> empty;
			empty.push_back(1);
			//empty.push_back(2);
			//cout << " in 5 " << endl;
			//result 
			//result.clear();
			//cout << "here" << endl;
			//empty.clear();
			return empty;
		}
		else
		{
			//cout << " nah " << endl;
		int cows = ho;
		int chicken = copy_head - ho;

		result.push_back(chicken);
		result.push_back(cows);
		return result;
		}

	}
};