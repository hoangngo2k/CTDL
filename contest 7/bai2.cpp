#include<bits/stdc++.h>
using namespace std;
vector<long long> a;
string s;
main()
{
    long long n,t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            cin>>n;
            a.push_back(n);;
        }
        if(s=="POP" && !a.empty())
            a.pop_back();
        if(s=="PRINT"){
            if(!a.empty())
                cout<<a.back()<<" ";
            else cout<<"NONE";
            cout<<endl;
        }
    }
}