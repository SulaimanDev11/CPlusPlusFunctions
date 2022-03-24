#include<iostream>
#include<stdlib.h>

using namespace std;

main()
{
	const int end=100;
	
	int ary[end],found=0,largest=0,i;
	    
	
	for(i=0;i<end;i++)
	{
		ary[i]=(rand()%100);
		cout<<ary[i]<<"\n";
	}
	
	
	for(i=0;i<end;i++)
	{
		if(ary[i]>largest)
		{
			largest=ary[i];
		}
	}
	
	cout<<"largest"<<largest;
	
}
