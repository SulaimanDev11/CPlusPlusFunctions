/*


Task 4b

Write a program using while loop that produce number 1-5? 
Change program when value loop variable value is equal to 3, loop should not print 3?

*/


#include<iostream>

using namespace std;

main()
{
	int loop=0;
	
	while(loop<=5)
	{
		loop++;	
		
		if(loop==3)
			{
				cout<<"inside if\n\n";
				continue;
			}
			
		cout<<loop <<"\n\n";
		
		
	}
	
}

