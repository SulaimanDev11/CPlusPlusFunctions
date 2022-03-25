/*
Task 5a

Write a program that detect whether number is even or not using just one function on bases of return value

*/
#include<iostream>

using namespace std;

//***************************************declaration****************************************************

bool greater(int,int);			//isEven function declaration

//***************************************End of declaration*********************************************


//*************************************** Main ****************************************************

main()
{	
	int number1=1,number2=2;
	
	bool a=greater(1,2);
/*	
	cout<<"Enter A Number 1  = ";
	cin>>number1;
	
	cout<<"Enter A Number 2  = ";
	cin>>number2;
	
	cout<<greater(number1,number2);
	
/*	if(greater(number1,number2))
	{
		cout<<"\n\n**Number1 is greater than Number 2**";
	}	
	else
	{
		cout<<"\n\n**Number2 is greater than number 1**";
	}
*/	
}

//***************************************function defination ****************************************************

bool greater(int x,int y)
{
/*
	if(x>y)
	{
		return 1;		//returning a bit '1' if number is even
	}
	else
	{
		return 0;		//returning a bit '0' if number is not even
	}*/
	
	return 1;
}

//*****************************************End of defination *******************************************************
