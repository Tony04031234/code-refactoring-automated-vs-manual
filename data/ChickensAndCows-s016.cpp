#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows
{
	public:
		vector<int> howMany(int heads, int legs) {

			vector<int> result;
			int cows = 0;
			int chickens = 0;
			bool solved = false;

			if (heads * 4 < legs || legs % 2 != 0)
				return result;

			while(!solved) {

				if (legs == 0 && heads != 0) {

					return result;

				} else if (legs == 0 && heads == 0) {

					solved = true;

				} else if (legs / heads == 2 && legs % heads == 0) {

					chickens = heads;
					solved = true;

				} else {

					cows++;
					legs -= 4;
					heads--;

				}

			}

			result.push_back(chickens);
			result.push_back(cows);

			return result;
		}

};