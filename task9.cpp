/*

Task 9


take input from user and generate table for number user has requested

*/

#include<iostream>

using namespace std;

main()
{
	int loop_end=10,table;
	
	cout<<"Please Enter Number who's table you want  =\t";
	cin>>table;
	
	cout<<"\n\n\t*****Table of "<<table<<"***** \n\n\n";

	for(int number=1;number<=loop_end;number++)
	{
		cout<< table<<" x "<<number<<" = "<<table*number<<"\n";
	}	
}


