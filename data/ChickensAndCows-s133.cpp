#include <vector>
using namespace std;

class ChickensAndCows{
public:
	vector <int> howMany (int heads, int legs){
		vector <int> result;
		int chicken = 0;
		int cow = 0;

		chicken = (heads*4-legs)/2;
		cow = heads - chicken;
		result.push_back(chicken);
		result.push_back(cow);


		if( (legs%2!=0) || (heads*4<legs) || (cow<0) || (chicken<0)){
			result.clear();
		}

		return result;
	}
};

