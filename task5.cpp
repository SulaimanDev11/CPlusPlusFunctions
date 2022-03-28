/*

Task 5


Program  using for loop that prints even number (from number 0-100)
*/

#include<iostream>

using namespace std;

main()
{
	int loop_end=100;
	
	cout<<"First 50 even numbers are \n";

	for(int number=0;number<=loop_end;number++)
	{
		if(number%2==0)
		{		
			cout<<number <<"\n";
		}
	}	
}

