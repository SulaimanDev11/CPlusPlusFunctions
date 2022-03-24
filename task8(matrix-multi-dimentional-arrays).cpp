#include<iostream>

using namespace std;

main()
{
	//int row_size=2,col_size=3;
	int matrix[2][2];
	int row,col;
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			cout<<"Please enter value for row position "<<row<<" column position "<<col<<"    ";
		
			cin>>matrix[row][col];
		}
	}
	
	cout<<"\n\n\n\n\n";
	
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
		
			cout<< matrix[row][col]<<"\t";
		}
		cout<<"\n";
	}
}

