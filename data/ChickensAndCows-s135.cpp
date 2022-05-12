#include <vector>

class ChickenAndCows
{
public:
	std::vector<int> howMany(int heads, int legs){
		std::vector<int> result;
		for (int i=0; i<=heads; i++){
			if ((i*4+(heads-i)*2)==legs){
				result.push_back(heads-i);
				result.push_back(i);
				return result;
			}
		}
		return result;
	}
};