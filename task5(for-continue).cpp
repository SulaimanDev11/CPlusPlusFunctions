/*

task 5 

Write a program using for loop and continue statement

*/

#include<iostream>

using namespace std;

main()
{
	
	for(int i=0;i<=5;i++)
	{
		cout<<"value of i before continue & if  "<<i<<"\n";
		if(i==3)
		{
			cout<<"inside if \n\n";
			continue;
		}		
		cout<<"value of i after continue & if  "<<i<<"\n\n";
		
	}
	
}

