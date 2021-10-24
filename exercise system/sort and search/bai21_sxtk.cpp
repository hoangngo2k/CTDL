#include<bits/stdc++.h>
using namespace std;
//2
//5
//5 5 4 6 4
//5
//9 9 9 2 5
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],c[12]={0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<10;i++)
			c[a[i]]++;
		for(int i=0;i<10;i++){
			cout<<c[i]<<" ";
		}
//		int dem=0,b[12];
//		for(int i=0;i<12;i++){
//			cout<<c[i]<<" ";
//			if(c[i]){
//				a[dem]=i;
//				b[dem++]=c[i];
//			}
//			
//		}
//		for(int i=0;i<dem;i++){
//			cout<<a[i]<<" "<<b[i]<<endl;
//		}
//		for(int i=0;i<dem-1;i++)
//			for(int j=i+1;j<dem;j++)
//				if(b[i]<b[j]){
//					swap(b[i],b[j]);
//					swap(a[i],a[j]);
//				}
//		int i=0;
//		while(b[i]-- && i<dem){
//			cout<<a[i]<<" ";
//			i++;
//		}
		cout<<endl;
	}
}

