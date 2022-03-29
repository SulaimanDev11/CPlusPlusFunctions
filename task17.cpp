/*

program that product following result

*************
*			*
*			*
*			*
*			*
*			*
*************


*/


#include<iostream>

using namespace std;

main()
{
	int rectsize=10,i=0,j=0;
	
	while(++i<=rectsize)
		{
			cout<<"*";
		}
	i=0;
	
	while(++i<=rectsize)
		{
			cout<<"\n*";
			j=0;
			while(++j<=rectsize-2)
				{
					cout<<" ";
				}
			cout<<"*";			
		}
	
	i=0;
	cout<<"\n";
	while(++i<=rectsize)
		{
			cout<<"*";
		}
	
}

