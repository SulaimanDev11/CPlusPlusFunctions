/*

Task 5

Write a program using while loop that prints even number (from number 0-100)

*/


#include<iostream>

using namespace std;

main()
{
	int number=1,loop_end=100;
	
	while(number<=loop_end)
	{
		if(number%2==0)
		{
			cout<<number<<"\t";
		}
		number++;
	}
}

