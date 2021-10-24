#include<bits/stdc++.h>
using namespace std;
//2
//10
//5 6 7 8 9 10 1 2 3 4
//5
//1 1 1 1 1
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		bool test=true;
		for(int i=0;i<n;i++){
			if(a[i]!=a[i+1]){
				cout<<a[i]<<" "<<a[i+1];
				test=false;
				break;
			}	
		}
		if(test) cout<<-1;
		cout<<endl;
	}
}

