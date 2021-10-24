#include<bits/stdc++.h>
using namespace std;

int to_num(string s1, string s2)
{
	int sum1=0,sum2=0;
	for(int i=s1.length()-1;i>=0;i--)
		if(s1[i]=='1')
			sum1+=pow(2,s1.length()-i-1);
	for(int i=s2.length()-1;i>=0;i--)
		if(s2[i]=='1')
			sum2+=pow(2,s2.length()-i-1);
	return sum1*sum2;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<to_num(s1,s2)<<endl;
	}
}

