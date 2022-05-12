#include <iostream>
#include <vector>
#include <string>

using namespace std;


class ChickensAndCows
{
public:
	vector<int> howMany(int heads, int legs){
		vector<int> sum;
		int count;
		int add;
		for(int i=0; i<=heads; i++){
			for(int j=0; j<=heads-i; j++){
				count = i*2 + j*4;
				add = i+j;
				if(count == legs && add == heads){
					sum.push_back(i);
					sum.push_back(j);
				}
			}
		}
		return sum;
	}
};

