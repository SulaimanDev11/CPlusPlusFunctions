/*

Task 10


take two inputs from user one for table & one for multiple of table and produce table

*/

#include<iostream>

using namespace std;

main()
{
	int loop_end=0,table;
	
	cout<<"Please Enter Number who's table you want  =\t";
	cin>>table;
	
	cout<<"\nPlease Enter Number of time you want your table to run =\t";
	cin>>loop_end;
	
	cout<<"\n\n\t*****Table of "<<table<<"***** \n\n\n";

	for(int number=1;number<=loop_end;number++)
	{
		cout<< table<<" x "<<number<<" = "<<table*number<<"\n";
	}	
}

