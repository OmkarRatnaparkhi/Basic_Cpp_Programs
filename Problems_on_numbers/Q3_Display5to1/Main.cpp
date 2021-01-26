/*
    Problem statement : Program to print 5 to 1 numbers on screen.
*/

using namespace std;

#include<iostream>

class Pattern
{
	public:
	
	void Display()
	{
		int iCnt = 0;
		
		for(iCnt = 5; iCnt>=1; iCnt--)
		{
			cout<<iCnt<<"\n";
		}
	}
};

int main()
{
	Pattern pobj;
	
	pobj.Display();
	
	return 0;
}