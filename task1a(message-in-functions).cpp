/*

Task 1a

Introduction to function

Difference between declaration and defination 

*/

#include<iostream>

using namespace std;
//****************************Function declaration ******************************************************


void display_msg(void);			//declaration of function 

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	cout<<"Before function call in main\n\n";
	display_msg();	
	cout<<"back in main\n\n";
}
//****************************End of Main***************************************************************



//****************************Function defination ******************************************************
void display_msg()// declarator
{
	cout<<"Control is with disply_msg function\n\n";	
}
//****************************End of Function defination ***********************************************
