#include <iostream>
#include <vector>
#include "math.h"

using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		vector<int> output;
		double val = (legs - heads*2.0) / 2.0;
		if(val>floor(val) && val <ceil(val))
			return output;

		int num_cows = (legs - (heads*2))/2;
		int num_chickens = heads - num_cows;

		if(num_chickens < 0 || num_cows<0)
			return output;
		
		output.push_back(num_chickens);
		output.push_back(num_cows);

		return output;
	}
};