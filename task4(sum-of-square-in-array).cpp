#include<iostream>

using namespace std;

int square(int);

main()
{
	const int end=2;
	int ary[end];
	long sum_of_square=0;
    
	
	for(int i=0;i<end;i++)
	{
		cout<<"please enter a number at " << i+1<<"  position ";
		cin>>ary[i];
	}

	
	for(int i=0;i<end;i++)
	{
		ary[i]=square(ary[i]);
		sum_of_square=sum_of_square+ary[i];
	}
	
	cout<<"sum of array is  ";
	
	for(int i=0;i<end;i++)
	{
		cout<<ary[i]<<" + ";
		
	}
	cout<<"  ="<<sum_of_square;
	
}

int square(int i)
{
	return i*i;
	
}

