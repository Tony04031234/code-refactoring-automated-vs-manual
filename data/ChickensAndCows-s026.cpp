#include <vector>
using namespace std;
class ChickensAndCows {
public:
	vector<int> howMany(int heads,int legs) {
	vector<int> toReturn;
	toReturn.push_back(0);
	toReturn.push_back(0);
	for(int i=0;i<heads;i++) {
		if(legs%4==0) {
			while(heads>0){
				toReturn.at(1)=toReturn.at(1)+1;
				legs=legs-4;
				heads=heads-1;
			}
		}
		if (heads-1>=0 && legs-2>=0) {
			toReturn.at(0)=toReturn.at(0)+1;
			heads=heads-1;
			legs=legs-2;
		}
		if (heads-1>=0 && legs-4>=0) {
			toReturn.at(1)=toReturn.at(1)+1;
			heads=heads-1;
			legs=legs-4	;
		}
		if (heads-1==0 && legs-2==0) {
			toReturn.at(0)=toReturn.at(0)+1;
			heads=heads-1;
			legs=legs-2;
		}
		if (heads-1==0 && legs-4==0) {
			toReturn.at(1)=toReturn.at(1)+1;
			heads=heads-1;
			legs=legs-4;
		}
	}
	return toReturn;
}
};