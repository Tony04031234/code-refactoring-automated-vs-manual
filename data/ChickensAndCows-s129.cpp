#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
class ChickensAndCows{
public:
	vector<int> howMany(int heads,int legs){
		vector<int> v;
		int arr[100];
		for(int i=heads;i>-1;i--){
			for(int j=0;j<=heads;j++){
				if(i+j==heads){
					if(i*2+j*4==legs){
						v.push_back(i);
						v.push_back(j);
					}
				}
			}
		}
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<endl;
		}
		//return arr;
	}
};
// int main(){
// 	int h;
// 	int l;
// 	cin>>h;
// 	cin>>l;
// 	ChickensAndCows x;
// 	cout<<x->howMany(h,l)<<endl;
// }