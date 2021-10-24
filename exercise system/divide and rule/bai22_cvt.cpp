#include<bits/stdc++.h>
using namespace std;
int location(int a[], int k, int left, int right)
{
	if(left>right) return 0;
	int mid=(left+right)/2;
	if(k==a[mid]) return mid;
	if(k<a[mid]) return location(a,k,left,mid-1);
	return location(a,k,mid+1,right);
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		if(location(a,k,1,n))
			cout<<location(a,k,1,n);
		else
			cout<<"NO";
		cout<<endl;
	}
}

