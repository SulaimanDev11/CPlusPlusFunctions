/*
Task 1b:
	
	Introduction to an array
	
	declaration, assignment and display
	 


*/

#include<iostream>

using namespace std;

main()
{
	
	int my_first[4];	//declaration of an array
	
	cout<<"\nPlease enter first value of array ";
	cin>>my_first[0];
	cout<<"\nPlease enter second value of array   ";
	cin>>my_first[1];
	cout<<"\nPlease enter third value of array   ";
	cin>>my_first[2];
	cout<<"\nPlease enter fourth value of array   ";
	cin>>my_first[3];
	
	
	cout<<"\ncontent of first element of array are  "<<my_first[0];
	cout<<"\ncontent of second element of array are  "<<my_first[1];
	cout<<"\ncontent of third element of array are  "<<my_first[2];
	cout<<"\ncontent of fourth element of array are  "<<my_first[3];
}

