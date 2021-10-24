#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int result=0;
		for(int i=1;i<=n;i++){
			int a;cin>>a;
			if(a==0)
				result=i;
		}
		cout<<result<<endl;
	}
}

