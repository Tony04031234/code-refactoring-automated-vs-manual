#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

class ChickensAndCows
{
public:
	std::vector<int> howMany(int heads,int legs)
	{
		int ch=0;
		int cow=0;
		int h=0;
		int l=0;
		int length=heads+1;
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<length;j++)
			{

				if((h==heads) && (l==legs))
				{
					ch=i;
					cow=j;
				}
				else
				{
					i++;
					j++;
				}
				h=i+j;
				l=2*i+4*j;
			}
		}
		std::vector<int> res(ch,cow);
		return res;
	}
};