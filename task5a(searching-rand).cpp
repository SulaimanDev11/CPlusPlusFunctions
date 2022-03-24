#include<iostream>
#include<stdlib.h>

using namespace std;

main()
{
	const int end=100;
	
	int ary[end],found=0,number,i;
	    
	
	for(i=0;i<end;i++)
	{
		ary[i]=(rand()%100)+1;
	}
	
	
	for(i=0;i<end;i++)
	{
		cout<<ary[i]<<"\n";
	}
	
	cout<<"Please Enter Number between 1-100";
	cin>>number;
	
		
	for(i=0;i<end;i++)
	{
	 	if(ary[i]==number)
	 	{
	 		found=1;
	 		break;
	 	}
	}
	
	if(found==1)
	{
		cout<<"\nfound at "<<i;
	}
	else
	{
		cout<<"\nnot found  ";
	}	
}
