/*

Task 1d

Introduction to function
Difference between declaration and defination

Modify 1C .Call Italy function from main, call  Brazil function  from Italy and call Argentina function  from Brazil. 

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
cout<<"Back in main\n";
}
//****************************End of Main***************************************************************



//****************************Function defination ******************************************************
void italy(void)// declarator
{
	cout<<"I am in Italy\n";
	brazil();	
	cout<<"Back to Italy\n";
}


void brazil(void)// declarator
{
	cout<<"I am in Brazil\n";
	argentina();
}

void argentina(void)// declarator
{
	cout<<"I am in argentina\n";
		
}
//****************************End of Function defination ***********************************************
