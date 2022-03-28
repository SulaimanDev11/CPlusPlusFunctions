/*
   	 *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
	 *
	 
	 
	 using just for loop
	 
*/

#include<iostream>

using namespace std;

main()
{
	
	
	for(int row=0;row <=20;row=row+2)
	{	
		if(row <=10)
		{			
		for(int space=0;space<=(5-(row/2));space++)
			{
				cout<<" ";		
			}
			
			for(int col=0;col<=row;col++)
			{
				cout<<"*";
			}		
		}
		else
		{		
		for(int space=10;space<=(5+(row/2));space++)
			{
				cout<<" ";		
				
			}
		
			for(int col=20;col>=row;col--)
			{
				cout<<"*";
			}	
				
		}
		cout<<"\n";
		
	}	
	
	
}

