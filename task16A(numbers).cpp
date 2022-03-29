/*
program that product following result

1
12
123
1234
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
			cout<<j;
		}
		cout<<"\n";
	}
	
}

