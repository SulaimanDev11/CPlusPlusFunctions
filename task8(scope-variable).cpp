/*
task 6:

Call by value... 

*/
#include<iostream>

using namespace std;

//*****************************************declaration******************************************

void funct1(int);

//****************************************main***************************************************
main()
{
	int i=10;
	
	cout<<"\nValue of i inside main  "<<i;
 	funct1(i);
 	cout<<"\nValue of i inside main after funcation call  "<<i;
	
}
//*****************************************defination******************************************

void funct1(int i)
{
	cout<<"\ninside function1 value of i send by value  "<<i;
	i*=2;
	cout<<"\ninside function1 value of i changed  "<<i;
}

//*************end of prog*******************************

