/*
    Problem statement : Accept one number from user and print that number of * on screen using while loop.
*/

#include<iostream>

using namespace std;

void Display(int iNo)
{
	int iCnt = 1;
	
	while(iCnt <= iNo)
	{
		cout<<"*\t";
		iCnt++;
	}
}

int main()
{
	int iValue = 0;
	
	cout<<"Enter the number"<<"\n";
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}