/*

Task 11

Produce factorial of a number entered by user

*/


#include<iostream>

using namespace std;

main()
{
	int fact=1,result=1;
	cout<<"Enter a number whos factorial you like\t=\t";
	cin>>fact;
	
	cout<<"\n\nFactorial of  "<<fact<<" ! is\t=\t";
	
	while(fact>=1)
	{
		result=result*fact;
		cout<<fact;
		
		if(fact>1)
		{		
			cout<<" x ";
		}
		fact--;
		
	}
	
	cout<<" \t= "<<result;
	
}

