#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int tab,lim,i;
	cout<<"Enter The Table You Want: ";
	cin>>tab;
	cout<<"Enter Limit For Table: ";
	cin>>lim;
	for(i=1;i<=lim;i++){
		cout<<tab<<"*"<<setw(3)<<i<<setw(2)<<"="<<setw(2)<<tab*i<<endl;
	}
	return 0;
}
