/*

Task 13


Program that takes record from user until user is pressing 'y'.


*/

#include<iostream>
using namespace std;
main()
{
	int id;
	char n,name[25];
	do
	{
		cout<<"STUDENT NAME:";
		cin>>name;
		cout<<"STUDENT ID:";
		cin>>id;
		cout<<"FOR ANOTHER RECORD 'y' \nOTHER THEN PRESS ANY KEY:";
		cin>>n;
		cout<<"\t\t\t\tSTUDENT NAME IS:"<<name<<endl;
	    cout<<"\t\t\t\tSTUDENT ID IS:"<<id<<endl;
	}while(n=='y');
}
