/*
program that product following result

****
***
**
*

*/

#include<iostream>

using namespace std;

main()
{
	
	int i=0,j=0,end=6;
	
	while(++i<=end)
	{	
		j=end;
		while(--j>=i)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	
}

