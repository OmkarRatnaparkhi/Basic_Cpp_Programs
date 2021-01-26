/*
    Problem statement : Accept two numebrs from user and return its division.
*/

/*
Algorithm
	START
		Accept first number from user as no1 
		Accept second number from user as no2
		Create one ans variable
		Divide no1(dividend) number by no2(divisor)
		Store the quotient/result in ans
		return the value from ans
	END 
 */

#include<iostream>

using namespace std;

class Maths
{
	public :
		int iValue1;
		int iValue2;
		
	public :
		Maths(int iNo1,int iNo2)
		{
			this->iValue1 = iNo1;
			this->iValue2 = iNo2;
		}
		
		~Maths()
		{
			cout<<"Inside Destructor\n";
		}
		
		int Division()
		{
			int iAns = 0;
			iAns = (this->iValue1)/(this->iValue2);
			return iAns;
		}
}; // end of class Declaration

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iRet = 0;
	
	cout<<"Enter First number: "<<"\n";
	cin>>iNo1;

	cout<<"Enter Second number: "<<"\n";
	cin>>iNo2;
	
	Maths obj(iNo1,iNo2);
	
	iRet = obj.Division();
	cout<<"Division is: "<<iRet<<"\n";
	
	return 0;
}