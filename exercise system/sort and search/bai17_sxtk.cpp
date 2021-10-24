#include<bits/stdc++.h>
using namespace std;
//2
//6 6
//5 7 9 3 6 2
//1 2 6 -1 0 9
//6 6
//1 4 2 3 10 2
//4 2 6 5 2 9
long long a[1000002],b[1000002],n,m;
long long partition(long long a[], long long l,long long r)
{
	long long i=l;
	for(int j=l;j<r;j++)
		if(a[j]<a[r])
			swap(a[j],a[i++]);
	swap(a[i],a[r]);
	return i;
}
void quicksort(long long a[], long long l, long long r)
{
	if(l<r){
		long long p=partition(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
			cin>>b[i];
		quicksort(a,0,n-1);
		quicksort(b,0,n-1);
		cout<<a[n-1]*b[0]<<endl;
	}
}

