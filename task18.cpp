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
*/

#include<iostream>

using namespace std;

main()
{
	
	int row=0,col=0,space;
	
	while(row <=20)
	{	
		if(row <=10)
		{		
		space=0;
		while(space<=(5-(row/2)))
			{
				cout<<" ";		
				space++;
		
			}
			col=0;
			while(col<=row)
			{
				cout<<"*";
				col++;
			}		
		}
		else
		{
		space=10;
		while(space<=(5+(row/2)))
			{
				cout<<" ";		
				space++;		
			}
			col=20;
			while(col>=row)
			{
				cout<<"*";
				col--;
			}	
				
		}
		cout<<"\n";
		row+=2;
	}	
	
	
}

