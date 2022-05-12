#include <iostream> 
#include <vector> 
#include <string> 




class ChickensAndCows
{
public: 
	std::vector<int> howMany(int heads, int legs)
	{
		std::vector<int> returnVect; 
		//returnVect.push_back(0); 
		//returnVect.push_back(0); 
		int chickenHead = (heads*2); 
		int cowHead  = (heads*4); 
		int tempor = legs/heads; 
		int temporDiv = legs%heads; 


		//std::cout<<returnVect[0]<<std::endl; 
		//std::cout<<returnVect[1]<<std::endl; 


		if(heads==1&legs==2)
		{
		returnVect.push_back(1); 
		returnVect.push_back(0);  
		}
		else if(heads==1&legs==4)
		{

			returnVect.push_back(0); 
			returnVect.push_back(1); 
		}
		else if(chickenHead<legs|| cowHead<legs)
		{
			return returnVect; 
		}
		else 
		{
			if(tempor==4&&temporDiv==0)
		{
			returnVect.push_back(0); 
			returnVect.push_back(heads); 
		}
		
		}		/*
		else if(tempor==4&&temporDiv==0)
		{
			returnVect.push_back(0); 
			returnVect.push_back(heads); 
		}
		else if(tempor==2&&temporDiv==0)
		{

			returnVect.push_back(heads); 
			returnVect.push_back(0); 
		}*/ 
		/*else
		{
			int temp; 
			temp = legs%heads; 
			int  tempDiv; 
			tempDiv = legs/heads; 
			
			if(temp==0)
			{
				if(tempDiv==4)
				{
					returnVect.push_back(0); 
					returnVect.push_back(legs/tempDiv); 
				}
				else if(tempDiv==2)
				{	
					returnVect.push_back(legs/tempDiv); 
					returnVect.push_back(0); 
				}
			}
			else 
			{
				int store; 
				store = tempDiv; 
				
				if(store==4)
				{
					store = store*4; 
					tempor = legs-store; 
					tempor = store/2; 
					returnVect.push_back(tempor); 
					returnVect.push_back(legs/heads); 

				}
				else
				{
					store = store*2; 
					tempor = legs-store; 
					tempor = store/4; 
					returnVect.push_back(legs/heads); 
					returnVect.push_back(tempor); 
				}

			}
		} */
				//returnVect.push_back(10); 
		//returnVect.push_back(022); 

		return returnVect; 
	}

}; 