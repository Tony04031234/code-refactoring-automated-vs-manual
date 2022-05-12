#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

class ChickensAndCows
{
public:
	vector<int>howMany(int heads,int legs){
		vector<int> v;
		for(int i=0;i<heads;i++){
			for(int j=0;j<heads;j++){
				if(2*j+4*i==legs && i+j==heads){
					if(j==0){
						v.push_back(0);
					}
					 else if(j!=0){
					 	v.push_back(j);
					 }
					 if(i==0){
					 	v.push_back(0);
					 }
					 else if(i!=0){
					 	v.push_back(i);
				}
				}
				
			}
		}
		if(legs==0 && heads==0){
					v.push_back(0);
					v.push_back(0);
				}
	
			return v;
		
	}
	
};

/*int main(int argc, char const *argv[])
{
	ChickensAndCows a;
	std::vector<int> b=a.howMany(10,40);
	for (int i = 0; i < b.size(); ++i)
	{
		cout<<b[i]<<",";
	}
	
}*/