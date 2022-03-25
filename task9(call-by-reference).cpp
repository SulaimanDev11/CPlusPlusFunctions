#include<iostream>

using namespace std;

void swap(int *,int *);//declaration

main()
{
	int a=4,b=8;
	
	cout<<"\nvalue of a before function call"<<a;
	cout<<"\nvalue of b before function call"<<b;
	swap(a,b);	
	
	
	cout<<"\n\nvalue of a after function call"<<a;
	cout<<"\nvalue of b after function call"<<b;
}



//****************************************defination**************************************
void swap(int *x,int *y)
{
	int temp=*x;
	    *x=*y;
	    *y=temp;
	
}
