/*

Task 10

Tax calculator using switch statement

1  Salary Below 10,000					no tax detection

2  salary 10,000	to 19,999          2% tax detection

3  salary  20,000  to 29,999           4% tax detection

4  salary  30,000  to 39,999           6% tax detection

5  salary  40,000  to 49,999           8% tax detection

6  salary above 50,000  			   10% tax detection
*/
#include<iostream>

using namespace std;

main()
{
	
	int choice;
	float salary,tax,f_salary;
	
	cout<<"Press  1 if your Salary is Below 10,000 \n";
	cout<<"Press  2 if your is between salary 10,000  to 19,999 \n";
	cout<<"Press  3 if your is between salary 20,000  to 29,999 \n";
	cout<<"Press  4 if your is between salary 30,000  to 39,999  \n";
	cout<<"Press  5 if your is between salary 40,000  to 49,999 \n";
	cout<<"Press  6 if your Salary is above 50,000 \n";
	
	
	cin>>choice;
	
	cout<<"\nplease enter your salary\n";
	cin>>salary;
	
	switch(choice)
	{
	
		case 1: 
				cout<<"\n\n\nno tax detected salary you are going to recieve is =  "<<salary;
				break;
		
	 
		case 2: 
				tax=(salary* 2)/100;
				f_salary=salary-tax;
				cout<<"\n\n\nActual Salary  =  "<<salary <<"\n\n\n2% tax detected  on salary = "<< tax <<"\n\n\nSalary  you are going to recieve is =  "<<f_salary;
				break;
		
		case 3: 
				tax=(salary* 4)/100;
				f_salary=salary-tax;
				cout<<"\n\n\nActual Salary  =  "<<salary <<"\n\n\n4% tax detected  on salary = "<< tax <<"\n\n\nSalary  you are going to recieve is =  "<<f_salary;
				break;
		 
		case 4: 
				tax=(salary* 6)/100;
				f_salary=salary-tax;
				cout<<"\n\n\nActual Salary  =  "<<salary <<"\n\n\n6% tax detected  on salary = "<< tax <<"\n\n\nSalary  you are going to recieve is =  "<<f_salary;
				break;
 
		case 5: 
				
				tax=(salary*8)/100;
				f_salary=salary-tax;
				cout<<"\n\n\nActual Salary  =  "<<salary <<"\n\n\n8% tax detected  on salary = "<< tax <<"\n\n\nSalary  you are going to recieve is =  "<<f_salary;
				break;
		default:
			
				tax=(salary*10)/100;
				f_salary=salary-tax;
				cout<<"\n\n\nActual Salary  =  "<<salary <<"\n\n\n10% tax detected  on salary = "<< tax <<"\n\n\nSalary  you are going to recieve is =  "<<f_salary;
				break;
	}
	
}

