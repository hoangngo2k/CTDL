#include<bits/stdc++.h>
using namespace std;
string s;
void solve()
{
    vector<char> a;
    int i=0;
    while(i<s.size()){
        while(i<s.size() && s[i]!=' '){
            a.push_back(s[i]);
            i++;
        }
        while(!a.empty()){
            cout<<a.back();
            a.pop_back();
        }
        if(i<s.size())
            cout<<s[i++];
    }
}
int main()
{
    int t;cin>>t;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        solve();
        cout<<endl;
    }
}