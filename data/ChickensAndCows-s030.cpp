#include <iostream>
#include <vector>

using namespace std;


class ChickensAndCows
{
  public:
  std::vector <int> howMany(int heads, int legs)
  {
  	vector<int> res;
  	int l = legs;

  	if(legs%4==0){
  		res[0]=0;
  		res[1]=(legs/4);
  		return res;
  	}
/*
  	for(int i=0; i<heads;i++)
  	{
  		while(l/heads>=0){
  			//chickens


  		}
  	}
*/




  }

};