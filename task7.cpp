/*
Task 7

Write a program that product following result 


+*+*+*+*+*+*+*+*+*+*+*	


*/

#include<iostream>

using namespace std;

main()
{
	
	int run=1,end_time=20;
	

	
	do
	{	
		if(run%2==0)
		{
			cout<<"*";
		}
		else
		{
			cout<<"+";
		}
		
		run++;
	}
	while(run <= end_time);
	
}
