#include<iostream>

using namespace std;

main()
{
	int first=0,second=0;
	
	cout<<"Please enter first integer =\t";
	cin>>first;
	
	cout<<"Please enter second interger=\t";
	cin>>second;
	
	if(first%second==0)
	{
		cout<<"\n "<<first<<"\t is multiple of\t"<<second;
	}	
}

