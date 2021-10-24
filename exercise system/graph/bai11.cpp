#include<bits/stdc++.h>
using namespace std;
vector<long long> a[1002];
long long v,e,s,t;
bool chuaxet[1002];
long long truoc[1002];
void DFS(long long u)
{
    stack<int> nganxep;
    nganxep.push(u);
    chuaxet[u]=false;
    while(!nganxep.empty()){
        int c=nganxep.top();
        nganxep.pop();
        for(int t=0;t<a[c].size();t++)
            if(chuaxet[a[c][t]]){
                nganxep.push(c);
                nganxep.push(a[c][t]);
                truoc[a[c][t]]=c;
                chuaxet[a[c][t]]=false;
                break;
            }
    }
}
void duong_di(long long s, long long t)
{
    if(truoc[t]!=0)
    {
        vector<long long> b;
        long long u=truoc[t];
        while(u!=s){
        	
            b.push_back(u);
            u=truoc[u];
        }
        cout<<s<<" ";
        for(int j=b.size()-1;j>=0;j--)
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
            long long temp1,temp2;
            cin>>temp1>>temp2;
            a[temp1].push_back(temp2);
        }
        for(int i=1;i<=v;i++){
        	chuaxet[i] = true;
            truoc[i]=0;
		}
        DFS(s);
        duong_di(s,t);
    }
}
