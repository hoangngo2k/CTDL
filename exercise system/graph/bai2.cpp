#include<bits/stdc++.h>
using namespace std;
int a[1002][1002]={0};
main()
{
    int n;
	cin>>n;
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=n;j++)
    		cin>>a[i][j];
    for(int i=n;i>=1;i--)
    	for(int j=n;j>=1;j--)
    		if(a[i][j]==1 && i<j)
    			cout<<i<<" "<<j<<endl;
}   	
