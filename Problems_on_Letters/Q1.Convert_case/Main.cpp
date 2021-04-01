/*
    Problem statement : Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
	
*/

using namespace std;

#include<iostream>

void DisplayConvert(char cValue)
{
	if((cValue >= 0 && cValue <= 64) || (cValue >= 91 && cValue <= 96) || (cValue >= 123 && cValue <= 127))
	{
		cout<<"Invalid Input"<<endl;
	}
	
	if(cValue >= 'A' && cValue <= 'Z')
	{
		cValue=cValue+32;
		cout<<cValue<<endl;
	}
	else if(cValue >= 'a' && cValue<= 'z')
	{
		cValue=cValue-32;
		cout<<cValue<<endl;
	}
}

int main()
{
	char ch = 0;
	
	cout<<"Enter the character: "<<endl;
	cin>>ch;
	
	DisplayConvert(ch);

	return 0;
}
