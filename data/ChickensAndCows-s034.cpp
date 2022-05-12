#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows
{
public:
	std::vector<int> howMany(int heads,int legs)
	{
		std::vector<int> v;
		for (int i = 0; i <=heads; ++i)
		{
			int j=heads-i;
				if (2*i+4*j==legs)
					{
						v.push_back(i);
						v.push_back(j);
					}
					
		}
		return v;
	}

	
};

// int main()
// {
// 	ChickensAndCows C;
// 	std::vector<int> v=C.howMany(1000000,4000000);
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout<<v[i];
// 	}
// 	cout<<endl;
// }