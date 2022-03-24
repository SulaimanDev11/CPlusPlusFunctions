#include<iostream>

using namespace std;

main()
{
	const int end=5;
	
	int ary[end],smaller,temp;
	    
	
	for(int i=0;i<end;i++)
	{
		cout<<"enter array 1   ";
		cin>>ary[i];
		
	}
		
	
	for(int j=0;j<end;j++)	
	{
	
		for(int i=0;i<end;i++)
		{
	
		if(ary[i]>ary[i+1])
			{
				temp=ary[i];
				ary[i]=ary[i+1];
				ary[i+1]=temp;
			}
		}
		 	
	}	
		
	for(int i=0;i<end;i++)
	{
		cout<<"\n\n\n";
		cout<<ary[i];
		
	}
	

	
}

