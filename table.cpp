#include<iostream>
using namespace std;
int main(){
	int tab,i;
	cout<<"Enter Table You want: ";
	cin>>tab;
	for(i=1;i<=10;i++){
		cout<<tab<<"*"<<i<<"="<<i*tab<<endl;
	}
	return 0;
}
