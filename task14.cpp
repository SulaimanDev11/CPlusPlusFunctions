
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
	int row=1,col=1;
	
	while(row<=4)
	{
		col=0;
		while(col<=4)
		{
			cout<<"*";
			col++;
		}
		row++;
		cout<<"\n";
	}
	
}

