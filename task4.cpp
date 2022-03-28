/*
Task 4


Write a program using do-while loop that prints even number (from number 0-100)

*/

#include<iostream>

using namespace std;

main()
{
	
	int run=1,end_time=100;
	
	cout<<"First 50 Even numbers are  \n";

	
	do
	{
		cout<<run <<"\n";
		run++;
	}
	while(run <=end_time);
	
}
