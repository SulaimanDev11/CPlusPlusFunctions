/*

Task 8


program that generate table of 2 using for loop
*/

#include<iostream>

using namespace std;

main()
{
	int loop_end=10;
	
	cout<<"\t*****Table of 2***** \n\n\n";

	for(int number=1;number<=loop_end;number++)
	{
		cout<< "2 x "<<number<<" = "<<2*number<<"\n";
	}	
}

