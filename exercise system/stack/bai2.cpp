#include<bits/stdc++.h>
using namespace std;
main()
{
    vector<int> data;
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n;
        if(s=="PUSH"){
            cin>>n;
            data.push_back(n);
        }
        if(s=="POP" && !data.empty())
            data.pop_back();
        if(s=="PRINT"){
            if(data.empty()){
                cout<<"NONE";
            }
            else
                cout<<data.back();
            cout<<endl;
        }
    }
}
