#include<bits/stdc++.h>
using namespace std;
//3
//((a+b))
//(a+(b)/c)
//(a+b*(c-d))
bool xxx(string s)
{
    int so1=0,so2=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('&&s[i+2]==')') return true;
        if(s[i]=='(') so1++;
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') so2++;  
    }
	return so1>so2;
}
main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        if(xxx(s)) 
			cout<<"YES";
        else
        	cout<<"NO";
        cout<<endl;
    }
}
