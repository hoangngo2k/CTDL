#include<bits/stdc++.h>
using namespace std;
int v,e,s;
int a[1002][1002];
bool chuaxet[1002];
void BFS(int u)
{
    queue<int> hangdoi;
    int t;
    hangdoi.push(u);
    chuaxet[u]=false;
    while (!hangdoi.empty())
    {
        t=hangdoi.front();
        hangdoi.pop();
        cout<<t<<" ";
        for(int i=1;i<=v;i++)
            if(a[t][i]==1 && chuaxet[i]){
                hangdoi.push(i);
                chuaxet[i]=false;
            }
    }
}
main()
{
    int t;cin>>t;
    while (t--)
    {
        cin>>v>>e>>s;
        for(int i=1;i<=e;i++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            a[temp1][temp2]=1;
            a[temp2][temp1]=1;
        }
        for(int i=1;i<=v;i++)
            chuaxet[i]=true;
        BFS(s);
    }
    
}
