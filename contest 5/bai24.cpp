#include<bits/stdc++.h>
using namespace std;
long long f[30][30];
void tinh()
{
	for(int i=0;i<=25;i++){
		f[i][0]=1;
		f[0][i]=1;
	}
	for(int i=1;i<=25;i++)
		for(int j=1;j<=25;j++)
			f[i][j]=f[i-1][j]+f[i][j-1];
}
int main()
{
	int t,n,m;cin>>t;
	tinh();
	while(t--){
		cin>>n>>m;
		cout<<f[n][m]<<endl;
	}
}

