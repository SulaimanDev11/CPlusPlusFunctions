/*

Task 16


program produce following result 
******
 ******
******
 ******
******
 ******

*/

#include<iostream>

using namespace std;

main()
{

	int  loop_end=6;
	for(int outer=1;outer<=loop_end;outer++)
	{
		for(int inner=1;inner<=5;inner++)
		{
			cout<<"*";		
		}
		
		cout<<"\n";
		if(outer%2)
		{
			cout<<" ";
		}
		
	}	
}

