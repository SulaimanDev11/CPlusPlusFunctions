/*

Task 4a

Write a program that calculate area of ring using functio	ns 

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


float areaOfRing(float radius);	
		//prototype

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	int ext_rad,int_rad;
	float val;
	
	cout<<"Enter a external radius of a ring = ";
	cin>>ext_rad;
	
	cout<<"Enter a internal radius of a ring = ";
	cin>>int_rad;
		
	cout<<"Area of Ring is  ="<<areaOfRing((ext_rad,int_rad));  //function call

}

float areaOfRing(float radius)
{	
	double area=1.0;	// as we are using double that is why we are assigning it value 1.0
	
	area=3.14*radius*radius;
	
	return area;
}

