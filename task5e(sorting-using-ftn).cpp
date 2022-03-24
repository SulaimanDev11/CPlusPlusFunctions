#include<iostream>

using namespace std;

void sort(int[],int);

main()
{
	const int end=5;
	
	int ary[end];
	    
	
	for(int i=0;i<end;i++)
	{
		cout<<"enter array 1   ";
		cin>>ary[i];
		
	}
		
	sort(ary,end);
		
	for(int i=0;i<end;i++)
	{
		cout<<"\n\n\n";
		cout<<ary[i];
		
	}
	

	
}

void sort(int ary_ftn[],int end)
{
	int temp;
	
	for(int j=0;j<end;j++)	
	{
	
		for(int i=0;i<end;i++)
		{
	
		if(ary_ftn[i]>ary_ftn[i+1])
			{
				temp=ary_ftn[i];
				ary_ftn[i]=ary_ftn[i+1];
				ary_ftn[i+1]=temp;
			}
		}
		 	
	}
	
	
	
}

