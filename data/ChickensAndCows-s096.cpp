#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector <int> howMany(int heads,int legs){
	vector <int> result={};
	int i=0;
	int j=0;
	for(i=0;i<heads;i++){
		for(j=0;j<heads;j++){
			if(((2*i)+(4*j)==legs)&&((i+j)==heads)){
				//a=i;
				 result={i,j};
				// std::cout<<i<<" "<<j;
				// result[0]=i;
				// result[1]=j;
			}
		}
	}
	return result;
	}
};