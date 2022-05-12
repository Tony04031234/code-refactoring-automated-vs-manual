#ifndef CHICKENSANDCOWS_H
#define CHICKENSANDCOWS_H

#include <vector>

using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs)
	{
		vector<int> result;  // Result of method

		if (legs % 2 != 0) return result;  // If there are an odd number of legs
		
		int cowHeads = legs / 4;  // Number of cows
		int chickenHeads = 0;  // Number of chickens
		while (cowHeads >= 0)
		{
			if (4*cowHeads + 2*chickenHeads == legs && cowHeads + chickenHeads == heads)  // Solution found
			{
				result.push_back(chickenHeads);
				result.push_back(cowHeads);
				return result;
			}

			while (chickenHeads + cowHeads >= heads) cowHeads--;
			chickenHeads++;
		}

		return result;  // No solution
	}	
};

#endif