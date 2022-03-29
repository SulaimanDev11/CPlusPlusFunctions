/*

Task 4

program using while Loop and display following result

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
	int number=1,loop_end=6;
	
	cout<<"Number\tSqaure\tCube\n";
	
	
	while(number<=loop_end)
	{
		cout<<number<<"\t"<<number*number<<"\t"<<number*number*number<<"\n";
		number++;
	}
}

