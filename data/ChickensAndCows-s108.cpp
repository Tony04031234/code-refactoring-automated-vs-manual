#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

class ChickensAndCows {
public:
	std::vector<int> howMany(int heads, int legs) {
		std::vector<int> count;
		int chickens = 0;
		int cows = 0;
		// std::cout << "Heads: " << heads << std::endl;
		// std::cout << "Legs: " << legs << std::endl;

		if(legs %2 != 0) {	//Base case
			//std::cout << "Odd number of legs" << std::endl;
			return {};
		}

		// if(legs %heads == 0) {	//Base case
		// 	cows = heads;
		// 	//std::cout << "Cows: " << cows << std::endl;
		// 	count.push_back(chickens);
		// 	count.push_back(cows);
		// }

		if(heads == 0 || legs == 0) {	//Base case
			count.push_back(0);
			count.push_back(0);
			return {};
		}

		if(legs < heads) {
			// std::cout << "Legs < Heads" << std::endl;
			return {};
		}

		while(legs %4 == 0 && legs > 0) {	//Causing EOF error but working locally, temporarily comment out
			// std::cout << "Testing cows" << std::endl;
			cows++;
			legs -= 4;
			// std::cout << "Legs: " << legs << std::endl;
			heads -= 1;
			// std::cout << "Heads: " << heads << std::endl;
			// std::cout << "Adding cow" << std::endl;
		}
		count.push_back(cows);
		// std::cout << "\n";
		// std::cout << "Heads: " << heads << std::endl;
		// std::cout << "Legs: " << legs << std::endl;
		while(legs %2 == 0 && legs > 0) {
			// std::cout << "Testing chickens" << std::endl;
			chickens++;
			legs -= 2;
			heads -= 1;
			// std::cout << "Adding chicken" << std::endl;
		}
		count.push_back(chickens);
		std::reverse(count.begin(), count.end());

		if(heads < 0) {
			return {};
		}

		// return count;
		return {};
	}
};