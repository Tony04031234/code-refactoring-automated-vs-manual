#pragma once
#include <vector>
#include <iostream>
using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs){

					
		vector<int> animals;
		
		double h_double = double(heads);
		double l_double = double(legs);
		double cows;
		double chickens;

		
		cows = (l_double-2*h_double)/2;

			
		if (round(cows)==cows && cows <= heads && cows >= 0 )
		{
		 	chickens = heads-cows;
			animals.push_back(int(chickens));
			animals.push_back(int(cows));
		}

		return animals;
	}
};