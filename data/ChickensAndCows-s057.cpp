#include <iostream>
#include <vector>

using namespace std;


class ChickensAndCows {
	
	public:

	vector<int>howMany( int heads, int legs){

		int fourRem = legs % 4;
		vector<int> count;
		int cows = 0; 
		int chickens = 0;


		if (fourRem == 0)		//cows
		{
			if (heads >= (legs/4))
			{
				cows = legs/4;
				legs = legs/4;
				heads = heads - cows;
			}
			cout << cows << " "<< endl;
			
		}

		if (fourRem % 2 == 0)		//chickens
		{
			if (heads >= (legs/2))
			{
				chickens = legs/2;
				legs = legs/2;
				heads = heads - chickens;
			}
			cout << chickens << " "<< endl;
			
		}
		
		else if(legs == 0 || heads == 0){
			count.push_back(0);
			count.push_back(0);
		}


		count.push_back(chickens);
		count.push_back(cows);
					
		return count;
	}

};