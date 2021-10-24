#include<bits/stdc++.h>
using namespace std;
int f[1002][1002];
int tinh(string s)
{
	int kq=1,n=s.length();
	memset(f,0,sizeof(f));
	for(int i=0;i<n;i++) f[i][i]=1;
	for(int k=1;k<n;k++)
		for(int i=0;i<n-k;i++){
			int j=i+k;
			if(s[i]==s[j] && k>1)
				f[i][j]=f[i+1][j-1];
			else if(s[i]==s[j] && k==1) f[i][j]=1;
				 else f[i][j]=0;
			if(f[i][j]) kq=max(kq,j-i+1); 
		}
	return kq;
}
int main()
{
	int t;cin>>t;string s;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}
}

