#include<bits/stdc++.h>
using namespace std;
int check;
void to_list(int a[],int n, int k)
{
	int i=k;
	while(i &&a[i]==n+i-k)	i--;
	if(i){
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	else check=0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k];
		for(int i=1;i<=k;i++)	a[i]=i;
		check=1;
		while(check){
			for(int i=1;i<=k;i++)
				cout<<a[i];
			cout<<" ";
			to_list(a,n,k);
		}
		cout<<endl;
	}
}

