#include<bits/stdc++.h>
using namespace std;
//2
//5
//0 2 1 2 0
//3
//0 1 0
int partition(int a[], int l, int r)
{
	int i=l;
	for(int j=l;j<r;j++)
		if(a[j]<=a[r])
			swap(a[j],a[i++]);
	swap(a[i],a[r]);
	return i;
}
void quicksort(int a[], int l, int r)
{
	if(l<r){
		int p=partition(a,l,r);
		quicksort(a,l,p-1);
		quicksort(a,p+1,r);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		quicksort(a,1,n);
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

