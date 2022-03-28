/*
Task 6

Write program that produce first 10 integers in descending order?

*/

#include<iostream>

using namespace std;

main()
{
	
	int run=10,end_time=1;
	
	
	cout<<"Numbers in Decending order "<<"\n\n";
	
	do
	{
		cout<<run <<"\n";
		run--;
	}
	while(run >= end_time);
	
}
