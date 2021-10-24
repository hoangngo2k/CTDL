#include<bits/stdc++.h>
using namespace std;
//2
//5 9 
//1 5 4 1 2
//3 2
//1 1 1
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int dem=0;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				if(a[i]+a[j]==k)
					dem++;
		cout<<dem<<endl;
	}
}

