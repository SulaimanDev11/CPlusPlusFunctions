#include<iostream>

using namespace std;

main()
{
	int number;
	
	cout<<"Please enter number \t";
	cin>>number;
	
	if((number==(number/2)*2))
	{
		cout<<"Number was even";
	}
	else
	{
		cout<<"Number is odd";
	}
}

