/*

Task 2e

Modify task 2d and take a float value from user and calculate square using inline function

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


float square(float);			//declaration of function sending an float as argument type and returning float 
//float square(float);		//declaration of function sending an float as argument type and returning float 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	float i;

	cout<<"Please enter a number who's square you need \n";
	cin>>i;
	
		
	cout<<"square of "<<i<<" is = "<<square(i);;

}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************
float square(float j)
{
return j*j;			//inline function	
}
//****************************End of Function defination ***********************************************
