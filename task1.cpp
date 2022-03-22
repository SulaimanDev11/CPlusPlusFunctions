#include<iostream>    // Bec you need it for Cin or Cout statements..... 

using namespace std;

main()
{               //starting main's body

int age1,age2,age3,age4,age5,age6,age7,age8,age9,age10; // declaration
int totalage,averageage; /* we can write them seperately but we are putting them in same line seperated by comma( seperation operator)*/

cout<<endl<<" Please enter age of student 1:";
cin>>age1;          //cin in input stream
cout<<endl<<" Please enter age of student 2:";
cin>>age2; 
cout<<endl<<" Please enter age of student 3:";
cin>>age3; 
cout<<endl<<" Please enter age of student 4:";
cin>>age4; 
cout<<endl<<" Please enter age of student 5:";
cin>>age5; 
cout<<endl<<" Please enter age of student 6:";
cin>>age6; 
cout<<endl<<" Please enter age of student 7:";
cin>>age7; 
cout<<endl<<" Please enter age of student 8:";
cin>>age8; 
cout<<endl<<" Please enter age of student 9:";
cin>>age9; 
cout<<endl<<" Please enter age of student 10:";
cin>>age10; 

totalage=age1+age2+age3+age4+age5+age6+age7+age8+age9+age10;
averageage=totalage/10;
cout<<endl<<" The average state of the class is :"<<averageage; 
} 				//Ending main's body
 
