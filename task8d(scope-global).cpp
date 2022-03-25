/*

task 12:

Scope of a identifier in function

*/


#include<iostream>

using namespace std;

int i=10;

//*****************************************declaration******************************************

void funct1(void);


//****************************************main***************************************************
main()
{
	cout<<"value of i in main on first call	"<<i;
	funct1();
	cout<<"\n\nvalue of i in main on after function call 	"<<i;
 	
//cout<<i;
	
}
//*****************************************defination******************************************

void funct1(void)
{
	cout<<"\n\nvalue of i inside function	"<<i;
	i=5;
	
}

//*************function 2**************

