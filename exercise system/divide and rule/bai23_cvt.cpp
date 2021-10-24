#include<bits/stdc++.h>
using namespace std;
long long location(long long n, long long k)
{
	if(k%2==1) return 1;
	long long p=pow(2,n-1);
	if(p==k) return n;
	if(k<p) return location(n-1,k);
	return location(n-1,k-p);
}
main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		cout<<location(n,k)<<endl;
	}
}
