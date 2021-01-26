/*
    Problem statement : Accept one number and check whether is is divisible by 5 or not.
*/

using namespace std;

#include<iostream>

typedef int BOOLEAN;

#define TRUE 1
#define FALSE 0

class Number
{
	public :
		int iNo;
	
	public :
		Number(int iValue)
		{
			this->iNo = iValue;
		}
		
		~Number()
		{
			cout<<"Inside Destructor\n";
		}
		
		BOOLEAN Divisible()
		{
			if((this->iNo % 5) == 0)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}			
		}
};

int main()
{
	
	int iValue = 0,bRet = FALSE;
	
	cout<<"Enter Number"<<"\n";
	cin>>iValue;
	
	Number nobj(iValue);
	
	bRet = nobj.Divisible();
	
	if(bRet==TRUE)
	{
		cout<<"Number is Divisible by 5"<<"\n";
	}
	else
	{
		cout<<"Number is not Divisible by 5"<<"\n";
	}
	
	return 0;
}

