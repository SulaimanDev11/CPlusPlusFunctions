/*

task 5a 

Write a program using for loop that produce number 1-5? 
Change program when value loop variable value is equal to 3, loop should not print 3?

*/

#include<iostream>

using namespace std;

main()
{
	
	for(int i=1;i<=5;i++)
	{
		
		if(i==3)
		{
			cout<<"inside if \n\n";
			continue;
		}		
		cout<<i<<"\n\n";
		
	}
	
}

