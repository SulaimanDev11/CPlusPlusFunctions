#include<iostream>

using namespace std;

main()
{

	int marks=0;

	cout<<"Please enter number obtained out of 100 	=\n";
	cin>>marks;

	if(marks>100||marks<0)
		cout<<"marks should be greater than 0 and less than 100";
		
	
	if(marks>=90)
		{
			cout<<"\nGrade  *****A*****\n";
		}
	
	else 
		if(marks>=80)
			{
				cout<<"\nGrade  ****B****\n";
			}
		
		else 
			if(marks>=70)
			{
				cout<<"\nGrade  ***C***\n";
			}
		
			else 
				if(marks>=60)
				{
					cout<<"\nGrade  **D**\n";
				}
				
				else cout<<"F\t\t\t You must take this course again";
	
}

