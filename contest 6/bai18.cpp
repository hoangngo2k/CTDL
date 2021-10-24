#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000002],b[1000002];
void swap(long long* a, long long* b)
{
	long long t=*a;
	*a=*b;
	*b=t;
}
long long partition(long long l, long long r)
{
	long long i=l-1;
	for(int j=l;j<r;j++)
		if(a[j]<=a[r]){
			i++;
			swap(&a[i],&a[j]);
		}
	swap(&a[i+1],&a[r]);
	return i+1;
}
void quickSort(long long l, long long r)
{
	if(l<r){
		long long p=partition(l,r);
		quickSort(l,p-1);
		quickSort(p+1,r);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		long long n,m;cin>>n>>m;
		for(int i=0;i<n+m;i++) cin>>a[i];
		quickSort(0,n+m-1);
		for(int i=0;i<n+m;i++) cout<<a[i]<<" ";	
		cout<<endl;
	}
}

