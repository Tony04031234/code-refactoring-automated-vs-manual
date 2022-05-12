#ifndef ChickensAndCows_hpp
#define ChickensAndCows_hpp
#include <vector>

class ChickensAndCows{

	public:
		std::vector<int> howMany(int heads, int legs){
			std::vector<int> number;
			int values[2];
			int numCows = 0;
			int numChickens = 0;
			if (legs%2 != 0){
				return number;
			}
			while (numCows*4 < legs){
				numCows++;
			}
			while ((numCows*4 + numChickens*2) != legs){
				numCows--;
				numChickens++;
			}
			if (numCows < 0 || numChickens < 0){
				return number;
			} else {
				values[0] = numChickens;
				values[1] = numCows;
				number.assign (values, values+2);
				return number;
			}
		}
};
#endif