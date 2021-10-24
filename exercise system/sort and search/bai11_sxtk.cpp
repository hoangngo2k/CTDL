#include<bits/stdc++.h>
using namespace std;
//2
//3
//-8 -66 -60
//6
//-21 -67 -37 -18 4 -65 
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int min=a[1]+a[2];
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++){
				if(abs(min)>abs(a[i]+a[j]))
					min=a[i]+a[j];
			}
		cout<<min<<endl;
	}
}

