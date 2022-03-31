#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j,k=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=10;j++){
			cout<<setw(2)<<k<<" ";
			k++;
		}
		cout<<endl;
	}
	return 0;
}
