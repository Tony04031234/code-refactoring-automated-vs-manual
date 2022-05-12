#include <iostream>
#include <vector>
using namespace std;
 
class ChickensAndCows{
public:
	vector<int> howMany(int heads, int legs){
		vector<int> newarr;
		int a = 0;
		int b = 0;
		if (legs%2!=0){
			return newarr;
		}
	    else if (legs==0&&heads==0){
	    	newarr.push_back(0);
	    	newarr.push_back(0);
	    	return newarr;
	    }
	    else if(legs%heads!=0){
			for (int j = legs-4; j >=0; j=j-4){
				b++;
				if (j%(heads-b) == 0){
					a = j/2;
					newarr.push_back(a);
					newarr.push_back(b);
					if (a+b>heads){
						vector<int> empty;
						return empty;
			        }
			        a = 0;
			        b = 0;
			        return newarr;
			    }
			}        
        }
	}
};
	   

