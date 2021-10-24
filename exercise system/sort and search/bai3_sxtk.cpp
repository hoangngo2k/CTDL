#include<bits/stdc++.h>
using namespace std;
//2
//4
//4 3 2 1
//5
//1 5 4 3 2
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		int dem=0,k;
		for(int i=1;i<=n;i++){
			while(b[i]!=a[i]){
				for(int j=i+1;j<=n;j++)
					if(b[i]==a[j])
						k=j;
				swap(a[i],a[k]);
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}

