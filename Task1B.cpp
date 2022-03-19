#include<iostream>

using namespace std;

main()
{
	
	int percentage=0,inter_marks=0;
	
	
	cout<<"Please Enter your percentage in FCS";
	cin>>percentage;
	
	cout<<"Please Enter your internal marks";
	cin>>inter_marks;
	
	
	
	if(percentage>=45)
	{
		if(inter_marks>50)
		{
				
        cout<<"Your percentage in Intermediate is greater than 45 and your mark in entry test are greater than  50 \n\n\n";
	    cout<<"sorry you have pass \n\ncity university quilification test";
		}
	}
	else 
	{
		cout<<"Congratulate\n\n*******You fail admission at city university*******";

	}
	
	
}
