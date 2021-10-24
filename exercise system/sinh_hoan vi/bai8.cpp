#include<bits/stdc++.h>
using namespace std;
int check;
void to_list(int a[],int n)
{
	int run1=n-1, run2=n;
	while(run1 && a[run1]<a[run1+1]){
		run1--;
	}
	if(run1){
		while(a[run1]<a[run2])
			run2--;
		int temp=a[run1];a[run1]=a[run2];a[run2]=temp;
		int r=run1+1,s=n;
		while(r<s){
			int temp=a[r];a[r]=a[s];a[s]=temp;
			r++;
			s--;
		}
	}
	else
		check=0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
			a[i]=n-i+1;
		check=1;
		while(check){
			for(int i=1;i<=n;i++)
				cout<<a[i];
			cout<<" ";
			to_list(a,n);
		}
		cout<<endl;
	}
}

