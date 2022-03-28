/*
Task 3


Modify task 2? Write program that takes an integer input from user & display number till that integer


*/

#include<iostream>

using namespace std;

main()
{
	
	int run=1,end_time=0;
	
	cout<<"Enter Number till where you want to print  \t";
	cin>>end_time;
	
	do
	{
		cout<<run <<"\t";
		run++;
	}
	while(run <=end_time);
	
}
