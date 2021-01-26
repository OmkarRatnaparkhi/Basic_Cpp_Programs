/*
    Problem statement : Accept two numbers from user and display first number in second
number of times.

Input : 12 5
Output : 12 12 12 12 12

Input : -2 3
Output : -2 -2 -2

Input : 21 -3
Output : 21 21 21

Input : -2 0
Output :

*/

using namespace std;
#include<iostream>

void Dislpay(int iNo1, int iNo2)
{
	int iCnt = 0;
	
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}
	
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		cout<<iNo1<<"\t";
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	cout<<"Enter the first number"<<"\n";
	cin>>iValue1;

	cout<<"Enter the second number"<<"\n";
	cin>>iValue2;

	Dislpay(iValue1 , iValue2);
	
	return 0;
}
