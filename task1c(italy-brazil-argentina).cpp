/*

Task 1c

Introduction to function

Difference between declaration and defination 

c.	Write a program with three functions named as Brazil, Italy and Argentina call them one by one from main function?

*/

#include<iostream>

using namespace std;
//****************************Function declaration ******************************************************

void italy(void);			//declaration of function 
void brazil(void);			//declaration of function 
void argentina(void);			//declaration of function 
//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{

cout<<" Start of main\n";
italy();
brazil();	
argentina();
italy();
cout<<"Back in main\n";
}
//****************************End of Main***************************************************************



//****************************Function defination ******************************************************
void italy(void)// declarator
{
	cout<<"I am in Italy\n";	
}


void brazil(void)// declarator
{
	cout<<"I am in Brazil\n";	
}

void argentina(void)// declarator
{
	cout<<"I am in argentina\n";	
}
//****************************End of Function defination ***********************************************
