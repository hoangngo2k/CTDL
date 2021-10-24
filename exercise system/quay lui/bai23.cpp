#include<bits/stdc++.h>
using namespace std;
int a[10][10],b[100],c[10][10]={0},n,temp,check;
void display()
{
	for(int i=1;i<=100;i++){
		if(b[i]==1)
			cout<<"D";
		if(b[i]==2)
			cout<<"R";
		if(b[i]==3)
			cout<<"L";
		if(b[i]==4)
			cout<<"U";
	}
	cout<<" ";
}
void Try(int i, int j)
{
	if(i<n && a[i+1][j]==1 && c[i+1][j]==0){
		b[temp++]=1;
		c[i+1][j]=1;
		Try(i+1,j);
		b[--temp]=0;
		c[i+1][j]=0;
	}
	if(j<n && a[i][j+1]==1 && c[i][j+1]==0){
		b[temp++]=2;
		c[i][j+1]=1;
		Try(i,j+1);
		b[--temp]=0;
		c[i][j+1]=0;
	}
	if(j>1 && a[i][j-1]==1 && c[i][j-1]==0){
		b[temp++]=3;
		c[i][j-1]=1;
		Try(i,j-1);
		b[--temp]=0;
		c[i][j-1]=0;
	}
	if(i>1 && a[i-1][j]==1 && c[i-1][j]==0){
		b[temp++]=4;
		c[i-1][j]=1;
		Try(i-1,j);
		b[--temp]=0;
		c[i-1][j]=0;
	}
	if(i==n && j==n){
		display();
		check++;
	}
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		c[1][1]=1;
		temp=1,check=0;
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				cin>>a[i][j];
		if(a[1][1]==0 && a[n][n]==0) ;
		else
			Try(1,1);
		if(!check) cout<<-1;
		cout<<endl;
	}
}

