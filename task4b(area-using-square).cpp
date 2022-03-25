/*

Task 4b

Modify 4a to calulate area of a ring using square function as well  

*/

#include<iostream>

using namespace std;

//****************************Function declaration ******************************************************


double areaOfRing(double);			//declaration of area function
double square(double);			//declaration of square function

//****************************End of function declaration ***********************************************

//****************************Start Main ****************************************************************
main()
{
	double ext_rad,int_rad;			//variable declaration
	
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
		cout<<"Area of Ring is  ="<<areaOfRing(ext_rad)-areaOfRing(int_rad);  //function call
	}
}
//****************************End of Main***************************************************************


//****************************Function defination ******************************************************

//**********************************Area**************************************************************

double areaOfRing(double radius)
{	
	double area=1.0;	// as we are using double that is why we are assigning it value 1.0
	
//	area=3.14*square(radius);
	
	return 3.14*square(radius);
}

//**********************************End of Area**********************************************************

//********************************** Square **************************************************************

double square(double j)
{	
	return j*j;
}

//********************************** End of Square **************************************************************

//****************************End of Function defination ***********************************************
