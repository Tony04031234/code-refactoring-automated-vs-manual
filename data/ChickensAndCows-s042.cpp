#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows {

	public:
		
		ChickensAndCows() {} 

		vector<int> howMany(int heads, int legs) {

			vector<int> res ;
			
			int chickens = 0 ;
			int cows = legs / 4 ; // note: integer division

			int remHeads = heads - cows ;
			int remLegs = legs - 4 * cows ;
			// cout << cows << " " << chickens << endl ;

			while (remHeads!=0 || remLegs!=0) {
			

				chickens++ ;
			 	remHeads = heads - cows - chickens;
			 	remLegs = legs - 4 * cows - 2 * chickens ;
				// cout << cows << " " << chickens << endl ;
				
				if (remHeads==0 && remLegs==0) { break ; }

				cows-- ;
				if (cows < 0) { return res ; }

			 	if (remHeads==0 && remLegs==0) { break ; }

			 	chickens++ ;
			 	remHeads = heads - cows - chickens;
			 	remLegs = legs - 4 * cows - 2 * chickens ;
				// cout << cows << " " << chickens << endl ;
			}

			res.push_back(chickens) ;
			res.push_back(cows) ;

			return res;

		}

} ;
