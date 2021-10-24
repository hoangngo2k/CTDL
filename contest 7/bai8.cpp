#include<bits/stdc++.h>
using namespace std;
vector<char> a(1002);
string s;
string result()
{
    string b="";
    a.push_back(0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            if(a.back()==1)
                b+='-';
            if(a.back()==0)
                b+='+';
        }
        else if(s[i]=='-'){
            if(a.back()==1)
                b+='+';
            if(a.back()==0)
                b+='-';
        }
        else if(s[i]=='('){
            if(s[i-1]=='-'){
                if(a.back()==0) a.push_back(1);
                else a.push_back(0);
            }
            if(s[i+1]=='+'){
                a.push_back(a.back());
            }
        }
        else if(s[i]==')'){
            a.pop_back();
        }
        else{
            b+=s[i];
        }
    }
    return b;
}
main()
{
    int t;cin>>t;
    while(t--){
        cin>>s;
        cout<<result()<<endl;
    }
}