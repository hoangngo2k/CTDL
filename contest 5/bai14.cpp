#include<bits/stdc++.h>
using namespace std;
int c[1002][1002];
int tinh(string s1, int n)
{
	memset(c,0,sizeof(c));
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++){
			if(s1[i-1]==s1[j-1] && i!=j)
				c[i][j]=c[i-1][j-1]+1;
			else
				c[i][j]=max(c[i-1][j],c[i][j-1]);
			}
	return c[n][n];
}
int main()
{
	int t,n;cin>>t;
	while(t--){
		string s1;
		cin>>n>>s1;
		cout<<tinh(s1,n)<<endl;
	}
}

