#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<4) cout<<-1;
		else
		{
			int f=0,s=0;
			while(n>=4 && n%7!=0)
				n-=4;f++;
			while (n!=0 && n%7==0)
				n-=7;s++;
			if(n==0){
				while(f--)	cout<<4;
				while(s--) cout<<7;
			}
			else
				cout<<-1;
		}
		 cout<<endl;
	}
}

