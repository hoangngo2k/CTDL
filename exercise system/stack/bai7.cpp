#include<bits/stdc++.h>
using namespace std;
//4
//))((
//((((
//(((())
//)(())(((
string s;
int check()
{
    vector<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            st.push_back('(');
        if(s[i]==')'){
            if(st.empty() || st.back()==')')
                st.push_back(')');
            if(st.back()=='(')
                st.pop_back();
        }
    }
    for(int i=0;i<st.size();i++)
    	cout<<st[i];
    int so1=0;
    for(int i=0;i<st.size();i++){
        if(st[i]=='(') break;
        else so1++;
    }
    if(so1%2==0)
        return st.size()/2;
    else
    {
        return st.size()/2+1;
    }
    
}
main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<check()<<endl;
    }
}
