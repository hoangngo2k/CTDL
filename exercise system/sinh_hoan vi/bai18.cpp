#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n,S,dem=0;
		cin>>n>>S;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1,greater<int>());
		int i=1;
		while(i<=n){
			if(S-a[i]>=0){
				S-=a[i];
				dem++;
			}
			i++;
		}
		cout<<dem<<endl;
	}
}

