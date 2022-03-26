#include<iostream>

using namespace std;

main()
{
	int number;
	
	start:
	cout<<"enter number 1 or 0\n\n\n";
	cin>>number;
	
	
	if(number==0)
	goto x;
	
	if(number==1)
	goto y;
	

	
	x:cout<<"you have pressed 0 \n\n\n"; 
	goto z;
	y:cout<<"you have pressed 1 \n\n\n";  
	
	z:cout<<"\n\n\nEnd of program";
	//goto start;
	
}

