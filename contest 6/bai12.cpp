#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[1002];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++)
			for(int j=0;j<n-i-1;j++)
				if(a[j]<a[j+1]) swap(a[j],a[j+1]);
		for(int i=0;i<k;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

