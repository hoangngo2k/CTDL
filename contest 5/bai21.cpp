#include<bits/stdc++.h>
using namespace std;
int a[1005],f[1005],n,k;
int m=1e9+7;
long long tinh()
{
	memset(f,0,sizeof(f));
	f[0]=1;
	for(int i=1;i<=k;i++)
		for(int j=1;j<=n;j++)
			if(a[j]<=i)
				f[i]=(f[i]+f[i-a[j]])%m;
	return f[k];
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		cout<<tinh()<<endl;
	}
}

