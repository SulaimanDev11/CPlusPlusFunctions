/*
program that product following result

*
**
***
****
*/

#include<iostream>

using namespace std;

main()
{
	
	int i=0,j=0;
	
	while(++i<=4)
	{	
		j=0;
		while(++j<=i)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	
}

