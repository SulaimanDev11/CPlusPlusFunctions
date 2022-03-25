/*
Task 2e

Modify task 2d and take value from user and calculate square using function, passing arguments 
*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************

void square(float* );			//declaration of function sending an int as argument type and returning int 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	float j=5,*i;
	
	//*i=j;
	cout<<"Please enter a number who's square you need \n";
	cin>>j;
	square(&j);
	cout<<"square of "<< j;
}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************
void square(float* k)
{	
	*k=*k * *k;
}
//****************************End of Function defination ***********************************************
