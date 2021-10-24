#include<bits/stdc++.h>
using namespace std;
int partition(int a[],int l, int h)
{
	int x=a[h];
	int i=l-1;
	for(int j=l;j<=h;j++)
		if(a[j]<=x){
			i++;
			swap(a[i],a[j]);
		}
	swap(a[i+1],a[h]);
	return i+1;
}
void quick_sort(int a[],int l,int h)
{
	if(l<h){
		int p=partition(a,l,h);
		quick_sort(a,l,p-1);
		quick_sort(a,p+1,h);
	}
}
int main()
{
	int t,n;cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++) cin>>a[i];
		quick_sort(a,1,n);
		for(int i=1;i<=n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}

