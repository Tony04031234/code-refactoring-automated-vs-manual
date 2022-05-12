#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	vector<int>howMany(int heads,int legs){
		// int cows=0;
		// vector<int> record;
		// while(heads>=0&&legs%4!=0){
		// 	heads--;
		// 	cows++;
		// 	legs-=2;
		// }
		// record.push_back(cows);
		// record.push_back(heads);
		// return record;
		int cows=(legs-2*heads)/2;
		int chickens=heads-cows;
		// cout<<cows<<" "<<chickens;
		vector<int> record;
		if(cows<0||chickens<0){
			return record;
		}

		if((legs-2*heads)%2!=0){
			return record;
		}
		
		record.push_back(chickens);
		record.push_back(cows);
		return record;


	}
};

// int main(){
// 	ChickensAndCows test;
// 	int heads,legs;
// 	cin>>heads>>legs;
// 	vector<int> temp=test.howMany(heads,legs);
// 	for (int i = 0; i < temp.size(); ++i)
// 	{
// 		/* code */cout<<temp[i]<<endl;
// 	}
// }
