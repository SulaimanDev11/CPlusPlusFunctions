#include<iostream>

using namespace std;

void ftn(int [],int);
main()
{
	int size=5,ary[size];
	ftn(ary,size);
	
	cout<<"\n\n Array printed back in main is \n";
	for(int i=0;i<size;i++)
	{
		
		cout<<ary[i]<<"\n";
	}
	
}


void ftn(int c_ary[],int f_size)
{
	for(int i=0;i<f_size;i++)
	{
		cout<<"Please enter array value for position  "<< i+1<<"   ";
		cin>>c_ary[i];
	}
	
}
