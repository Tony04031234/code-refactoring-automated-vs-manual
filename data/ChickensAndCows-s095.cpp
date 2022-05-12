#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ChickensAndCows
{
public:
  vector<int> howMany(int heads, int legs){
    vector<int> v;
    for (int i = 0; i <= heads; ++i)
    {
      if (i*4+(heads-i)*2==legs)
      {
        v.push_back(heads-i);
        v.push_back(i);
        return v;
      }
    }
    return v;
  }
	
};