#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int i,j,k=1;
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			cout<<setw(3)<<k;
			k++;
		}
		cout<<endl;
	}
	return 0;
}
