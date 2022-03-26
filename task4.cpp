/*
Task 4

modify task 3

take student  marks & tells you whether he is pass or fail.if marks should be in between 0 and 100?

use conditional operator

*/

#include<iostream>

using namespace std;

main()
{
	
	int marks=0;
	
	
	cout<<"Enter your subject marks = ";
	cin>>marks;
	
	cout<<((marks<0||marks>100)?"\n\nPlease enter Marks between 0-100":((marks>=60)?"\nYou are pass":"\nSorry you failed"));	
}

