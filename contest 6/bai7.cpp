#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n], b[n],c[n];
		for(int i=1;i<=n;i++)
			cin>>a[i];
		int k=1,x=1;
		for(int i=1;i<n;i++)
			for(int j=i+1;j<=n;j++)
				if(a[i]>a[j]) b[k++]=i;
		for(int i=n;i>1;i--) 
			for(int j=i-1;j>=1;j--)
				if(a[i]<a[j]) c[x++]=i;
		cout<<b[1]<<" "<<c[1]<<endl;
	}
}

