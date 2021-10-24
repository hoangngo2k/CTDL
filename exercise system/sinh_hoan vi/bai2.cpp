#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k,i;
		cin>>n>>k;
		int a[k];
		for(int i=1;i<=k;i++)
			cin>>a[i];
		i=k;
		while(a[i]==n+i-k) i--;
		if(i){
			a[i]++;
			for(int j=i+1;j<=k;j++){
				a[j]=a[i]+j-i;
			}
		}
		else{
			for(int j=1;j<=k;j++)
				a[j]=j;
		}
		for(int j=1;j<=k;j++)
			cout<<a[j]<<" ";
		cout<<endl;
	}
}

