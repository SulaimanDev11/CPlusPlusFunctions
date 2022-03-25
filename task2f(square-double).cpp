/*

Task 2e

Modify task 2d and take value from user and calculate square using function, passing arguments 

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


double square(double);			//declaration of function sending an int as argument type and returning int 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	double i;
	cout<<"Please enter a number who's square you need \n";
	cin>>i;
		
	cout<<"square of "<<i<<" is = "<<square(i);;

}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************
double square(double j)
{	
	return j*j;
}
//****************************End of Function defination ***********************************************
