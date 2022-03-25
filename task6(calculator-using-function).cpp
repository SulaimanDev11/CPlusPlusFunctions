/*

Task 6

Design a calculator using functions

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


float cal(int,char,int);		//declaration of function sending an int as argument type and returning int 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	float num1,num2,result;
	char sign;
	
	cout<<"Enter a number";
	cin>>num1;
	
	cout<<"Please Operation \n";
	cin>>sign;
	
	cout<<"Enter a number";
	cin>>num2;
	
	result=cal(num1,sign,num2);
		
	cout<<"="<<num1<<"  "<<sign<<" "<<num2<<" = "<<result;
	
}
	
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************
float cal(int number1,char sign,int number2)
{	
	float result=0.0;	// as we are using double that is why we are assigning it value 1.0
	
	switch(sign)
	{
	case '+':
	result=number1+number2;
	return result;
	
	case '-':
	result=number1-number2;
	return result;
	
	case '*':
	result=number1*number2;
	return result;
	
	case '/':
	result=number1/number2;
	return result;
	}
	
	
}
//****************************End of Function defination ***********************************************
