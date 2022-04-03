#include<iostream>
#include<windows.h>
using namespace std;
struct node {
	int stack[6],top=-1;
	void push(){
		system("cls");
		if(top==6-1){
			cout<<"Over flow";
		}
		else{
			top++;
			cout<<"Enter data : ";
			cin>>stack[top];
		}
	}
	void pop(){
		system("cls");
		if(top==-1){
			cout<<"Underflow";
		}
		else{
			top--;
		}
	}
	void display(){
		for(int i=0;i<=top;i++){
			cout<<stack[i]<<endl;
		}
	}
	void IsEmpty(){
		system("cls");
		if(top==-1){
			cout<<"stack is empty";
		}
		else{
			cout<<"stack is not empty";
		}
	}
};
main(){
	int n;
	node obj;
	while(true){
		cout<<"\n\n\t\t1. Push()\n\n\t\t2. Pop()"
			<<"\n\n\t\t3. Top()\n\n\t\t4. IsEmpty()\n\n\tEnter Menu : ";
		cin>>n;
		switch(n){
			case 1:{
				obj.push();
				break;
			}
			case 2:{
				obj.pop();
				break;
			}
			case 3:{
				obj.display();
				break;
			}
			case 4:{
				obj.IsEmpty();
				break;
			}
		}
	}
}
