#include<bits/stdc++.h>
using namespace std;
int a[1002][1002];
int v,e,s;
bool chuaxet[1002];
void DFS(int u)
{
    stack<int> nganxep;
    nganxep.push(u);
    cout<<u<<" ";
    chuaxet[u]=false;
    while(!nganxep.empty()){
        u=nganxep.top();
        nganxep.pop();
        for(int t=1;t<=v;t++)
            if(a[u][t]==1 && chuaxet[t]){
                nganxep.push(u);
                nganxep.push(t);
                cout<<t<<" ";
                chuaxet[t]=false;
                break;
            }
    }
}
main()
{
    int t;cin>>t;
    while(t--){
        cin>>v>>e>>s;
        for(int i=1;i<=e;i++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            a[temp1][temp2]=1;
            a[temp2][temp1]=1;
        }
        for(int i=1;i<=v;i++){
        	chuaxet[i] = true;
		}
        DFS(s);
        cout<<endl;
    }
}
