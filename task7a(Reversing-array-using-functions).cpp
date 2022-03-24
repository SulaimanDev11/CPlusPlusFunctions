/*

task 

Reversing of character array

*/

#include<iostream>

using namespace std;

void reverse(char[],int);

main()
{
	char name[100];
	
	cout<<"Please enter your name without space ";
	cin>>name;
	
	int count=0;
	
	while(name[count]!='\0')
	{
		count++;
	}
	
	reverse(name,count);

		
	cout<<"\n\n\n"<<name;


}


void reverse(char charact[],int count)
{

	for(int i=count-1;i>=0;i--)
	{
		
		cout<<charact[i];
	}
	
	
}
