#include <bits/stdc++.h>
using namespace std;
string s;
bool check(){
    vector<char> stack;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[') 
            stack.push_back(s[i]);
        else{
            if(stack.empty()) return false;
            if(s[i]==')'&& stack.back()!='(') return false;
            if(s[i]=='}'&& stack.back()!='{') return false;
            if(s[i]==']'&& stack.back()!='[') return false;
            stack.pop_back();
        }

    }
    if(stack.empty()) return true;
    return false;
}

main(){
    long long t; cin>>t;
    while(t--){
       cin>>s;
       if(check()) cout<<"YES"; 
       else cout<<"NO";
       cout<<endl;
    }
}