/*
task 8e

multidimentional matrix changing row

*/
#include<iostream>

using namespace std;

main()
{
	int row_size=3,col_size=3;
	int matrix[row_size][col_size];
	int row,col;
	
	for(row=0;row<row_size;row++)
	{
		for(col=0;col<col_size;col++)
		{
			cout<<"Please enter value for row position "<<row<<" column position "<<col<<"    ";
		
			cin>>matrix[row][col];
		}
	}
	
	cout<<"\n\n\n\n\n";
	
	
	for(row=row_size-1;row>=0;row--)
	{
		for(col=0;col<col_size;col++)
		{
		
			cout<< matrix[row][col]<<"\t";
		}
		cout<<"\n";
	}
}

