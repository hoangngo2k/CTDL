#include<bits/stdc++.h>
using namespace std;
int a[1002],b[1002],n;
int tinh()
{
	int kq=1;
	for(int i=1;i<=n;i++){
		b[i]=a[i];
		for(int j=0;j<i;j++)
			if(a[j]<a[i])
				b[i]=max(b[i],b[j]+a[i]);
		kq=max(kq,b[i]);
	}
	return kq;
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cout<<tinh()<<endl;
	}
}

