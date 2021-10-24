#include<bits/stdc++.h>
using namespace std;
//2
//5
//4 5 3 8 6
//3
//2 1 3
int main()
{
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		long long sum=0;
		for(int i=1;i<n;i++)
			if(a[i]-a[i-1]>1)
				sum+=a[i]-a[i-1]-1;
		cout<<sum<<endl;
	}
}

