#include<bits/stdc++.h>
using namespace std;
//2
//5 3
//10 7 9 12 6
//6 2
//9 7 12 8 6 5
int a[1002],n,k;
int partition(int l, int r)
{
	int i=l;
	for(int j=l;j<r;j++)
		if(a[j]<a[r])	
			swap(a[j],a[i++]);
	swap(a[i],a[r]);
	return i;
}
void quicksort(int l,int r)
{
	if(l<r){
		int p=partition(l,r);
		quicksort(l,p-1);
		quicksort(p+1,r);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		quicksort(1,n);
		while(k--)
			cout<<a[n--]<<" ";
		cout<<endl;
	}
}

