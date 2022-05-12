#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

class ChickensAndCows{

public:
	vector<int> howMany( int heads, int legs ){

		vector<int> number = {};

		int cows = 0.5*legs - heads;	
		int chickens = 2*heads - 0.5*legs;

		int calcHeads = chickens + cows;
		int calcLegs = 4*cows +	2*chickens;

		if( calcHeads != heads || calcLegs != legs || chickens < 0 || cows < 0 )
			return number;

		number.push_back( chickens );
		number.push_back( cows );

		return number;
	}

};
