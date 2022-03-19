#include<iostream>

using namespace std;

main()
{
	
	int percentage=0,inter_marks=0,sport=0;
	
	
	cout<<"Please Enter your percentage in FCS";
	cin>>percentage;
	
	cout<<"Please Enter your internal marks";
	cin>>inter_marks;
		
	cout<<"Press 1 if you are on sport seat else press any other number";
	cin>>sport;
	

	
	
	
	if(percentage>=45&&inter_marks>50||sport==1)
	{				
        cout<<"Congratulate\n\n*******You got admission at city university*******";

	}
	else 
	{
		cout<<"sorry\n\n*******You fail admission at city university*******";

	}
	
	
}
