#include<iostream>

using namespace std;

main()
{
	int i=0,j=0,k=0;
	
	while(++i<=4)
	{   
		j=0;
		while(++j<=4)
		{
			k++;
			cout<<k;
		}
	
		cout<<"\n";		
	}
	
}

