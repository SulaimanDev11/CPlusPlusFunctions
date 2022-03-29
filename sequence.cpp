#include<iostream>
using namespace std;
int main(){
	int i;
	for(i=1;i<=15;i+=2){
		cout<<i;
		if(i<15){
			cout<<",";
		}
	}
	return 0;
}
