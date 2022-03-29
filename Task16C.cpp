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
	
	int i=0,j=0,end=10,space=0;
	
	while(++i<=end)
	{	
		space=0;
		while(++space<=i)
		{
			cout<<" ";
		}
			
		j=end;
		
		while(--j>=i)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	
}

