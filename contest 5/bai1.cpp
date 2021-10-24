#include<bits/stdc++.h>
using namespace std;
int c[1002][1002];
int tinh(string s1, string s2)
{
	int a=s1.length(), b=s2.length();
	memset(c,0,sizeof(c));
	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++){
			if(s1[i-1]==s2[j-1])
				c[i][j]=c[i-1][j-1]+1;
			else
				c[i][j]=max(c[i-1][j],c[i][j-1]);
			}
	return c[a][b];
}
int main()
{
	int t;cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<tinh(s1,s2)<<endl;
	}
}

