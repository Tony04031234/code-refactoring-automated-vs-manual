#include <iostream>
#include <string>
#include <vector>
using namespace std;
class ChickensAndCows
{
  public:
  	vector<int>howMany(int heads,int legs){
  		int x=0;
  		int y=0;
  		// x+y=heads;svn 
  		// 2*x+4*y=legs;

  		int temp=legs-(2*heads);
  		if(temp%2!=0){
  			vector<int> empty;
  			return empty;
  		}

  		y=temp/2;
  		x=heads-y;
  		if(heads==0){
  			vector<int> zero;
  			zero.push_back(0);
  			zero.push_back(0);
  			return zero;
  		}else if(y+x!=heads || x<0 || y<0 || legs<4 ){
  			vector<int> empty;
  			return empty;
  		}
  		



  		vector<int> result;
  		result.push_back(x);
  		result.push_back(y);
  		return result;
  	}
};
