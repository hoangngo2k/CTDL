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
		sort(a+1,a+n+1);
		int mid=n/2,dem=0,i=n;
		while(a[i]>a[mid]){
			if(a[i]>=a[mid]*2){
				dem++;
				mid--;
				i--;
			}
			else{
				mid--;
			}
		}
		cout<<n-dem<<endl;
	}
}

