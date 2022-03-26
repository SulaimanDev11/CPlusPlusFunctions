/*
Task 2

Write program takes value from user if value is divisible by 2 print even if not than odd

use conditional operator

*/

#include<iostream>

using namespace std;

main()
{
	
	int number=0;
	
	
	cout<<"Enter a number = ";
	cin>>number;
	
	cout<<((number%2==0)?"even":"odd");	
}

