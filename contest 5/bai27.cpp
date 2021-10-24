#include<bits/stdc++.h>
using namespace std;
int a[1002], b[1002], f[1002][1002], n,v;
int tinh()
{
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=v;j++){
			f[i][j]=f[i-1][j];
			if(j>=a[i])
				f[i][j]=max(f[i][j],f[i-1][j-a[i]]+b[i]);
		}
	return f[n][v];
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>v;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>b[i];
		cout<<tinh()<<endl;
	}
}

