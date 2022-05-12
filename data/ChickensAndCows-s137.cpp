#include <vector>
using namespace std;
vector<int> howMany(int heads,int legs){
	vector<int> ans(0);
	int ch;
	int c;
	if((legs-heads)%2==0){
		c=(legs-heads)/2;
		ch=heads-c;
		ans.push_back(ch);
	    ans.push_back(c);
	}
	return ans;
}