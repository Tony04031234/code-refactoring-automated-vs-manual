#include <vector>
#include <iostream>

using namespace std; 

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		if (heads == 0 && legs == 0)
		{
			vector<int> v;
			v.push_back(0);
			v.push_back(0);
			return v;
		}

		for (int i = heads; i >= 0; --i)
		{
			int temp_heads = heads;
			int temp_legs = legs;

			int count = i;

			while(temp_heads != 0)
			{
				//cow
				if (count > 0)
				{
					temp_heads--;
					temp_legs -= 4;
					count--;
				}
				else //chicken
				{
					temp_heads--;
					temp_legs -= 2;
				}
			}

			if (temp_legs == 0)
			{
				vector<int> v;
				v.push_back(heads-i);
				v.push_back(i);
				return v;
			}
		}

		vector<int> v;
		return v;

	}
	
};