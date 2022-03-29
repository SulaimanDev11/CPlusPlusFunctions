
/*

program that produce following result 

******
 ******
******
 ******

*/

#include<iostream>

using namespace std;

main()
{
	int row=1,row_end=0,col_end=0,col=1;
	
	cout<<"\nPlease enter Size of column\n";
	cin>>col_end;
	
	cout<<"\nPlease enter Size of row\n";
	cin>>row_end;
	
	
	while(row<=row_end)
	{
		col=0;
		while(col<=col_end)
		{
			cout<<" * ";
			col++;
		}
		row++;
		
		if(row%2==0)
		{
			cout<<"  ";
		}
	}
	
}

