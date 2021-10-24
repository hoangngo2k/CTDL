#include<bits/stdc++.h>
using namespace std;
int a[202],c[202],n,k;
bool Tong()
{
	memset(c,0,sizeof(c));
	c[0]=1;
	for(int i=1;i<=n;i++)
		for(int j=k;j>=a[i];j--){
			if(c[j-a[i]]==1)
				c[j]=1;
			if(c[k]==1) return true;
		}
	return false;
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		Tong()?cout<<"YES":cout<<"NO";
		cout<<endl;
	}
}

