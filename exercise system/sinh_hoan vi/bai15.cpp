#include<bits/stdc++.h>
using namespace std;
void hoanvi(string s)
{
	int run1=s.length()-2,run2=s.length()-1;
	while(run1 && s[run1]>=s[run1+1])
		run1--;
	if(run1){
		while(s[run1]>=s[run2])
			run2--;
		int temp=s[run1];s[run1]=s[run2];s[run2]=temp;
		int r=run1+1,x=s.length()-1;
		while(r<x){
			int temp=s[r];s[r]=s[x];s[x]=temp;
			r++;
			x--;
		}
		cout<<s<<endl;
	}
	else
		cout<<"BIGGEST"<<endl;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--){
		string s;
		cin>>n;cin>>s;
		cout<<n<<" ";
		hoanvi(s);
	}
}

