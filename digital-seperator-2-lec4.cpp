#include<iostream>

using namespace std;

main()
{

int number,digit;

cout<<"Please Enter 4 digits number:";
cin>>number;

digit=number%10;
number=number/10;
cout<<endl<<"Last Digital of Number You have enter is :"<<digit;

digit=number%10;
number=number/10;
cout<<endl<<"Last Digital of Number You have enter is :"<<digit;

digit=number%10;
number=number/10;
cout<<endl<<"Last Digital of Number You have enter is :"<<digit;

cout<<endl<<"Last Digital of Number You have enter is :"<<number;
}

