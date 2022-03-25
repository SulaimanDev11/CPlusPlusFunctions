/*

Task 1b(message-in-functions)

Introduction to function

Difference between declaration and defination 

*/

#include<iostream>

using namespace std;
//****************************Function declaration ******************************************************


void messege1(void);			//declaration of function 
void messege2(void);			//declaration of function 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{

messege1();
messege2();
messege1();	
	
}
//****************************End of Main***************************************************************



//****************************Function defination ******************************************************
void messege2()// declarator
{
	cout<<"\nfunction in messege 2";	
}


void messege1()// declarator
{
	cout<<"\nfunction in messege 1";	
}
//****************************End of Function defination ***********************************************
