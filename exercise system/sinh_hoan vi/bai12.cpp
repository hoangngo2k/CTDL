#include<bits/stdc++.h>
using namespace std;
int a[100]={0},n,k,test;
bool bit()
{
	int count=0;
	for(int i=1;i<=n;i++)
		if(a[i]==1)
			count++;
	if(count==k)	return true;
	else 
		return false;
}
void graytobin()
{
	int i=n;
	while(i && a[i]){
		a[i]=0;
		i--;
	}
	if(i>0)	a[i]=1;
	else test=0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		test=1;
		while(test){
			if(bit()){
				for(int i=1;i<=n;i++)
					cout<<a[i];
				cout<<endl;
			}
			graytobin();
		}
	}
}

