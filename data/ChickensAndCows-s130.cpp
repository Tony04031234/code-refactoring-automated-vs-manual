#include <vector>
#include <algorithm>
#include <iostream>

class ChickensAndCows
{
public:
	std::vector<int> howMany(int heads, int legs)
	{
		std::vector<int> animals;
		int numCows = (legs-2*heads)/2;
		if (heads >= legs || (legs-2*heads)%2 == 1 || heads-numCows < 0 || numCows < 0)
		{
			return animals;
		}
		animals.push_back((heads-numCows));
		animals.push_back(numCows);
		return animals;
	}
};