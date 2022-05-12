#include <iostream>
#include <vector>
using namespace std;

class ChickensAndCows {
public:

vector<int> howMany(int heads,int legs){
	int numberCow = 0;
	int numberChicken = 0;
		vector<int> result;

 	if (legs/4 == heads && legs%4 == 0){
 		numberCow = heads;
 	} else if(legs/2 == heads && legs%2 == 0){
 		numberChicken = heads;
 	} else {
         numberChicken = 1;
         numberCow = heads-1;
 	while (numberChicken*2 + numberCow*4 != legs){
         numberChicken++;
         numberCow = heads-numberChicken;
         if (numberChicken  > heads)
         {
               return result;
         }
 	    }
 	}
 
  	result.push_back(numberChicken);
 	result.push_back(numberCow);
    return result;
}
};