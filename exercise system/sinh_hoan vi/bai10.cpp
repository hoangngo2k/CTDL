#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=s.length();i>=0;i--){
            s[i]=(s[i]^s[i-1])==1?'1':'0';
        }
        cout<<s<<endl;
    }
}
