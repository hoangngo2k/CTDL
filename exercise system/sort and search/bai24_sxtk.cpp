#include<bits/stdc++.h>
using namespace std;
//2
//10 3
//5 6 7 8 9 10 1 2 3 4
//10 3
//1 2 3 4 5 6 7 8 9 10
int a[10000002],n,k;

int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]==k)
				cout<<i<<endl;
		}
	}
}

