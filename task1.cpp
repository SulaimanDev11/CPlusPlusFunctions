/*
Task 1


Take 2 values from user and find larger between them using conditional operator 



*/

#include<iostream>

using namespace std;

main()
{
	
	int a,b,larger;
	
	cout<<"enter a number =  ";
	cin>>a;
	
	cout<<"\n\nenter another value  =  ";
	cin>>b;
	
	larger=(a>b)?a:b;
	
	cout<<"\n \n larger value is  = "<<larger;
	
}

