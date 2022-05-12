#include <iostream>
#include <vector>

#ifndef CHICKENSANDCOWS_H
#define CHICKENSANDCOWS_H

class ChickensAndCows{

public:

	std::vector<int> howMany(int heads, int legs){

		int cows = 0;
		int chickens = 0;
		std::vector<int> res = {};

		for(int i = 0; i <= heads;i++){
			cows = i;
			chickens = heads-i;

			if(((cows*4)+(chickens*2)) == legs){
				res.push_back(heads-i);
				res.push_back(i);
				return res;
			}
		}

		return res;
	}

};
#endif
