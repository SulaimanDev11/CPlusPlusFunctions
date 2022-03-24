#include<iostream>

using namespace std;

main()
{
	char name[10];
	
	cout<<"Please enter your name  ";
	cin>>name;
	
	cout<<endl<<name<<endl;
	
	for(int i=0;i<15;i++)
	{
		cout<<name[i];
	}
}

