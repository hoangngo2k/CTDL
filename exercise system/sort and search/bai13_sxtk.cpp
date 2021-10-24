#include<bits/stdc++.h>
using namespace std;
//2
//7 2
//1 1 2 2 2 2 3
//7 4
//1 1 2 2 2 2 3
int main()
{
	int t;cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int dem=0;
		for(int i=1;i<=n;i++)
			if(a[i]==x)
				dem++;
		dem?cout<<dem:cout<<-1;
		cout<<endl;
	}
}

