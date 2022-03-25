/*

Task 4c

Modify 4b to calulate area of a ring define Pi value as contant in your header file 

*/

#include<iostream>

#define pi 3.14

using namespace std;

//****************************Function declaration ******************************************************


void areaOfRing(float* );			//declaration of area function
float square(float);			//declaration of square function

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	float ext_rad,int_rad;			//variable declaration
	
	cout<<"Enter a external radius of a ring = ";
	cin>>ext_rad;
	
	cout<<"Enter a internal radius of a ring = ";
	cin>>int_rad;
	
	if(int_rad>ext_rad)
	{
		cout<<"\n\n*****Sorry you have entered a wrong radius external radius should be greater than internal radius****";
	}
	else
	{
		cout<<"Area of Ring is  ="<<areaOfRing(ext_rad);//-areaOfRing(int_rad);  //function call
	}
}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************

//**********************************Area**************************************************************

float areaOfRing(float radius)
{	
	float area;
	//area=3.14*radius*radius;
	area=pi*square(radius);
	return area;//pi*square(radius);
}

//**********************************End of Area**********************************************************

//********************************** Square **************************************************************

float square(float j)
{	
	return j*j;
}

//********************************** End of Square **************************************************************

//****************************End of Function defination ***********************************************
