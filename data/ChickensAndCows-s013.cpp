#include <iostream>
#include <vector>

class ChickensAndCows
{
public:
	std::vector<int> howMany(int heads, int legs) {

		std::vector<int> toReturn;

		if (heads * 4 == legs)
			{
				toReturn.push_back(0);
				toReturn.push_back(heads);
				return toReturn;
			} else if (heads * 2 == legs) {
				toReturn.push_back(heads);
				toReturn.push_back(0);
				return toReturn;
			}

		for (int i = heads; i > 0; --i)
		{
			

			if (i * 4 < legs && (heads - i) * 2 == legs - (i * 4))
			{
				toReturn.push_back(heads - i);
				toReturn.push_back(i);
				return toReturn;
			}



		}

		

		return toReturn;
	}
	
};