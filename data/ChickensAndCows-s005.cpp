#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows{

	public:
	vector<int> howMany(int heads, int legs){

		int remain;

		int chickens = heads;
		int cows = 0;

		vector<int> result;

		while(chickens>=0){

			remain = (chickens*2)+(cows*4)-legs;
			if(remain==0){
				cout<<"chickens: "<<chickens<<", cows: "<<cows<<endl;
				result.push_back(chickens);
				result.push_back(cows);
				break;
			}				

			chickens--;
			cows++;
			
		}

		return result;

	}

};