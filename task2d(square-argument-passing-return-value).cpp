/*

Task 2D

Modify task 2c and take value from user inside main  and calculate its square(pass single argument and return result back to main)

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************

int square(int);			//declaration of function sending an float as argument type and returning float 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	int i,result;
	cout<<"Please enter a number who's square you need \n";
	cin>>i;
	
	result=square(i);
	
	cout<<"square of "<<i<<" is = "<<result;

}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************
int square(int j)
{
	j=j*j;
	
	return j;
}
//****************************End of Function defination ***********************************************
