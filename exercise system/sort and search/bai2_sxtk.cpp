#include<bits/stdc++.h>
using namespace std;
//2
//5 7
//10 5 3 9 2
//5 6
//1 2 3 4 5
int n,k;
void merg(int a[],int l,int m, int r)
{
	int len1=m-l+1,len2=r-m;
	int a1[len1],a2[len2];
	for(int i=0;i<len1;i++)
		a1[i]=a[i+l];
	for(int i=0;i<len2;i++)
		a2[i]=a[i+m+1];
	int run1=0,run2=0,index=l;
	while(run1<len1 && run2<len2){
		if(abs(a1[run1]-k)<=abs(a2[run2]-k))
			a[index++]=a1[run1++];
		else
			a[index++]=a2[run2++];
	}
	while(run1<len1)
		a[index++]=a1[run1++];
	while(run2<len2)
		a[index++]=a2[run2++];
}
void mergSort(int a[],int l, int r)
{
	if(l<r){
		int m=(l+r)/2;
		mergSort(a,l,m);
		mergSort(a,m+1,r);
		merg(a,l,m,r);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		mergSort(a,0,n-1);
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";	
		cout<<endl;
	}
}

