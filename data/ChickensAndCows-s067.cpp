#include <string>
#include <vector>
#include <iostream>


using namespace std;

class ChickensAndCows{

public:
//code submitted 
/*
	int ans;
	int rC;
	int legCount(int h, int l){

			ans = (l/2);
			if (ans > h){
				rC++;
				legCount(h - 1, l - 4);
			}
			else{
				return rC;
			}
		}



	vector<int> howMany(int head, int legs){
		vector<int> v;

		if((head < legs) || ( legs % 2 == 1 )){
			return v;

		}


		int cow = 0;
		
		int chicken = 0;


			ans = legCount(head, legs);

			chicken = legs/2;

			v.push_back(chicken);
			v.push_back(cow);

			return v;


		


	}
	*/

	vector<int> howMany(int head, int legs){
		//cout << "heads: " << head << endl;
		//cout << "legs: " << legs << endl;

		vector<int> v;
		int chicken = 0;
		int cow = 0;


		//edge case
		
		if( (head * 4 < legs || head * 4 > legs) && (head * 2 < legs || head * 2 > legs) ){
			//cout << "'empty'" << endl;
			return v;
		}

		/*		
		if( (head * 4) < legs ){
			//cout << "'empty set'" << endl;
			return v;
		}
		*/
		if(head * 4 == legs){
			cout << 0 << head << endl;
				v.push_back(0);
				v.push_back(head);
				return v;
		}


		if( (head * 4 < legs || head * 4 > legs) && (head * 2 < legs || head * 2 > legs) ){
			return v;
		}

		int totalHeads = head;
		for(int i = 0; i < totalHeads; i++){

			if (legs / 4 == head){
				//cout << "Legs = " << legs << endl;
				cow++;
				legs -= 4;
				head--;
			}
			else{
				chicken++;
				legs -= 2;
				head--;
			}	
		}
		v.push_back(chicken);
		v.push_back(cow);

		//cout << chicken << cow << endl;
		return v;

	}
};