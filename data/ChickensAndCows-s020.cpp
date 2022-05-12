#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows{
	private:
		vector<int> chnco;
	public:

		vector<int> howMany(int heads, int legs){
			chnco.clear();
			if (heads == 0 && legs == 0){
				chnco.push_back(0);
				chnco.push_back(0);
				return(chnco);
			}
			chnco.clear();
			if(legs %2 != 0 || legs <= 0 || heads * 4 < legs || heads > legs/2){
				return(chnco);
			}
			chnco.push_back(0);
			chnco.push_back(0);

			while(heads != legs/2){

				if(heads == legs/4){
					chnco[1] = heads;
					return(chnco);
				}

				chnco[1]++;
				heads--;
				legs = legs - 4;

			}

			chnco[0] = heads;
			return(chnco);


		}

};
