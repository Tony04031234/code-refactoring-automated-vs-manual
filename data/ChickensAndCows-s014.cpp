#include <vector>

using namespace std;

class ChickensAndCows{
	public:
	vector<int> howMany(int heads, int legs){
		vector<int> res;
		int x = heads;
		int y = legs;

		int ch;
		int co;

		co = (y-2*x)/2;
		ch = x -co;

		if((y-2*x)%2 != 0){
			return res;
		} else if( co < 0 || ch < 0){
			return res;
		} else {
			res.push_back(ch);
			res.push_back(co);
			return res;
		}
	}
};