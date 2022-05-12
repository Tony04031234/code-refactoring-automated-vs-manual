#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads,int legs){
		int cows;
		int chickens;
		int headcount = heads;
		int legcount = legs;
		vector<int> empty;

		while(headcount>0){
			if(legcount%2==1){
			cout << " " << endl;
			return empty;
			}
			cows = cows+1;
			headcount = headcount-1;
			legcount = legcount-4;
			if((legcount/2)==headcount){
				chickens = chickens + (legcount/2);
				headcount=0;
			}
			
			
		}
		if (chickens*2+cows*4==legs){
			vector<int> res = {chickens,cows};
			cout << chickens << " " << cows << endl;
			return res; 
		}
		else{
			return empty;
		}

	}
};