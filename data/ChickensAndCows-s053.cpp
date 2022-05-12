#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
class ChickensAndCows
{
	public:
		vector<int> howMany(int heads,int legs){
			int chickenleg=2;
			int cowsleg=4;
			int chickenhead=1;
			int cowhead=1;
			int chicken,cow;
			vector<int> ans;
			if(heads==0 || legs==0){
				chicken=0;
				cow=0;
				ans.push_back(chicken);
			ans.push_back(cow);
			}else{
			for (int i = 0; i < legs; ++i)
			{
				for(int j=0;j<legs;j++){
					if(legs/(i*2+4*j)==1 && (i+j)==heads){
						chicken=i;
						cow=j;
						ans.push_back(chicken);
			           ans.push_back(cow);
						
					}
					
						
					
					}
				}
			}
			
			return ans;

};
		

};