#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int head,int legs){
		int chicken=0;
		int cow=0;
		vector<int> total;
		if(legs/4==head){
			chicken=0;
			cow=legs/4;
			total.push_back(chicken);
			total.push_back(cow);
		}
		if(legs/2==head){
			chicken=legs/2;
			cow=0;
			total.push_back(chicken);
			total.push_back(cow);
		}
		if(legs/4!=head || legs/2!=head){
			head=head-(legs/4)+1;
			chicken=head;
			cow=legs-(chicken*2)/4;
			total.push_back(chicken);
			total.push_back(cow);
		}
		if(legs==0 && head==0){
			chicken=0;
			cow=0;
			total.push_back(chicken);
			total.push_back(cow);
		}
		else{
			total={};
		}
		return total;
	}
};
