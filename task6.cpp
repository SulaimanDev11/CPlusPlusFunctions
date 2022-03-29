
/*
Task 6

Modify task 5 and produce sum of first 50 odd numbers from(0-100) and also produce sum of first 50 even numbers(0-100)?

*/


#include<iostream>

using namespace std;

main()
{
	int number=1,loop_end=100,odd=0,even=0;
	
		
	while(number<=loop_end)
	{
		if(number%2==0)
		{
			odd=odd+number;
		}
		else
		{
			even=even+number;
		}
		number++;
	}
	cout<<"\nSum of first 50 even numbers are  "<<even;
	cout<<"\nSum of first 50 odd numbers are  "<<odd;	
}

