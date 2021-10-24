#include<bits/stdc++.h>
using namespace std;
int c[102][102][102];
string s1,s2,s3;
int a=s1.length(), b=s2.length(), x=s3.length();
int tinh(string s1, string s2, string s3)
{

	memset(c,0,sizeof(c));
	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
			for(int k=1;k<=x;k++){
			if(s1[i-1]== s2[j-1] && s2[j-1]==s3[k-1])
				c[i][j][k]=c[i-1][j-1][k-1]+1;
			else
				c[i][j][k]=max(c[i-1][j][k],max(c[i][j-1][k],c[i][j][k-1]));
			}
	return c[a][b][x];
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>a>>b>>x;
		cin>>s1>>s2>>s3;
		cout<<tinh(s1,s2,s3)<<endl;
	}
}

