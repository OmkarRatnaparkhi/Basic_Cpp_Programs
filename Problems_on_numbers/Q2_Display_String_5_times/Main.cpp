/*
    Problem statement : Program to print 5 times “Marvellous” on screen.
*/

using namespace std;

#include<iostream>

class Pattern
{
	public:
	
	void Display()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt <= 5; iCnt++)
		{
			cout<<"*"<<endl;
		}
	}
};

int main()
{
	Pattern obj;
	
	obj.Display();
	
	return 0;
}