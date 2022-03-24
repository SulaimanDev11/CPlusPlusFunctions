#include<iostream>

using namespace std;

main()
{
	const int end=5;
	int original[end];
    int copy[end]={0};
	
	for(int i=0;i<end;i++)
	{
		cout<<"please enter a number at " << i+1<<"  position ";
		cin>>original[i];
	}
	
	for(int i=0;i<end;i++)
	{
		cout<<copy[i]<<endl;
	}
	
	for(int i=0;i<end;i++)
	{
		copy[i]=original[i];
	}
	
	
	for(int i=0;i<end;i++)
	{
		cout<<"\n\ncontent of copied array position "<<i<<" is = "<< copy[i];
	}
}

