#include<bits/stdc++.h>
using namespace std;
//2
//5
//1 2 3 5
//10
//1 2 3 4 5 6 7 8 10
int main()
{
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long a[n];
		for(int i=1;i<n;i++){
			cin>>a[i];
			if(a[i]!=i)
				cout<<i<<endl;
		}		
	}
}

