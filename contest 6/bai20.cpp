#include<bits/stdc++.h>
using namespace std;
int a[10002],n,k,sum;
void count()
{
	int i=0,dem=1,sum=0;
	while(i<n && dem<n){
		if(a[i]-a[dem]<k)
			sum++;
		else dem++;
	}
	i++;
	dem=1;
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,greater<int>());
		count();
		cout<<sum<<endl;
	}
}
