#include<bits/stdc++.h>
using namespace std;
//1
//3 3
//10 5 15
//20 3 2
int main()
{
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n+m];
		for(int i=0;i<n+m;i++)
			cin>>a[i];
		sort(a,a+n+m);
		for(int i=0;i<n+m;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

