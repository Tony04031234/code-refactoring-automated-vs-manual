#include <iostream>
#include <string>
#include <vector>

class ChickensAndCows{
	public:
	std::vector<int> howMany(int heads, int legs){
		//1x + 1y = 3
		//2x + 4y = 8

		// std::cout << "heads: " << heads << " legs: " << legs << std::endl;

		std::vector<int> animals;

		int numOfAnimals = heads;
		int numOfCows = (legs - (2 * heads)) / 2;
		int numOfChickens = numOfAnimals - numOfCows;

		if(numOfChickens >= 0 && (legs - (2 * heads)) % 2 == 0 && numOfCows >= 0){
			animals.push_back(numOfChickens);
			animals.push_back(numOfCows);
		}

		return animals;
	}
};