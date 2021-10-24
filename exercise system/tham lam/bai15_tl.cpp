#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int N,S,M;
		cin>>N>>S>>M;
		int a=(S*M)/N;
		if(M>N || N*6<M*7 && S>6)
			cout<<-1;
		else{
			if((S*M)%N!=0)
				a++;
			cout<<a;
		}
		cout<<endl;
	}
}

