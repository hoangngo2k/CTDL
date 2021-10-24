#include<bits/stdc++.h>
using namespace std;
int a[1000002],n,k;
//2 
//5 16
//2 4 7 9 16
//7 98
//1 22 37 47 54 88 96
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		bool check=false;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==k)
				check=true;
		}
		check?cout<<1:cout<<-1;
		cout<<endl;
	}
}

