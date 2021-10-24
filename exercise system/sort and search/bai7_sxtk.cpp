#include<bits/stdc++.h>
using namespace std;
//2
//11
//10 12 20 30 25 40 32 31 35 50 60
//9
//0 1 15 25 6 7 30 40 50
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],b[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		for(int i=1;i<=n;i++)
			if(a[i]!=b[i]){
				cout<<i<<" ";
				break;
			}
		for(int i=n;i>=1;i--)
			if(a[i]!=b[i]){
				cout<<i;
				break;
			}	
		cout<<endl;
	}
}

