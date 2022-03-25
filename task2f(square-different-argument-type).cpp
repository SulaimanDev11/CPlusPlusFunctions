/*

Task 2f

Modify task 2d and take a float value from user and calculate square using inline function

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


int square(int);			//declaration of function sending an int as argument type and returning int 
float square(float);		//declaration of function sending an float as argument type and returning float 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	
	cout<<
	square(0.2);	
	
}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************
float square(float j)
{
	
	cout<<"Float Square function\n";
return j*j;			//inline function	
}

int square(int j)
{
	cout<<"int Square function\n";
return j*j;			//inline function	
}
//*************************function defination ***********************************************
