#include<bits/stdc++.h>
using namespace std;
char s[17];
int stop;
void to_list()
{
	int i=s.size();
	while(s[i]==66){
		s[i]=65;
		i--;
	}
	if(i)	s[i]=66;
	else	stop=0;
}
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<s.size();i++)
		s[i]=65;
	stop=1;
	while(stop){
		for(int i=0;i<n;i++)
			if(s[i]==65 && s[i+1]==65 && s[i+2]==65)
				cout<<s[i];
		cout<<endl;
		to_list();
	}
}

