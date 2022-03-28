/*

Task 13


program that product following result


+*+*+*+*+*+*+*+*+*+*+*


*/

#include<iostream>

using namespace std;

main()
{

	for(int number=1;number<=20;number++)
	{
		if(number%2)
		{
			cout<<"+";
		}
		else
		{
			cout<<"*";
		}
	}
}

