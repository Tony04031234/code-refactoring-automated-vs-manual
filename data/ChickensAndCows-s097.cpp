#include <iostream>
#include <algorithm> 
#include <stdio.h>      
#include <math.h> 
#include <string> 
#include <vector>
using namespace std;

class ChickensAndCows{
public:
	vector<int>howMany(int heads, int legs){
		vector<int> ans;
		if(legs>heads*4 || legs<heads*2 || legs %2 != 0){
			return ans;
		}
		int a = 4*heads;
		int chicken = (a -legs)/2;
		int cow = heads - chicken;
		ans.push_back(chicken);
		ans.push_back(cow);
		return ans;
	}
};