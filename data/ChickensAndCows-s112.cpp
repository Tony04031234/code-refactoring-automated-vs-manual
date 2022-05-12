# include <iostream>
# include <string>
# include <vector>
using namespace std;
 
 
class ChickensAndCows
{
  public:
  vector<int> howMany(int heads,int legs)
  {
  	vector<int> result;
  	long double temp = (long double) heads/legs;
    if ((heads== 0) && (legs == 0))
    {
      result.push_back(0);
      result.push_back(heads);
      return result;
    }
    if (heads*4 < legs)
    {
      return result;
    }
    if (heads*2 > legs)
    {
      return result;
    }
    if (legs % 2)
    {
      return result;
    }
    if (heads < 1)
    {
      return result;
    }
    if (legs < 1)
    {
      return result;
    }
    if (heads*4 == legs)
    {
      result.push_back(0);
      result.push_back(heads);
      return result;
    }
    if (heads*2 == legs)
    {
      result.push_back(heads);
      result.push_back(0);
      return result;
    }
  	long double tempcow = temp*4;
  	long double tempchi = temp*2;
  	result.push_back( tempcow/(tempcow+tempchi)*heads);
  	result.push_back( tempchi/(tempcow+tempchi)*heads);
    
    return result;
  }
};