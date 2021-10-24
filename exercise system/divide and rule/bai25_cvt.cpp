#include<bits/stdc++.h>
using namespace std;
char location(long long a[], long long n, long long k)
{
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=a[n-2]) return location(a,n-2,k);
	return location(a,n-1,k-a[n-2]);
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		a[1]=1;a[2]=1;
		for(int i=3;i<n;i++)
			a[i]=a[i-1]+a[i-2];
		cout<<location(a,n,k)<<endl;
	}
}

