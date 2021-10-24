#include<bits/stdc++.h>
using namespace std;
char a[20];int n,check;
void changeStr()
{
	int i=n;
	while(a[i]==66){
		a[i]=65;
		i--;
	}
	if(i)
		a[i]=66;
	else
		check=0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			a[i]=65;
		check=1;
		while(check){
			for(int i=1;i<=n;i++)
				cout<<a[i];
			cout<<" ";
			changeStr();
		}
		cout<<endl;
	}
}

