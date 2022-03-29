/*

Task 3

Modify task 2? Write program that takes an integer input & display number till that integer?



*/


#include<iostream>

using namespace std;

main()
{
	int number=1,loop_end=10;
	
	cout<<"Please Enter a number till where you want numbers  ";
	cin>>loop_end;
	
	while(number<=loop_end)
	{
		cout<<number<<"  ";
		number++;
	}
}


