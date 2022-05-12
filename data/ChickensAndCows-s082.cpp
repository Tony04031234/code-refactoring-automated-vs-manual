#include <vector>
#include <iostream>

using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs);
	
};

vector<int> ChickensAndCows::howMany(int heads, int legs){
	int chicken;
	int cow;
	vector<int> empty;
	vector<int> zero {0,0};
	if(heads == 0 && legs == 0) {return zero;}
	if(heads == 0 && legs != 0) {return empty;}
	if(heads != 0 && legs == 0) {return empty;}
	if(heads == 1 && legs != 4) {return empty;}
	if(heads == 1 && legs != 2) {return empty;}
	if(heads >= legs) {return empty;}

	cow = (legs / 2) - heads;
	if(legs % 2 != 0) {return empty;}
	if(cow < 0) {return empty;}
	if(cow > heads) {return empty;}
	else{
	chicken = heads - cow;
	vector<int> count {chicken, cow};
	return count;

	}



}