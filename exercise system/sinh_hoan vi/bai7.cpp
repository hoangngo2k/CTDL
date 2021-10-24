#include<bits/stdc++.h>
using namespace std;
int check,k;
void to_analysis(int a[])
{
	int i,j,R,S,D;
	i=k;
	while(i>0 && a[i]==1)
		i--;
	if(i>0){
		a[i]=a[i]-1;
		D=k-i+1;
		R=D/a[i];
		S=D%a[i];
		k=i;
		if(R>0){
			for(int j=i+1;j<=i+R;j++)
				a[j]=a[i];
			k+=R;
		}
		if(S>0){
			k++;
			a[k]=S;
		}
	}
	else
		check=0;
}
int main()
{
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		k=1;
		a[k]=n;
		check=1;
		while(check){
			cout<<"(";
			for(int i=1;i<=k;i++){
				if(i<k)
					cout<<a[i]<<" ";
				else
				 cout<<a[i];
			}
			cout<<")"<<" ";
			to_analysis(a);
		}
		cout<<endl;
	}
}

