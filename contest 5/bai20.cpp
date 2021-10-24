#include<bits/stdc++.h>
using namespace std;
int number(char c)
{
	return c-'0';
}
long long tinh(string s)
{
	int n=s.length();
	long long f[15],kq=0;
	f[0]=number(s[0]);
	kq=f[0];
	for(int i=1;i<n;i++){
		long long t=number(s[i]);
		f[i]=f[i-1]*10+t*(i+1);
		kq+=f[i];
	}
	return kq;
}
int main()
{
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		cout<<tinh(s)<<endl;
	}
}

