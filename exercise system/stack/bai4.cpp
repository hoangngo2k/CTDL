#include<bits/stdc++.h>
using namespace std;
//2
//[()]{}{[()()]()}
//[(])
string s;
bool check()
{
    vector<char> app;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            app.push_back(s[i]);
        else{
            if(app.empty()) return false;
            if(s[i]==')' && app.back()!='(') return false;
            if(s[i]==']' && app.back()!='[') return false;
            if(s[i]=='}' && app.back()!='{') return false;
            app.pop_back();
        }
    }
    if(app.empty()) return true;
    return false;
}
main()
{
    int t;cin>>t;
    while(t--){
        cin>>s;
        check()?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}
