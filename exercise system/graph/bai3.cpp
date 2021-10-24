#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;
    vector<int> a[n];
    for(int i=0;i<n;i++)
        for(int j=1;j<=n;j++){
            int temp;cin>>temp;
            if(temp==1)
                a[i].push_back(j);
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i].size();j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
