/*


Task 4a

Write a program using while loop that produce number 1-5? 

See how use of continue effect running of program

*/


#include<iostream>

using namespace std;

main()
{
	int loop=1;
	
	while(loop<=4)
	{
		loop++;	
		cout<<"line before continue and if   "<<loop <<"\n\n";
		if(loop==2)
			{
				cout<<"inside if\n\n";
				continue;
			}
			
		cout<<"line after continue and if   "<<loop <<"\n\n";
		
		
	}
	
}

