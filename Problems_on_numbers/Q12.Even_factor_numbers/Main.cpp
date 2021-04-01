/*
    Problem statement : Write a program which accept number from user and print even factors of that
number.
Input : 24
Output: 2 4 6 8 12
	
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
		cout<<"Invalid Input";
	}	
	
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if((iValue%iCnt)==0 && (iCnt%2)==0)
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