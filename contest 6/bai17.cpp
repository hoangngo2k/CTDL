#include<bits/stdc++.h>
using namespace std;
long long a[1000002],b[1000002],n,m;
void swap(long long* a, long long* b)
{
	long long t = *a;
	*a = *b;
	*b = t;
}
long long partition(long long a[], long long l, long long r)
{
	long long i=l-1;
	for(int j=l;j<r;j++)
		if(a[j]<= a[r]){
			i++;
			swap(&a[i],&a[j]);
		}
	swap(&a[i+1],&a[r]);
	return i+1;
}
void quickSort(long long a[], long long l, long long r)
{
	if(l<r){
		long long p=partition(a,l,r);
		quickSort(a,l,p-1);
		quickSort(a,p+1,r);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		quickSort(a,0,n-1);
		quickSort(b,0,n-1);
		cout<<a[n-1]*b[0]<<endl;
	}
}