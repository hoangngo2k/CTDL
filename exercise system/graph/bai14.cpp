#include<bits/stdc++.h>
using namespace std;
int a[1002][1002],truoc[1002];
int N,M,Q,x,y;
bool chuaxet[1002];
void DFS(int u)
{
    stack<int> nx;
    nx.push(u);
    chuaxet[u]=false;
    while(!nx.empty()){
        int c=nx.top();
        nx.pop();
        for(int t=1;t<=N;t++)
            if(a[c][t]==1 && chuaxet[t]){
                nx.push(c);
                nx.push(t);
                truoc[t]=c;
                chuaxet[t]=false;
                break;
            }
    }
}
void check(int s,int t)
{
    if(truoc[t]==0)
        cout<<"NO";
    else
    {
        cout<<"YES";
    }
    cout<<endl;
}
main()
{
    int t;cin>>t;
    while(t--){
        cin>>N>>M;
        for(int i=1;i<=M;i++){
            int e,v;cin>>e>>v;
            a[e][v]=1;
            a[v][e]=1;
        }
        for(int i=1;i<=M;i++){
            chuaxet[i]=true;
            truoc[i]=0;
        }
        cin>>Q;
        while(Q--){
            cin>>x>>y;
            DFS(x);
            check(x,y);
        }
    }
}