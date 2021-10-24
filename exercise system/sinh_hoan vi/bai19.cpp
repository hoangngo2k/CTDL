#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void result()
{
	cout<<"[";
	for(int i=1;i<n;i++)
		cout<<a[i]<<" ";
	cout<<a[n]<<"]"<<endl;
}
void Try(int i)
{
	if(i){
		result();
		for(int j=1;j<i;j++)
			a[j]+=a[j+1];
		Try(--n);
	}
	else
		return;
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		Try(n);
	}
}

