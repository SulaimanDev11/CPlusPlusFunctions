/*

Task 16 b


program produce following result 


	*
   **
  ***
 **** 
*****

*/

#include<iostream>

using namespace std;

main()
{


	int  loop_end=15;
	
	for(int outer=1;outer<=loop_end;outer++)
	{
		for(int space=loop_end;space>=outer;space--)
		{
			cout<<" ";	
		}
		for(int inner=1;inner<=outer;inner++)
		{
			cout<<"*";		
		}
		
		cout<<"\n";
		
	}	
}
