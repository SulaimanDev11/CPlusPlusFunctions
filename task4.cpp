/*

Task 4


Wprogram using for Loop and display following result

Number	Square	Cube
1		1		1
2		4		16
3		9		27
4		16		64
5		25		125	
6		36		216

*/

#include<iostream>

using namespace std;

main()
{
	int loop_end=6;
	
	cout<<"Number\tSquare\tCube\n";


	for(int number=0;number<=loop_end;number++)
	{
		cout<<number <<"\t"<<number*number <<"\t"<<number*number*number <<"\n";
	}	
}


