#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ChickensAndCows
{
	public:

	vector<int> howMany (int heads, int legs)
	{
		int cows = 0, chickens = 0;

		/**
		 * Make sure there is enough legs for all animals to
		 * be chickens.
		 */
		if (heads > legs / 2 || legs % 2 != 0)
			return {};

		/**
		 * Check for all cows or all chickens.
		 */
		if (legs % 4 == 0 && legs / 4 == heads)
		{
			return { 0, heads };
		}

		/**
		 * Loop over all legs to find the corresponding animals
		 */
		for (int i = 0; i < legs / 4; ++i)
		{
			cout << "Heads : " << heads << endl;
			cout << "Legs : " << legs << endl;
			/**
			 * Check if a cow can be counted and that the rest are
			 * chickens, then return.
			 */
			if ((legs - 2) % 4 == 0)
			{
				legs -= 2;

				++chickens;
				--heads;

				cows += legs / 4;
				heads -= legs / 4;

				break;
			}

			/**
			 * Check if a chicken can be counted and that the rest
			 * are cows, then return.
			 */
			else if ((legs - 4) % 2 == 0)
			{
				legs -= 4;

				++cows;
				--heads;

				chickens += legs / 2;
				heads -= legs / 2;

				break;
			}

			/**
			 * Add a cow to see whether any other combinations fit.
			 */
			else
			{
				legs -= 4;
				--heads;

				++cows;
			}

			// if (legs < 4 || heads < 1)
			// 	return {};
		}

		if (legs < 0 || heads < 0)
			return {};

		return vector<int> { chickens, cows };
	}
};