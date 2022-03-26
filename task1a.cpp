/*
Task  A.....

Write a program using while loop and break statement that produce following results.


1 your roll number is less than 3
2 your roll number is less than 3
3 your roll number is greater than or equal to 3
4 your roll number is greater than or equal to 3
5 your roll number is greater than or equal to 3


*/

#include<iostream>

using namespace std;

main()
{
	
	int loop=0;
	while(loop <=5)
	{
		loop++;	
		cout<<loop<<"  ";
		
		
		if(loop>=3)
		{
				cout<<"your roll number is greater than or equal to 3\n";
				break; 				
		}
		
	  	cout<<"your roll number is less than 3 \n";  
				
	}
	
}

