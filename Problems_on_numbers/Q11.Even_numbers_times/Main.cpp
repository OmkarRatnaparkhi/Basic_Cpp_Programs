/*
    Problem statement : Write a program which accept one number from user and print that number of even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14
	
*/
using namespace std;
#include<iostream>

void Display(int iValue)
{
	int iCnt = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	if(iValue==0)
	{
		printf("Invalid Input");
	}	
	
	for(iCnt = 2; iCnt<=(iValue*2); iCnt++)
	{
		if((iCnt % 2) == 0)
		{
			cout<<iCnt<<"\t";
		}
	}
}

int main()
{
	int iNo = 0;
	
	cout<<"Enter the number"<<endl;
	cin>>iNo;
	
	Display(iNo);
	
	return 0;
}