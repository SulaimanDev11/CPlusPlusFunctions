/*
Task 9

Write a program that product following result 

***********
 ***********
***********
 ***********
***********
 ***********


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
		
		if(outer%2==0)
			{
				cout<<" ";
			}
				
	}
	while(outer <=end_time);
	
}

