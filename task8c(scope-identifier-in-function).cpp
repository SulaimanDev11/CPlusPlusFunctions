/*

task 11a:

Scope of a identifier  in main and function

*/


#include<iostream>

using namespace std;

void f(void);
main()
{
int i=0;
cout<<" value of i  "<<i;

f();	

//cout<<i;
	
}

void f(void)
{
	//cout<<i;	
}
