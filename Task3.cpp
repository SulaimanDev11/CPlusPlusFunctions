/*

Task 3


Program takes an integer as input from user & display number till that integer
*/

#include<iostream>

using namespace std;

main()
{
	int end_int;
	
	cout<<"please enter an integer value";
	cin>>end_int;

	for(int number=0;number<=end_int;number++)
	{
		cout<<number <<"\n";
	}	
}


