#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class ChickensAndCows{
public:
	vector<int> howMany(int heads,int legs){
		int chicken=0;
		int cow=0;
        vector<int> res;
        if (legs%2==1){
        	return res;
        }
		chicken=(heads*4-legs)/2;
		cow=heads-chicken;
		if (chicken<0||cow<0){
			return res;
		}
		res.push_back(chicken);
		res.push_back(cow);
		return res;
	}
};

