/*
    Problem statement : Write a program which accept number from user and print odd factors of that
number.
	
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
	
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if((iValue%iCnt)==0 && (iCnt%2)==1)
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