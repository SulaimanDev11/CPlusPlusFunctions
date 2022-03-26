/* 
Task 3

Write a program using for loop where your for loops run 1-5 but only print values 1 2 3?

*/

#include<iostream>

using namespace std;

main()
{
	int i;
	
	for(i=0;i<=4;i++)
	{
		cout<<"value of i before if	"<<i<<endl;
		if(i==3)
		{
			break;
		}
		
	}
	cout<<"value of i after for & break	"<<i<<endl;
}

