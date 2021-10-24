#include<bits/stdc++.h>
using namespace std;
int a[1002], f[205][25005], n,v;
int tinh()
{
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=v;j++){
			f[i][j]=f[i-1][j];
			if(j>=a[i])
				f[i][j]=max(f[i][j],f[i-1][j-a[i]]+a[i]);
		}
	return f[n][v];
}
int main()
{
	cin>>v>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<tinh();
}

