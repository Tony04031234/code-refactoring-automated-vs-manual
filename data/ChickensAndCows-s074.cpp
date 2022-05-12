#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows {
	public:
		vector<int> howMany(int heads, int legs){
		vector<int> res;
	    int x, y;
	    if (legs % 2) return res;
	    y = legs / 2 - heads;
	    x = heads - y;
	    if ((x < 0) || (y < 0)) return res;
	    res.push_back(x);res.push_back(y);
	    return res;
		}
	};
