/*
TASK 2

Use do-while loop to print first 10 integers with tab space

*/

#include<iostream>

using namespace std;

main()
{
	
	int run=1,end_time=9;
	
	do
	{
		cout<<run<<"\t";
		run++;
	}
	while(run <=end_time);
	
}
