#include<bits/stdc++.h>
using namespace std;
//1
//3 2
//2 1 6
//1 5
int main()
{
	int t;cin>>t;
	while(t--){
		int m,n;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		for(int i=1;i<=m;i++)
			cin>>b[i];
		int dem=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				if(pow(a[i],b[j])>=pow(b[j],a[i]))
					dem++;
		cout<<dem<<endl;
	}
}

