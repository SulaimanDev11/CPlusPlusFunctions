/*

Task 17 B


program produce following result 


*****
****
***
**
*

*/

#include<iostream>

using namespace std;

main()
{

	int  loop_end=6;
	
	
	for(int outer=loop_end;outer>=0;outer--)
	{
		for(int inner=1;inner<=outer;inner++)
		{
			cout<<"*";		
		}
		
		cout<<"\n";
		
	}	
}

