/*

task 19

Write program that produce sqauare of Asterisk

**********
*		 *
*		 *
* 		 *
*		 *
*		 *
**********

*/


#include<iostream>


using namespace std;

main()

{
	int square_size=6;
		
	for(int out=1;out<=square_size;out++)
	{
		if(out==1||out==square_size)
		{		
			
		for(int inn=1;inn<=square_size;inn++)
			{
				cout<<"* ";
			}
		
		}
		else
		{
			for(int inn=1;inn<=square_size;inn++)
			{
				if(inn==1||inn==square_size)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
		
			
		}
		
	cout<<"\n";
	}

}

