/*
program that product following result

     *
    **
   ***
  ****
 *****  
*/

#include<iostream>

using namespace std;

main()
{
	
	int i=0,j=0,end=10,space=0;
	
	while(++i<=end)
	{	
		space=end;
		while(--space>=i)
		{
			cout<<" ";
		}
			
		j=0;
		
		while(++j<=i)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	
}

