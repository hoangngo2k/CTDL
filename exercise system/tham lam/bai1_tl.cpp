#include<bits/stdc++.h>
using namespace std;
int a[10]={1,2,5,10,20,50,100,200,500,1000},n,dem;
int calculator(int i)
{
	while(a[i]>n) i--;
	n-=a[i];
	dem++;
	if(!n) ;
	else calculator(i);
}
main()
{
	int t;cin>>t;
	while(t--){
		cin>>n;
		dem=0;
		calculator(9);
		cout<<dem<<endl;
	}
}
