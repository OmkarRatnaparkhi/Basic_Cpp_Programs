/*
    Problem statement : Accept one number from user and print that number of * on screen.
*/

using namespace std;

#include<iostream>

class Pattern
{
	public:
		int iValue;
		
	Pattern(int iNo)
	{
		this->iValue = iNo;
	}
	
	void Display()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt<=(this->iValue); iCnt++)
		{
			cout<<"*"<<"\n";
		}
	}
};

int main()
{
	int iNo = 0;
	
	cout<<"Enter Number"<<"\n";
	cin>>iNo;
	
	Pattern pobj(iNo);
	
	pobj.Display();
	
	return 0;
}