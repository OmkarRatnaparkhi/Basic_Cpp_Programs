/*
    Problem statement : Accept number from user and check whether number is even or
odd.
*/

using namespace std;
#include<iostream>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL EvenOdd(int iNo)
{
	if((iNo % 2) == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0 , iRet = FALSE;
	
	cout<<"Enter the number"<<"\n";
	cin>>iValue;

	iRet = EvenOdd(iValue);
	if(iRet == TRUE)
	{
		cout<<iValue<<" number is EVEN"<<"\n";
	}
	else
	{
		cout<<iValue<<" number is ODD"<<"\n";
	}
	
	return 0;
}
