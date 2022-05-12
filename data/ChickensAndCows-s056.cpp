#include <vector>

class ChickensAndCows
 {
 public:
 	std::vector <int> howMany(int head, int legs) {
 		std::vector <int> number;
 		if (legs % 2 != 0 || head*4 < legs) {
 			return number;
 		}
 		if (legs-head*2<0) {
 			return number;
 		}
 		int cows;
 		int chickens;
 		if (head*4 == legs) {
 			cows = legs/4;
 			chickens = 0;
 		} else if (head*4 != legs) {
 			chickens = (head*4-legs)/2;
 			cows = head - chickens;
 		}
 		// number[0] = chickens;
 		// number[1] = cows;
 		number.push_back(chickens);
 		number.push_back(cows);
 		return number;
 	}	
 }; 