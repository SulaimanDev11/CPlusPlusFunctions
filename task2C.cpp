#include<iostream>

using namespace std;

main()
{
	
	int num=0;
	
	cout<<"Please Enter a number between 1 to 10";
	cin>>num;
	
	if(num<=10)
	{
		cout<<"You Have Pressed values between 1 and 10";
		
	}
	else if(num>10)
	{
		cout<<"Value is greater than 10";
	}
	else if(num<1)
	{
		cout<<"Value is less than 0";
	}
	
}

