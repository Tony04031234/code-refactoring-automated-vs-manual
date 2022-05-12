#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows
{
public:
	vector<int> howMany(int heads,int legs){
		vector<int> v;
		int cows = 0;
		int Chickens = 0;
		if (legs%4 == 0 && legs/4 == heads){
			v.push_back(0);
			v.push_back(legs/4);
			return v;
		}
		else if (heads == 2 && legs == 4)
		{
			v.push_back(2);
			v.push_back(0);
			return v;
		}
		else if (heads == 1 && legs == 2)
		{
			v.push_back(2);
			v.push_back(0);
			return v;
		}
		else if (legs/2 == heads)
		{
			v.push_back(heads);
			v.push_back(0);
			return v;			
		}
		while(cows<heads){
			cows++;
		}
		while(cows*4+Chickens*2 > legs){
			cows--;
			Chickens++;
		}
		if (Chickens+cows == heads && cows*4+Chickens*2 == legs && Chickens > 0 && cows > 0)
		{

			v.push_back(Chickens);
			v.push_back(cows);
			return v;
		}
		else{
			return v;
		}

	}
	
};