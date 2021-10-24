#include <iostream>
#include <string>
using namespace std;
int a[20]; int n,check;

void output(){
	for(int i=1;i<=n;i++) cout<<a[i];
}
void nextStr(){
	int run=n;
	while(a[run]== 1){
		a[run]=0; run--;
	}
	if(run) a[run]=1;
	else check=0;
	
}
main(){
	int t; cin>>t;
	while(t--){
		check=1;
		cin>>n;
		for(int i=1;i<=n;i++) a[i]=0;
		while(check){
			output();
			cout<<" ";	
			nextStr();
		}
		cout<<endl;
	}
}
