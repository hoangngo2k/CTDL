#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int run1=n-1, run2=n;
		while(run1 && a[run1]>a[run1+1])
			run1--;
		if(run1){
			while(a[run1]>a[run2])
				run2--;
			swap(a[run1],a[run2]);
			int r=run1+1,s=n;
			while(r<s){
				swap(a[r],a[s]);
				r++;
				s--;
			}
		}
		else{
			for(int i=1;i<=n;i++)
				a[i]=i;
		}
		for(int i=1;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

