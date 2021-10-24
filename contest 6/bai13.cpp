#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,x,count=0;cin>>n>>x;
		int a[1002];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			if(a[i]==x) count++;
		if(count==0) cout<<-1;
		else cout<<count;
		cout<<endl;
	}
}
