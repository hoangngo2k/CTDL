#include<bits/stdc++.h>
using namespace std;
//2
//5
//4 1 3 9 7
//10
//10 9 8 7 6 5 4 3 2 1
int a[1000002],n;
int partition(int l,int r)
{
	int i=l;
	for(int j=l;j<r;j++)
		if(a[j]<a[r])
			swap(a[j],a[i++]);
	swap(a[i],a[r]);
	return i;
}
void quicksort(int l, int r)
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
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		quicksort(1,n);
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

