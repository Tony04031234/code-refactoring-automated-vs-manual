#include <iostream>
#include <vector>

using namespace std;
 
class ChickensAndCows
{
  public:
  vector <int> howMany(int heads, int legs)
  {
  	vector<int> res;
    if (legs % 2 == 0)
    {
      int cow = legs/2 - heads;
      int chicken = 2*heads - legs/2;
      {
        if (cow >= 0 && chicken >= 0)
        {
          res.push_back(chicken);
          res.push_back(cow);
        }
      }
    }
    return res;  // return your result
  }
};