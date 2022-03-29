#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j,k=1;
	for(j=1;j<=5;j++){
		for(i=1;i<=10;i++){
		cout<<setw(4)<<k<<" ";
		k++;
	}
	cout<<endl;
	}
}
