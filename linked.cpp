#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct node {
	int data,no,no1,counter;
	node *head=NULL,*tail=NULL,*next,*temp,*curr;
	
	void create(){
		temp=new node;
		cout<<"Enter data into new node: ";
		cin>>temp->data;
		temp->next=NULL;
	}
	int delsea(){
		system("cls");
		cout<<"Enter data to operate on : ";
		cin>>no1;
		curr=head;
		return no1;
	}
	//**********Creation FUNCTION************
	void CreateFunction(){
		system("cls");
		if(head==NULL && tail==NULL){
			create();
			head=temp;
			tail=temp;
		}
		else if(head->next==NULL && head==tail){
			create();
			if(head->data>=temp->data){
				head=temp;
				head->next=tail;
			}
			else{
				tail=temp;
				head->next=tail;
			}
		}
		else{
			create();
			if(temp->data<=head->data){
				temp->next=head;
				head=temp;
			}
			else if(temp->data>=tail->data){
				tail->next=temp;
				tail=temp;		
			}
			else{
				curr=head;
				while(curr!=tail){
					if(temp->data>=curr->data && temp->data<curr->next->data){
						temp->next=curr->next;
						curr->next=temp;
						break;
					}
					else{
						curr=curr->next;
					}
				}
			}
		}
	}
	//**********DISPLAY FUNCTION**********
	void Displayfunction(){
		system("cls");
		curr=head;
		cout<<"******Result******\n\n";
		while(curr!=NULL){
			cout<<curr->data<<endl;
			curr=curr->next;
		}
		getch();
	}
	//**********SEARCH FUNCTION**********	
	void SearchFunction(){
		no=delsea();
		counter=1;
		while(curr!=NULL){
			if(curr->data==no){
				cout<<"Data found on "<<counter<<" node";
				getch();
				break;
			} 
			counter++;
			curr=curr->next;
		}	
	}	
	//**********DELETION FUNCTION**********	
	void DeleteFunction(){
		delsea();
		while(curr!=NULL){
			if(head->data==no){
				curr=curr->next;
				delete head;
				head=curr;
				cout<<"Head deleted";
				break;
			}
			else if(curr->next->data==no){
				temp=curr->next;
				curr->next=temp->next;
				delete temp;
				cout<<"Node deleted";
				break;
			}
			else if(curr->next==tail){
				delete tail;
				tail=curr;
				tail->next=NULL;
				cout<<"Tail deleted";
				break;
			}
			else{
				cout<<"Node data not Exist on node;";
				break;
			}
			curr=curr->next;
		}
		getch();
	}	
	//**********UPDATE FUNCTION**********	
	void UpdateFunction(){
		system("cls");
		cout<<"Enter data to search for Update : ";
		cin>>no;
		curr=head;
		while(curr!=NULL){
			if(curr->data==no){
				cout<<"Enter data to Update now: ";
				cin>>no;
				curr->data=no;
				break;
			}
			curr=curr->next;
		}
	}
};
//**********MAIN FUNCTION**********
int main(){
	node obj;
	int n;
	do{
		system("cls");
		cout<<"\n\n\t\t1. Create node\n\n\t\t2. Search node"
			<<"\n\n\t\t3. Display node\n\n\t\t4. Delete node "
			<<"\n\n\t\t5. Update node\n\n\t\t6.Exit\n\n\tEnter Menu : ";
		cin>>n;
		switch(n){
			case 1:{
				obj.CreateFunction();
				break;
			}
			case 2:{
				obj.SearchFunction();
				break;
			}
			case 3:{
				obj.Displayfunction();
				break;
			}
			case 4:{
				obj.DeleteFunction();
				break;
			}
			case 5:{
				obj.UpdateFunction();
				break;
			}
			case 6:{
				break;
			}
		}
	}
	while(n!=6);
}


