#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],sum=0,n,k,check;
bool test()
{
	for(int i=1;i<=n;i++){
		sum+=a[i]*b[i];
	}
	if(sum==k)
		return 1;
	else
		return 0;
}
void result()
{
	check++;
	int mark;
	for(int i=n;i>=1;i--)
		if(b[i]==1){
			mark=i;
			break;
		}
	cout<<"[";
	for(int i=1;i<=n;i++){
		if(b[i]){
			cout<<a[i];
			if(i!=mark) cout<<" ";
		}
	}
	cout<<"] ";
}
void Try(int i)
{
	for(int j=1;j>=0;j--){
		b[i]=j;
		if(i==n)
			if(test())
				result();
		else Try(i+1);
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		check=0;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		Try(1);
		if(!check) cout<<-1;
		cout<<endl;
	}
}

