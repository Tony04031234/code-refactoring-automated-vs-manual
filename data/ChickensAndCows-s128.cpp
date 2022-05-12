#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class ChickensAndCows{

	public:
	vector<int> howMany(int heads,int legs){

        int chickens=0;
        int cows=0;
        vector<int> count;
        cows=(legs-2*heads)/2;
        chickens=heads-cows;
       // cout<<"heads"<<heads<<endl;
       // cout<<"legs"<<legs<<endl;
       // cout<<"chi"<<chickens<<endl;
        //cout<<"cow"<<cows<<endl;

        if((chickens+cows==heads)&&(2*chickens+4*cows==legs)&&(cows>=0)&&(chickens>=0)){
            count.push_back(chickens);
           count.push_back(cows);
        }
        //if(count.size()!=0){
        //cout<<count[0]<<endl;
        //cout<<count[1]<<endl;
   // }else{
     //   cout<<"dsdsf"<<endl;
   // }



		return count;

	}
};