#include<bits/stdc++.h>
using namespace std;
void count(string s)
{
	int chu[70]={0};
	for(int i=0;i<s.length();i++)
		chu[s[i]-65]++;
	int dem=0;
	string a;
	for(int i=0;i<s.length();i++)
		if(chu[i]){
			a[dem]=i+65;
			dem++;
		}
	cout<<a;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int K;
		string s;
		cin>>K;
		cin>>s;
		count(s);
	}
}