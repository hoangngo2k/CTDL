#include<bits/stdc++.h>
using namespace std;
string s;
bool result()
{
    int count1=0,count2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' && s[i+2]==')')
            return true;
        if(s[i]=='(') count1++;
        if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
            count2++;
    }
    return count1>count2;
}
main()
{
    int t;cin>>t;
    while(t--){
        cin>>s;
        if(result())
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
}