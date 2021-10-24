#include<bits/stdc++.h>
using namespace std;
//2
//3
//131 11 48
//4
//111 222 333 446
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool c[12]={false};
		for(int i=1;i<=n;i++){
			string s;cin>>s;
			for(int i=0;i<s.length();i++)
				c[s[i]-'0']=true;
		}
		for(int i=0;i<12;i++)
			if(c[i])
				cout<<i<<" ";
		cout<<endl;
	}
}

