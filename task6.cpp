/*

Task 6


Program  using for loop that prints odd number (from number 0-100)
*/

#include<iostream>

using namespace std;

main()
{
	int loop_end=10;
	
	cout<<"Even\tOdd\n";

	for(int number=0;number<=loop_end;number++)
	{
		if(number%2==0)
		{		
			cout<<number <<"\t";
		}
		else if(number%2)
		{
			cout<<number<<"\n";
		}
	}	
}

