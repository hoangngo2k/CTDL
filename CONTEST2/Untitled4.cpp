#include<iostream>
using namespace std;
int main()
{
	int s[100],b[100],n,k;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>s[i];
	while(n>0){
		for(int i=1;i<=n;i++)
			b[i]=s[i];
		b[n+1]=s[n];
		for(int i=n+2;i<=n+n;i++)
			b[i]=s[n-i+3];
	}
	for(int i=1;i<=n;i++)
		cout<<b[i];
}
