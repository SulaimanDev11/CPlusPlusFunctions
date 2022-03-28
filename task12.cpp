/*
Task 12


program that produce first 10 integers in descending order

*/

#include<iostream>

using namespace std;

main()
{
	int fact=1,result=1;
	cout<<"Enter a number whos factorial you like\t=\t";
	cin>>fact;
	
	cout<<"\n\nFactorial of  "<<fact<<" is\t=\t";
	
	for(int number=fact;number>=1;number--)
	{
		result=result*number;
		
		
		
		
	}
	
	cout<<" \t= "<<result;
	
}

