/*

task 

Reversing of character array

*/

#include<iostream>

using namespace std;

main()
{
	char name[100];
	
	cout<<"Please enter your name";
	cin>>name;
	
	int count=0;
	
	while(name[count]!='\0')
	{
		count++;
	}
	
	for(int i=count;i>=0;i--)
	{
		
		cout<<name[i];
	}
	
}

