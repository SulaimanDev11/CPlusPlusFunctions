/*

Task 7

Program produce sum of first 50 odd numbers from (0-100) and also produce sum of first 50 even numbers (0-100)

*/

#include<iostream>

using namespace std;

main()
{
	int loop_end=10,sum_odd=0,sum_even=0;
	
	

	for(int number=0;number<=loop_end;number++)
	{
		if(number%2==0)
		{		
			sum_even=sum_even+number;
		}
		else if(number%2)
		{
			sum_odd	=sum_odd+number;;
		}
	}
	
	cout<<"sum of first"<<loop_end <<"Even number is \t=\t"<<sum_even <<endl;
	cout<<"sum of first"<<loop_end <<"odd number is \t=\t"<<sum_odd <<endl;	
}

