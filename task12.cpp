/*

Task 12

program that product following result 

+*+*+*+*+*+*+*+*+*+*+*	

*/


#include<iostream>

using namespace std;

main()
{
	int number=1,loop_end=20;
	
	while(number<=loop_end)
	{
		if(number%2==0)
		{
			cout<<"*";
		}
		else
		{
			cout<<"+";
		}
		number++;
	}
}

