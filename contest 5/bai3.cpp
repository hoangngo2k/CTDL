#include<bits/stdc++.h>
using namespace std;
int a[202],b[40005],n,s;
int check()
{
	memset(b,0,sizeof(b));
	b[0]=1;
	for(int i=1;i<=n;i++)
		for(int j=s;j>=a[i];j--)
			if(b[j]==0 && b[j-a[i]]==1)
				b[j]=1;
	return b[s];
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=1;i<=n;i++) cin>>a[i];
		if(check()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

