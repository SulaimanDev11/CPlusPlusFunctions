#include<iostream>

using namespace std;

main()
{
	
	int weight=0,height=0;
	
	
	cout<<"Please Enter height";
	cin>>height;
	
	cout<<"Please Enter weight";
	cin>>weight;
	
	
	
	if(height>=6)
	{
		if(weight<=75)		
		cout<<"Your weight is less than 75 and you are 6 feet tall \n\n\n";
		cout<<"Congratulate\n\n*******You are member of Basketball team*******";
		
	}
	else 
	{
		cout<<"sorry you fail to qualify try some other team";
	}
	
	
}
