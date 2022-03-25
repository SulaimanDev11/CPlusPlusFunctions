/*

Task 2b

Modify 2A, Take value from user and calculate square inside square(no arguments, no return)
*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


void square(void);			//declaration of function 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{

square();				// function call

}
//****************************End of Main***************************************************************



//****************************Function defination ******************************************************
void square()
{
	int i;
	cout<<"Please enter a number who's square you need \n";
	cin>>i;
	cout<<"square of  "<< i<<" is =  "<<i*i;

}
//****************************End of Function defination ***********************************************
