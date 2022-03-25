/*

Task 1E(deep-deeper)

Write a program which has three functions named shallow, deep, deeper where shallow is called by main, 7
where as deep is called by shallow and then deeper is called by deep all messages displaying messages and 
in end control passing back to main ?

*/

#include<iostream>

using namespace std;
//****************************Function declaration ******************************************************

void deep(void);			//declaration of function 
void deeper(void);			//declaration of function 
void shallow(void);
//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{

cout<<"In POOL\n";
shallow();
cout<<"Back OUT OF POOL\n";
}
//****************************End of Main***************************************************************



//****************************Function defination ******************************************************
void shallow(void)// declarator
{
	cout<<"I am in shallow\n";
	deep();	
	cout<<"back in shallow\n";
}


void deep(void)// declarator
{
	cout<<"i am in deep\n";
	deeper();
	cout<<"back to deep\n";
}

void deeper(void)// declarator
{
	cout<<"I am in deeper\n";
		
}
//**************************
