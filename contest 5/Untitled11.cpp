#include<bits/stdc++.h>
using namespace std;
int tinh()
{
	int f[10002],kq=0;
	memset(f,0,sizeof(f));
	for(int i=n/2;i>=1;i--){
		f[i]=i*i;
		if(f[i]==n) f[i]=1;
		if(f[i]<n) f[i]=n-f[i];
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		cout<<tinh()<<endl;
	}
}
