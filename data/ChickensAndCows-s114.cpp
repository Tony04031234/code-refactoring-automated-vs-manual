#include <iostream>
#include <vector>

using namespace std;

int cowA = -1;
int chickenA = -1;

class ChickensAndCows {
public:
	vector<int> howMany(int heads, int legs) {
		cowA = -1;
		chickenA = -1;
		if (legs >= heads) {
			manyCall (heads, legs, 0, 0);
		}
		vector<int> ans;
		if (cowA != -1 && chickenA != -1) {
			ans.push_back(chickenA);
			ans.push_back(cowA);
		}
		return ans;
	}

	void manyCall(int heads, int legs, int chicken, int cows) {

		int curLegs = (chicken*2)+(cows*4);
		int curHeads = chicken+cows;
		//cout << cows << " " << chicken << endl;
		if (curHeads == heads) {
			if (curLegs == legs) {
				cowA = cows;
				chickenA = chicken;
			}
			return;
		}
		if (curLegs > legs) {
			return;
		}
		if (curHeads > heads) {
			return;
		}
		if ((legs-curLegs)%4 == 0) {
			manyCall(heads, legs, chicken, cows+1);
		} else {
			manyCall(heads, legs, chicken+1, cows);
		}
	}
};