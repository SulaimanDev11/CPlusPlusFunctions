/*

task 10

factorial program using recursion function
 
*/

#include<iostream>

using namespace std;

//********************************function declaration**********************************

long fact(long);
//********************************end***************************************************
main()
{
	long val;
	
	cout<<"Enter a number who's factorial you need  ";
	cin>>val;
	
	//val=fact(val)
	cout<<"\n\nFactorial  "<<fact(val);
	
	
}



//********************************function declaration**********************************

long fact(long x)
{
	if(x<=1)
	{
		if(x<1)   // logic for factorial value less then 1
		{
			x=1;
		}
		return x;
	}
	else
	{
		return (x*fact(x-1));
	}
	
}

//********************************end***************************************************
