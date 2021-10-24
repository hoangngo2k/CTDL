#include<bits/stdc++.h>
using namespace std;
string tobin(string gray)
{
	string binary;
	binary+=gray[0]==1?'1':'0';
	for(int i=1;i<gray.length();i++)
		binary+=gray[i]==binary[i-1]?'0':'1';
	return binary;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string gray;
		cin>>gray;
		cout<<tobin(gray)<<endl;
	}	
}
