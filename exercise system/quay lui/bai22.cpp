#include<bits/stdc++.h>
using namespace std;
int a[12][12],n,b[30],temp,check;
void result()
{
	for(int i=1;i<=30;i++){
		if(b[i]==1)	cout<<"D";
		if(b[i]==2)	cout<<"R";
	}
	cout<<" ";
}
void Try(int i,int j)
{
	if(a[i+1][j]==1){
		b[temp++]=1;
		Try(i+1,j);
		b[--temp]=0;
	}
	if(a[i][j+1]==1){
		b[temp++]=2;
		Try(i,j+1);
		b[--temp]=0;
	}
	if(i==n && j==n){
		result();
		check++;
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		temp=1;
		check=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		if(a[1][1]==0 || a[n][n]==0) ;
		else 
			Try(1,1);
		if(!check) cout<<-1;
		cout<<endl;
	}
}

