#include<bits/stdc++.h>
using namespace std;
string s;
int a[100],b[100]={0};
void BackTrack(int i)
{
	for(int j=0;j<s.length();j++){
		if(!b[j]){
			a[i]=j;b[j]=1;
			if(i==s.length()-1){
				for(int i=0;i<s.length();i++)
					cout<<s[a[i]];
				cout<<" ";
			}
			else BackTrack(i+1);
			b[j]=0;
		}
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>s;
		BackTrack(0);
		cout<<endl;
	}
}

