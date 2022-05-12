nclude <iostream>
#include <vector>
using namespace std;

class ChickensAndCows{
	public:
		vector<int> howMany(int heads, int legs){
			int chicken=0;
			int cow=0;

			while(legs%4==0){
				if(heads==0&&legs==0){
					break;
				}
				cow += 1;
				legs -= 4;
				heads -= 1;

				if(heads>legs){
					legs += 4;
					cow -= 1;
					chicken = legs/2;
					
					break;
				}
			}
			if(legs%4!=0){
					vector<int> c;
					return c;
			}
			vector<int> b;
			b.push_back(chicken);
			b.push_back(cow);
			return b;
		}
};
