#include<iostream>

using namespace std;

main()
{
	const int end=100;
	
	int ary[end],found=0,number;
	    
	
	for(int i=0;i<end;i++)
	{
		ary[i]=0;
	}
	
	
	cout<<"Please Enter Number between 1-100";
	cin>>number;
	
		
	for(int i=0;i<end;i++)
	{
	 	if(ary[i]==number)
	 	{
	 		found=1;
	 	}
	}
	
	if(found==1)
	{
		cout<<"\nfound";
	}
	else
	{
		cout<<"\nnot found";
	}
	


	
}
