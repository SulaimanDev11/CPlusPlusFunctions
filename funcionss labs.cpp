#include<iostream>
#include<windows.h>
using namespace std;
class functions{
	private:
		int arr[6],x,i,min,j,temp;
	public:
		
		void insertion(){
			cout<<"Enter data in arr: ";
			for(i=0;i<6;i++){
				cin>>arr[i];
			}
		}
		void display(){
			system("cls");
			for(i=0;i<6;i++){
				cout<<"Array of "<<i+1<<" : "<<arr[i]<<endl;
			}
		}
		void linearsea(){
			system("cls");
			cout<<"Enter data to find: ";
			cin>>x;
			for(i=0;i<6;i++){
				if(arr[i]==x){
					cout<<"Data found on index "<<i+1;
					break;
				}
			}
		}
		void slection(){
			system("cls");
			for(i=0;i<6;i++){
				min=i;
				for(j=0;j<6;j++){
					if(arr[j]<arr[min]){
						min=j;
					}
				}
				temp=arr[min];
				arr[min]=arr[i];
				arr[i]=temp;
			}
		}
};
main(){
	functions obj;
	int n;
	do{
		system("cls");
		cout<<"\n\n\t\t1. Insertion" 
			<<"\n\n\t\t2. Display" 
			<<"\n\n\t\t3. Linear search"
			<<"\n\n\t\t4. Selection "
			<<"\n\n\t\t5. Update node "
			<<"\n\n\t\t6.Exit "
			<<"\n\n\tEnter Menu : ";
		cin>>n;
		switch(n){
			case 1:{
				obj.insertion();
				break;
			}
			case 2:{
				obj.display();
				break;
			}
			case 3:{
				obj.linearsea();
				break;
			}
			case 4:{
				obj.slection();
				break;
			}
			case 6:{}
		}
	}
	while(n!=6);
}
