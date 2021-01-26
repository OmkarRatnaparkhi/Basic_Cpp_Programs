/*
    Problem statement : Accept one number from user and print that number of * on screen using for loop.
*/

#include<iostream>

using namespace std;

void Display(int iNo)
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("*\t");
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