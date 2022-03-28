/*
Task 5

Write program that generate table of 2 using do-while loop

*/

#include<iostream>

using namespace std;

main()
{
	
	int run=1,end_time=10,table;
	
	cout<<"Enter Table you want to display  \t";
	cin>>table;
	
	for(run=1;run <=end_time;run++)
	
	
	{
		cout<<table <<" x"<<run <<" = "<<table*run <<"\n";
		
	}
	
	
}
