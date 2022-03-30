#include<iostream>

using namespace std;

main()
{
	
	int number1=0,number2=0,number3=0,number4=0,number5=0,largest=0;
	
	
	cout<<"Please enter 5 integers =\t";
	cin>>number1>>number2>>number3>>number4>>number5;
	
largest=number1;

	if(number2>largest)
		{
			largest=number2;
		}

	if(number3>largest)
		{
			largest=number3;
		}
	
	if(number4>largest)
		{
			largest=number4;
		}
		
	if(number5>largest)
		{
			largest=number5;
		}	
	
	cout<<"\nLargest value is  =\t"<<largest;

}

