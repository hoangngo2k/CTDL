#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		int n=s.length()-1;
		while(s[n]=='1'){
			s[n]='0';
			n--;
		}
		if(n>=0){
			s[n]='1';
		}
		cout<<s<<endl;
	}
}

