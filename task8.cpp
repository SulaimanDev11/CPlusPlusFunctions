/*
Task 8

Write a program that produce following result 

******
******
******
******

Hint:  Use nested do-while loop to complete structure?

*/

#include<iostream>

using namespace std;

main()
{
	
	int outer=1,inner=1,end_time=8;
	
	
	do
	{
		inner=1;
		do
		{
			cout<<"*";
			inner++;	
		}
		while(inner<=end_time);
		cout<<"\n";
		outer++;		
	}
	while(outer <=end_time);
	
}
