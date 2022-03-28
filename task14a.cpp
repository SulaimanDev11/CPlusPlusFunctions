/*

Task 14


Write a program that product following result using just nested for loop


1 2 3 4
5 6 7 8
910 11 12
13 14 15 16


*/

#include<iostream>

using namespace std;

main()
{
	
	int loop_end_outer=4,loop_end_inner=4,number=1;
	
	for(int outer=1;outer<=loop_end_outer;outer++)
	{
		for(int inner=1;inner<=loop_end_inner;inner++)
		{
			cout<<number<<"\t";
			number++;
		}		
		cout<<"\n";
	}
}


