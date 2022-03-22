#include<iostream>

using namespace std;

main()
{

int number1=0,number2=0;

cout<<"Please enter 2 integers";
cin>>number1>>number2;

if(number1==number2)
	cout<<"\nNumber 1\t"<<number1<<"\tis equal to \t"<<number2;
	
if(number1!=number2)
	cout<<"\nNumber 1\t"<<number1<<"\tis not equal to \t"<<number2;		

if(number1>number2)
	cout<<"\nNumber 1\t"<<number1<<"\tis greater than\t"<<number2;
	
	
if(number1<number2)
	cout<<"\nNumber 1\t"<<number1<<"\tis less than\t"<<number2;
	
if(number1>=number2)
	cout<<"\nNumber 1\t"<<number1<<"\tis greater than or equal to \t"<<number2;
	
if(number1<=number2)
	cout<<"\nNumber 1\t"<<number1<<"\tis less than or equal to \t"<<number2;

	
}

