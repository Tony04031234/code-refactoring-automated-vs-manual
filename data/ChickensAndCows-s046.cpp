#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows
{
	public:
		vector<int> howMany(int heads,int legs)
		{
			vector<int> answer;

			if (heads == 0 && legs == 0)
			{
				answer.push_back(0);
				answer.push_back(0);

				return answer;
			}

			if ((legs%2 == 1) || ((4*heads) < legs) || (heads > legs) || (heads <=0) || (legs <=0) || (2*heads > legs))

			{
				return answer;
			}

			int newhead = 4*heads;
			int newlegs = legs;
			int numcows = 0;

			int chickenheads = heads*2;
			int cowheads = heads*4;

			
			if (chickenheads == legs)
			{
				answer.push_back(heads);
				answer.push_back(0);

				return answer;
			}
			if (cowheads == legs)
			{
				answer.push_back(0);
				answer.push_back(heads);

				return answer;
			}

			while (2*newlegs != newhead)
			{
				//cout << "works" << endl;
				newhead = newhead-4;
				newlegs = newlegs-4;
				numcows++;
				//cout << numcows << " " << newhead << " " << legs << endl;
			}

			heads = heads-numcows;
			answer.push_back(heads);
			answer.push_back(numcows);

			return answer;
		}
};