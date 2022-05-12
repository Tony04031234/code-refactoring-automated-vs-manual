#ifndef CHICKENS_H
#define CHICKENS_H

#include <vector>
#include <iostream>

using namespace std;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs) {
		vector<int> count;
		if (legs %2 == 1) {
			return count;
		}
		int a = legs/2 - heads;
		if (a > heads) {
			return count;
		}
		if (heads*2 > legs) return count;
		count.push_back(heads-a);
		count.push_back(a);
		return count;
	}
};
#endif