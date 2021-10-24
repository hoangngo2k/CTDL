#include<bits/stdc++.h>
using namespace std;
int a[1002][1002];
int v,e,s,t;
bool chuaxet[1002];
int truoc[1002];
void BFS(int u)
{
    queue<int> hangdoi;
    hangdoi.push(u);
    chuaxet[u]=false;
    while(!hangdoi.empty()){
        int c=hangdoi.front();
        hangdoi.pop();
        for(int t=1;t<=v;t++)
            if(a[c][t]==1 && chuaxet[t]){
                hangdoi.push(t);
                truoc[t]=c;
                chuaxet[t]=false;
            }
    }
}
void duong_di(int s, int t)
{
    if(truoc[t]!=0)
    {
        int b[1002];
        int u=truoc[t];
		int i=0;
        while(u!=s){
        	
            b[i++]=u;
            u=truoc[u];
        }
        cout<<s<<" ";
        for(int j=i-1;j>=0;j--)
        	cout<<b[j]<<" ";
        cout<<t<<endl;
    }
}
main()
{
    int c;cin>>c;
    while(c--){
        cin>>v>>e>>s>>t;
        for(int i=1;i<=e;i++){
            int temp1,temp2;
            cin>>temp1>>temp2;
            a[temp1][temp2]=1;
            a[temp2][temp1]=1;
        }
        for(int i=1;i<=v;i++){
        	chuaxet[i] = true;
            truoc[i]=0;
		}
        BFS(s);
        duong_di(s,t);
    }
}
