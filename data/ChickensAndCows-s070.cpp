#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows{
public:
	
	vector<int> howMany(int heads, int legs){

		vector<int> v;

		int chicken = 0;
		int cow = 0;

	/*	if (2*heads == legs){
			
			chicken = heads;

		}else if (4*heads == legs){

			cow = heads;

		}else */if ( 4*heads >= legs && 2*heads <= legs && legs%2 == 0 ){

			int sub = legs - heads*2;

			cow = sub/2;

			chicken = heads - cow;

		}else{

			//cout<<"check"<<endl;
			cout<<""<<endl;
			return v;

		}

		v.push_back(chicken);
		v.push_back(cow);
		cout<<v[0]<<" "<<v[1]<<endl;

		return v;

	}
};



/*int main(){

	int heads = 10;
	int legs = 40;

	vector<int> v = howMany(heads, legs);
	//cout<<v[0]<<" "<<v[1]<<endl;

	return 0;

}*/