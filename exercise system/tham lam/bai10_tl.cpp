#include<bits/stdc++.h>
using namespace std;
int a[1000002],n;
void noiday()
{
    priority_queue<int,vector<int>,greater<int>> b(a,a+n);
    int sum=0;
    while(b.size()>1){
        int st=b.top();b.pop();
        int nd=b.top();b.pop();
        sum+=st+nd;
        b.push(st+nd);
    }
    cout<<sum<<endl;
}
main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        noiday();
    }
}
