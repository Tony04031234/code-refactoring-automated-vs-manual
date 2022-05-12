#include <vector>
#include <string>
#include <iostream>

using namespace std;


class ChickensAndCows {

public: 

	vector<int> howMany (int heads, int legs) {

		vector<int> ret;
		int chicken = 0;
		int cow = 0; 

		for(int i = 0; i < heads; i++) {

			if(legs >= 2 && heads > 0) {

				for(int j = 0; j < legs; j++) {

					if(heads > 0) {

						if(legs % 4 == 0 && (heads - legs/4 == 0)) {

							cow += legs/4;
							heads = heads - cow;
							legs = 0;

						}
						else if(legs % 2 == 0 && (heads - legs/2 == 0)) {

							chicken += legs/2;
							heads = heads - cow;
							legs = 0;
						}
						else if (legs % 4 == 2 && heads > 1) {

							cow += 1;
							chicken += 1;
							heads -= 2;
							legs -= 6; 

						}
						else {

							chicken += 1;
							heads -= 1;
							legs -= 2; 
						}
					}
				}	
			}
			else {
				break;
			}
    }	

    	if(legs > 0 || heads > 0) {

    		return ret; 
    	} 
    	else {

    		// cout << chicken << endl;
    	// cout << cow << endl;
    	// cout << heads << endl;
    	// cout << legs << endl; 
  		ret = {chicken, cow};


		return ret;

    	}

    	

	}


};