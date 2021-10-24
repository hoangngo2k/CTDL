#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,v,e;cin>>t;
    while(t--){
        cin>>v>>e;
        vector<int> a[v];
        for(int i=0;i<e;i++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            a[temp1-1].push_back(temp2);
        }
        for(int i=0;i<v;i++){
            cout<<i+1<<": ";
            for(int j=0;j<a[i].size();j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}
