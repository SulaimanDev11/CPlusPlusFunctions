


#include<iostream>

using namespace std;

main()
{
	
	int previous=0,present=1,end=5,one;
	
	for(int i=1;i<=end;i++)
	{
		if(i==1)
		cout<<previous<<"\t";
		
		cout<<present<<"\t";
		previous=present;
		present=previous+present;
				
	}
	
}

