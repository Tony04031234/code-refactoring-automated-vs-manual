#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class ChickensAndCows {
public:
vector<int> howMany(unsigned int heads, unsigned int legs){
	unsigned int cows=0;
	unsigned int chicks=0;
	while(heads>=0){

		if(heads<=0){
			break;
			legs=-1;
		}
		if((legs-4)>=0){
			legs-=4;
			heads-=1;
			cows++;
		}else if((legs-2)>=0 &&legs<4 ){
			legs-=2;
			heads-=1;
			chicks++;
		}
		if(heads==1 && legs==0){
			heads-=1;
			cows-=1;
			chicks+=2;
		}
		//cout<<legs<<endl;
	}
	vector<int> a;
	if(legs==0 || legs>cows+chicks){
		a.push_back(chicks);
		a.push_back(cows);
	}
	return a;
}
};