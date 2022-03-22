#include<iostream>

using namespace std;

main()
{


	float radius=0.0,diameter=0.0,circumference=0.0,area=0.0,pi=3.14;

	cout<<"please enter Radius of a circle";
	cin>>radius;

	diameter=2*radius;

	circumference=2*pi*radius;

	area=pi*radius*radius;

	cout<<"\nThe Diameter of the circle\t="<<diameter;

	cout<<"\nThe Circumference of the circle\t="<<circumference;	
	
	cout<<"\nThe Area of the circle\t="<<area;	
}

