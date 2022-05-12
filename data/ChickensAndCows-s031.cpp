#include <iostream>
#include <vector>

class ChickensAndCows{
public:
	std::vector<int> howMany(int heads, int legs)
	{
		//position 1 chickens position 2 cows
		std::vector<int> numAnimals;
		std::vector<int> v;
		numAnimals.push_back(legs/2);
		numAnimals.push_back(0);
		int tempLegs 	= legs;
		int counter 	= 1;

		if(legs%2 == 1)
		{
			return v;
		}

		std::cout <<tempLegs <<std::endl;

		while ((numAnimals.at(0)+numAnimals.at(1))!= heads)
		{
			if(numAnimals.at(0) <1)
			{
				return v;
			}

			numAnimals.at(1) ++;
			numAnimals.at(0) = numAnimals.at(0) - 2;
		}

		if (numAnimals.at(0) <0)
		{
				return v;
		}

		return numAnimals;
	}

};