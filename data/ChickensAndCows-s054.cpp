#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;
 
 
class ChickenAndCows
{
  public:

  std::vector <int> howMany(int heads, int legs)
  {
    int total_a = heads;
    int cow = 0;
    int chicken = 0;
    std::vector<int> v;

    if (legs % 2 == 1)
    {
      return v;
    }
    
    for (int i = legs; i > 0; i-=4)
    {
      
        cow++;
        total_a--;
      
    }

    chicken = total_a - cow;
    
    // v.push_back(chicken);
    // v.push_back(cow);

    // for (int i = 0; i < v.size(); ++i)
    //     {
    //       cout<<v[i]<<endl;
    //     }

    return v;
  }
};