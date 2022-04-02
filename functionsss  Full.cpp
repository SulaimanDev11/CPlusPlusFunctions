#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
class functions{
	private:
		int arr[6],i,min,j,temp,mid,first,last,x;
	public:
		
		void insertion(){
			system("cls");
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
			getch();
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
			getch();
		}
		void slectionSort(){
			system("cls");
			for(i=0;i<6;i++){
				min=i;
				for(j=i+1;j<6;j++){
					if(arr[min]<arr[j]){
						min=j;
					}
					else{
						temp=arr[min];
						arr[min]=arr[j];
						arr[j]=temp;
					}
				}
			}
			getch();
		}
		
		void bubbleSort(){
			system("cls");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					if(arr[j]>arr[j+1]){
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			getch();
		}
		
		void binarySearch(){
			system("cls");
			cout<<"Enter data to find: ";
			cin>>x;
			first=0;
			last=5;
			while(first<last){
				mid=(first+last)/2;
				if(x>arr[mid]){
					first=mid+1;
				}
				else if(x<arr[mid]){
					last=mid-1;
				}
				else
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
			<<"\n\n\t\t5. Bubble Sort "
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
				obj.slectionSort();
				break;
			}
			case 5:{
				obj.bubbleSort();
				break;
			}
			case 6:{
			//	obj.binarySearch;
				break;
			}
		}
	}
	while(n!=8);
}
