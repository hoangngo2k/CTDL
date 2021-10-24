#include<bits/stdc++.h>
using namespace std;
int a[1002][1002]={0};
main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++){
    	int u,v;cin>>u>>v;
    	a[u][v]=1;
    	a[v][u]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
