#include<bits/stdc++.h>
using namespace std;
//1
//5 3
//1 2 3 4 5
//1 2 3
int main()
{
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n+m];
		for(int i=1;i<=n+m;i++)
			cin>>a[i];
		sort(a+1,a+m+n+1);
		cout<<a[1]<<" ";
		for(int i=2;i<=n+m;i++)
			if(a[i]!=a[i-1])
				cout<<a[i]<<" ";
		cout<<endl;
		for(int i=2;i<=n+m;i++)	
			if(a[i]==a[i-1])
				cout<<a[i]<<" ";
		cout<<endl;
	}
}

