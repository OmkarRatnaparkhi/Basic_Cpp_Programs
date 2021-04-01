/*
    Problem statement : Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE
	
*/

using namespace std;

#include<iostream>

bool ChkVowel(char cValue)
{
	if(cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U' || cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char ch = 0;
	bool bRet = false;
	
	cout<<"Enter the character: "<<endl;
	cin>>ch;
	
	bRet = ChkVowel(ch);
	if(bRet == true)
	{
		cout<<"Character is vowel"<<endl;
	}
	else
	{
		cout<<"Character is not vowel"<<endl;	
	}
	
	return 0;
}
