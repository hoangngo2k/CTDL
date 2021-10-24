#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int count=0,n,k;cin>>n>>k;
		int a[103];
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				if(a[i]+a[j]==k)
					count++;
		cout<<count<<endl;
	}
}

