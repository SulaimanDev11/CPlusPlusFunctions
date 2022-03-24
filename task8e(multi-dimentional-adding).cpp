/*
task 8f

Adding two multi dimentional matrix

*/
#include<iostream>

using namespace std;

main()
{
	int row_size=2,col_size=2;
	int matrix[row_size][col_size];
	int matrix1[row_size][col_size];
	int row,col;
	
	for(row=0;row<row_size;row++)
	{
		for(col=0;col<col_size;col++)
		{
			cout<<"Please enter matrix 1 for row position "<<row<<" column position "<<col<<"    ";
		
			cin>>matrix[row][col];
		}
	}
		cout<<"\n\n\n\n\n";
		
	for(row=0;row<row_size;row++)
	{
		for(col=0;col<col_size;col++)
		{
			cout<<"Please enter matrix 2 for row position "<<row<<" column position "<<col<<"    ";
		
			cin>>matrix1[row][col];
		}
	}
	
	cout<<"\n\n\n\n\n";
	
	
	for(row=0;row<row_size;row++)
	{
		for(col=0;col<col_size;col++)
		{
			matrix[row][col]=matrix[row][col]+matrix1[row][col];
			cout<< matrix[row][col]<<"\t";
		}
		cout<<"\n";
	}
}

