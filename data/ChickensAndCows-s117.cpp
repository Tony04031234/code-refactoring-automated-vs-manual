#include<vector>

class ChickensAndCows {
public:
	std::vector<int> howMany(int h, int l) {
		std::vector<int> empty;
		std::vector<int> animal;
		animal.push_back(0);
		animal.push_back(0);
		while ( h > 0 && l >= 2) {
			if (4*h==l) {
				l-=4;
				h-=1;
				animal[1]++;
				continue;
			}
			if (2*h==l) {
				l-=2;
				h-=1;
				animal[0]++;
				continue;
			}
			h-=1;
			l-=4;
			animal[1]++;
		}
		if (l != 0 || h != 0 ) {
			return empty;
		}
		return animal;
	}
};