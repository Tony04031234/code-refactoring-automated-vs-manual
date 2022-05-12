#include <iostream>
#include <vector>
using namespace std;
class ChickensAndCows
{
public:
	vector <int> howMany(int heads, int legs)
	{
		vector <int> v;
		int templegs = legs;
		int cows = 0;
		int chicken = 0;
		for (int i = heads; i > 0; --i)
		{
			vector <int> v;
/*			cout<<"_________________________________________________________"<<endl;
			cout<<"(cows*4)+(chicken*2) = "<<(cows*4)+(chicken*2)<<endl;
			cout<<" i = "<<i<<endl;
			cout<<" legs = "<<legs<<endl;*/
			if( ((cows*4)+(chicken*2)) < templegs && legs/i>2) 
			{
				//cout<< "if"<<endl;
				cows ++;
				legs=legs-4;
			}
			else
			{
				//cout<<"else"<<endl;
				chicken ++;
				legs=legs-2;
			}

		}
		if(legs == 0)
		{
			v.push_back(chicken);
			v.push_back(cows);
			return v;
		}
		else return v;
		//cout<<"the total number of legs is " <<legs<<endl;

	}	
};
/*int main()
{
	//vector<int> v;
	howMany(10,42);
	cout<<v.at(0)<<endl;
	cout<<v.at(1)<<endl;

	return 0;
}*/