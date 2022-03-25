/*

Task 5a

Write a program that detect whether number is even or not using just one function on bases of return value

*/

#include<iostream>

using namespace std;

//***************************************declaration****************************************************

bool isEven(int);			//isEven function declaration

//***************************************End of declaration*********************************************


//*************************************** Main ****************************************************

main()
{	
	int number;
	
	
	cout<<"Enter A Number  = ";
	cin>>number;
	
	if(isEven(number))
	{
		cout<<"\n\n**Number is Even**";
	}	
	else
	{
		cout<<"\n\n**Number is odd**";
	}
	
}

//***************************************function defination ****************************************************

bool isEven(int num)
{
	if(num%2==0)
	{
		return 1;		//returning a bit '1' if number is even
	}
	else
	{
		return 0;		//returning a bit '0' if number is not even
	}
}

//*****************************************End of defination *******************************************************
