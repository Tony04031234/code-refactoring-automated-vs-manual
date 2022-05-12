#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "math.h"

using namespace std;

class ChickensAndCows
{
public:
	vector<int>howMany(int h,int l){
		int x  =	0;
		int y  =	0;
		vector<int> ans;

		y  = (l-2*h)/2;
		x = h - y;

		if(h==0 && l == 0){
			ans.push_back(0);
			ans.push_back(0);
			return ans;
		}

		else if(y>h || x > h){
			return ans;
		}

		else if( l % 2 != 0 ){
			return ans;
		}
		else{
		ans.push_back(x);
		ans.push_back(y);

		return ans;

	}
}
	
};