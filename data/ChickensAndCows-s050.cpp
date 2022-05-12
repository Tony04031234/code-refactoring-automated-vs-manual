#ifndef CHICKENSANDCOWS_H
#define CHICKENSANDCOWS_H

#include <math.h>
#include <vector>
#include <iostream>

class ChickensAndCows
{
public:
	std::vector<int> howMany(int heads, int legs)
	{
		std::vector<int> chicksCows;
		if (legs%2==1)
		{
			return chicksCows;
		}
		int remainLegs = legs-heads*2;
		if (remainLegs%2==1)
		{
			return chicksCows;
		}
		int chicks = (legs-remainLegs*2)/2;

		int cows = heads-chicks;
		if (chicks<0 || cows<0)
		{
			return chicksCows;
		}
		// cows = cows/2;
		// chicks = chicks-cows;
		chicksCows.push_back(chicks);
		chicksCows.push_back(cows);
	}
};

#endif