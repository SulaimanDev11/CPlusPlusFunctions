#include<iostream>

using namespace std;

main()
{
	const int end=5;
	
	int ary1[end],ary2[end],equal=1,number;
	    
	
	for(int i=0;i<end;i++)
	{
		cout<<"enter array 1   ";
		cin>>ary1[i];
		cout<<"enter array 2   ";
		cin>>ary2[i];
	}
	
	
		
	for(int i=0;i<end;i++)
	{
	 	if(ary1[i]!=ary2[i])
	 	{
	 		equal=0;
	 		break;	 		
	 	}
	}
	
	if(equal==1)
	{
		cout<<"\nequal";
	}
	else
	{
		cout<<"\nnot equal";
	}
	


	
}
