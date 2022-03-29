/*

Task 7

Write a program that generate table of 2 using while loop?

*/


#include<iostream>

using namespace std;

main()
{
	int table=2,loop_end=10,number=1;
	
	cout<<"Enter Table you want\t";
	cin>>table;
	
	cout<<"\n\nEnter Number of times\t";
	cin>>loop_end;
	
	cout<<"\n\n\n\t*****Table of "<<table<<"***** \n\n\n";
	
	
	while(number<=loop_end)
	{
		cout<<table<<" X "<<number<<" = "<<table*number<<"\n";
		
		number++;
	}
}

