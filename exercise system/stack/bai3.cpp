#include<bits/stdc++.h>
using namespace std;
void xxx(string s)
{
    vector<char> data;
    int i=0;
    while(i<s.size()){
        while(i<s.size() && s[i]!=' '){
            data.push_back(s[i]);
            i++;
        }
        while(!data.empty()){
            cout<<data.back();
            data.pop_back();
        }
        if(i<s.size())
            cout<<s[i++];
    }
}
main()
{
    int t;cin>>t;
    string s;
    getline(cin,s);
    while (t--)
    {
        getline(cin,s);
        xxx(s);
        cout<<endl;
    }
    
}
