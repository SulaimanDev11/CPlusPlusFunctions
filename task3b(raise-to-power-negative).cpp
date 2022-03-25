/*

Task 3b

Write a program that calculate power of any value also for negative power as well 

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


double raiseToPow(double,int);			//declaration of function sending an int as argument type and returning int 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	int i;
	double val;
	
	cout<<"Enter a number  =  ";
	cin>>val;
	
	cout<<"Please Power  =   ";
	cin>>i;
		
	cout<<"Result of "<<val<<" to the Power "<< i <<" is = "<< raiseToPow(val,i);  //function call

}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************
double raiseToPow(double value,int pow)
{	
	double result=1.0;	// as we are using double that is why we are assigning it value 1.0
	
	if(pow>=0)
	{	
		for(int i=1;i<=pow;i++)
		{
			result=result*value;	
		}
	}
	else
	{
		for(int i=pow;i<0;i++)
		{		
			//cout<<"negative";
			result=result*(1/value);
		}
	}
		
	return result;
}
//****************************End of Function defination ***********************************************
