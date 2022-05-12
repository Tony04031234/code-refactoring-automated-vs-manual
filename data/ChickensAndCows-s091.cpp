#include <iostream>
#include <vector>

class ChickensAndCows{

	public:
		std::vector<int> howMany(int heads, int legs){

			std::vector<int> result;

			if(heads==0 && legs ==0){
				result = {0,0};
				return result;
			}

			if(legs <= heads){
				return result;
			}

			if(heads==0 || legs==0){
				return result;
			}

			else if(legs%2==1){
				return result;
			}

			else{

				int cows = 0;
				int chickens = 0;

				int op1 = ((legs/4) + legs%4);
				int op2 = ((legs/2) + legs%2);
				if(op1 == heads){
					result = {0,legs/4};
					return result;
				}

				else if(op2 == heads){
					result = {legs/2,0};
					return result;
				}

				else{
					int currentLegs = 0;
					int totalHeads = 0;
					cows = heads;

					while(cows >= 0){

						cows--;
						currentLegs -= 2;
						chickens++;
						totalHeads = cows + chickens;

						currentLegs = (cows*4) + (chickens*2);

						if(currentLegs == legs && totalHeads== heads){

							if(chickens>=0 && cows>=0){
								result = {chickens,cows};
							}
							break;
						}
					}
				}

			}

			return result;
		}

};