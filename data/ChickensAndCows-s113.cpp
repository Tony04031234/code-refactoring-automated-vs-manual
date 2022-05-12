#include <vector>
using namespace std;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs){
		int cow = heads;
		int chk = 0;
		while((chk>=0)&&(cow>=0)){
			if((cow*4 + chk*2)==legs){
				vector<int> res;
				res.push_back(chk);
				res.push_back(cow);
				return res;
			}
			cow--;
			chk++;
		}

		vector<int> empty;
		return empty;
	}
	
};