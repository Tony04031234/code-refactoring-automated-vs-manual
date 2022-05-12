#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs){
		vector<int> result;
		int chickens = 0;
		int cows = 0;
		if(heads > legs){
			return result;
		}
		if(heads == 0 || legs == 0){
			return result;
		}
		if(legs%2 != 0){
			return result;
		}
		while(heads > 0){
			if(legs % 4 == 0 && (legs/4 == heads)){
				heads--;
				legs-=4;
				cows++;
			}
			else if (legs % 2 == 0 && heads > 0){
				heads--;
				legs-=2;
				chickens++;
			}
			else{
				return result;
			}
		}
		result.push_back(chickens);
		result.push_back(cows);
		return result;
	}
};
#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs){
		vector<int> result;
		int chickens = 0;
		int cows = 0;
		if(heads > legs){
			return result;
		}
		if(heads == 0 || legs == 0){
			return result;
		}
		if(legs%2 != 0){
			return result;
		}
		while(heads > 0){
			if(legs % 4 == 0 && (legs/4 == heads)){
				heads--;
				legs-=4;
				cows++;
			}
			else if (legs % 2 == 0 && heads > 0){
				heads--;
				legs-=2;
				chickens++;
			}
			else{
				return result;
			}
		}
		result.push_back(chickens);
		result.push_back(cows);
		return result;
	}
};
