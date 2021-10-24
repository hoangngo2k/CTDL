#include<bits/stdc++.h>
using namespace std;
//2
//7
//7 1 2 3 4 5 6
//8
//1 6 9 4 3 7 8 2
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		if(n%2==1)
			cout<<a[n]<<" ";
		for(int i=1;i<=n/2;i++){
			if(n%2==1)
				cout<<a[i]<<" "<<a[n-i]<<" ";
			else
				cout<<a[n-i+1]<<" "<<a[i]<<" ";
		}
		cout<<endl;
	}
}

