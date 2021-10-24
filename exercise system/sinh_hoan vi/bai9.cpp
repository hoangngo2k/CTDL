#include<bits/stdc++.h>
using namespace std;
int n,t,gray[100],stop,binary[100];
void bin()
{
	int i=n;
	while(binary[i]==1){
		binary[i]=0;
		i--;
	}
	if(i!=0) binary[i]=1;
//	else stop=0;
}
void bintogray()
{
	binary[0]=0;
	for(int i=1;i<=n;i++)
		gray[i]=binary[i]^binary[i-1];
}
int main()
{
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			gray[i]=0;
		
		bin();
		bintogray();
		for(int i=1;i<=n;i++)
			cout<<gray[i];
		cout<<endl;
	}
		
}
