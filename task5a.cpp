/*

Task 5a

Write a program using while loop that prints even and odd numbers separately (from number 0-100)

*/


#include<iostream>

using namespace std;

main()
{
	int number=1,loop_end=100;
	
	cout<<"odd\teven\n";
	
	while(number<=loop_end)
	{
		if(number%2==0)
		{
			cout<<number<<"\n";
		}
		else
		{
			cout<<number<<"\t";
		}
		number++;
	}
}

