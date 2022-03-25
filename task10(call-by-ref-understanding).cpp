#include<iostream>

using namespace std;

void square(int *);

main()
{
	int val=10;
	cout<<"\nval before function call  "<<val;
	cout<<"\n"<<&val;
	square(&val);
	cout<<"\nval after function call   "<<val;
}

void square(int* x)
{
	cout<<"\naddress of val  "<<x<<" address of x   "<<&x;
	*x=*x * *x;
}
