/*

Task 2C

Modify 2b, Take value from user inside main and calculate square(single argument pass to function square of type int, no return)
*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


void square(int);			//declaration of function 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	int i;
	cout<<"Please enter a number who's square you need \n";
	cin>>i;

	square(i);

}
//****************************End of Main***************************************************************



//****************************Function defination ******************************************************
void square(int j)
{
	
	cout<<"square of  "<< j<<" is =  "<<j*j;

}
//****************************End of Function defination ***********************************************
