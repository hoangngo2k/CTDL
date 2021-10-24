#include<bits/stdc++.h>
using namespace std;
void Sort(int a[],int b[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(b[i]>b[j]){
				swap(a[i],a[j]);
				swap(b[i],b[j]);
			}
	int j=0,dem=1;
	for(int i=j+1;i<n;i++)
		if(a[i]>=b[j]){
			j=i;
			dem++;
		}
	cout<<dem<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		Sort(a,b,n);
	}
}

