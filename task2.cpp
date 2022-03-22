#include<iostream>
#include<stdlib.h>

using namespace std;

main()
{

int number,remainder,number1,number2,number3,number4;


cout<<"Please Enter 4 digits number:";
cin>>number;

number4=number%10;
number=number/10;
cout<<endl<<"Last Digital of Number You have enter is :"<<number4;

number3=number%10;
number=number/10;
cout<<endl<<"Last Digital of Number You have enter is :"<<number3;

number2=number%10;
number=number/10;
cout<<endl<<"Last Digital of Number You have enter is :"<<number2;


cout<<endl<<"Last Digital of Number You have enter is :"<<number;
}

