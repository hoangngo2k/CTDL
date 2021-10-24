#include<bits/stdc++.h>
using namespace std;
long long poww(long long a,long long n)
{
	if(n==0) return 1;
	long long p=poww(a,n/2);
	if(n%2==0) return p*p;
	return a*p*p;
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<poww(2,n-1)<<endl;
	}
}

