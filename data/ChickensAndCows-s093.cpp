#include <vector>
#include <iostream>


using namespace std;

class ChickensAndCows
{
public:
	std::vector<int> howMany(int heads,int legs){
		std::vector<int> number;
		int legcount=legs;
		int headscount=heads;
		int Chicken=0;
		int cow=0;

		if(legs==0 && heads==0){
			return number;
		}
		else{
			while(1){
				if(headscount==0){
					break;
				}
				if(cow*4<legs && headscount!=0){
					cow++;
					headscount--;
					legcount-=4;
				}
				else{
					break;
				}
			}
			// cout<<Chicken<<" "<<cow<<" "<<headscount<<" "<<legcount<<endl;
			
			for(int i=0;i<headscount;i++){
				cow--;
				headscount++;
			}
			if(headscount==0 &&legcount>0){
				return number;
			}
			legcount=headscount*4;
			// cout<<legcount<<" 123414"<<endl;
			while(legcount!=0){
				if(headscount==0){
					break;
				}
				if(Chicken*2!=legcount){
					Chicken++;
					headscount--;
					cout<<Chicken<<endl;
				}
				else{
					break;
				}
			}

		}
		if(headscount==0 &&legcount>0){
				return number;
		}
		number.push_back(Chicken);
		number.push_back(cow);
		return number;
	}	
	
};


// int main(){
// 	std::vector<int> v;
// 	ChickensAndCows a;
// 	v=a.howMany(10,42);
// 	for(int i=0;i<v.size();i++){
// 		cout<<v.at(i);
// 	}
// 	cout<<endl;

// }