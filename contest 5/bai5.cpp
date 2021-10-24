#include<bits/stdc++.h>
using namespace std;
int a[1001][1001], N, K;
int m=1e9+7;
void tinh(){
	int i,j;
	for(i=0;i<=1000;i++)
		for(j=0;j<=i;j++){
			if(j==0 || j==i) a[i][j]=1;
			else
				a[i][j]=(a[i-1][j]+a[i-1][j-1])%m;
		}
}
main(){
	int t;cin>>t;
	while(t--){
		cin>>N>>K;
		tinh();
		cout<<a[N][K]<<endl;
	}
}
