/*

Task 14


Write a program that product following result using just for loop


1 2 3 4
5 6 7 8
910 11 12
13 14 15 16


*/

#include<iostream>

using namespace std;

main()
{
	
	int loop_end=16;
	
	for(int number=1;number<=loop_end;number++)
	{
		cout<<number<<"\t";
		if(number%4==0)
		{
			cout<<"\n";
		}
		
	}
}


