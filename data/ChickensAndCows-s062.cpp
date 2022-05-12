#include <iostream>
#include <vector>

using namespace std;

class ChickensAndCows
{
  public:

    vector<int> howMany(int heads, int legs){

      vector<int> result;

      //immediately return if legs are uneven
      if(legs%2 != 0 || heads > legs){

        return result;

      }

      if(legs > heads*4){
        return result;
      }

      // //all chickens
      // if((legs/2)%(heads) == 0 && legs/2 == heads){

      //   result.push_back(heads);
      //   result.push_back(0);
      //   return result;
      // }

      // //all cows
      // if((legs/4)%(heads) == 0 && legs/4 == heads){
      //   result.push_back(0);
      //   result.push_back(heads);
      //   return result;
      // }
      result = {0,0};

      int chickens = 0;
      int cows = heads*4;
      legs -= cows;

      while(legs < 0){
        chickens++;
        cows--;
        legs+= 2;
      }

      cows = heads - chickens;

      result = {chickens,cows};
      return result;
    }

};
