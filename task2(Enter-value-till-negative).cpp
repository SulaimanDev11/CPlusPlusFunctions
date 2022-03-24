/*
Task 2:
	
	Introduction to an array
	
	When data entered in an array is equal's to '-1' array entry should terminate
	 


*/
#include<iostream>

using namespace std;

main()
{
	int ary[100],i=0,found=0,z;
	
	do
	{
		cout<<"Please enter a number";
		cin>>z;
		if(z!=-1)
		{
		ary[i]=z;
		i++;
		}
	}
	while(i<100&&z!=-1);
	
	cout<<"total number of positive integers entered by a user"<<i-1;
}

