#include <bits/stdc++.h>
using namespace std;

int vertice,edge;

bool bfs(vector<int> arr[],int start, int end){
    queue<int> q; q.push(start-1);
    vector<int> vs; vs.resize(vertice);  vs[start-1]=1;
    while(!q.empty()){
        int f=q.front();
        for(int i=0;i<arr[f].size();i++){
            if(vs[arr[f][i]]!=1){
                if(arr[f][i]==end-1) return true;
                vs[arr[f][i]]=1;
                q.push(arr[f][i]);
            }
        }
        q.pop();
    }
    return false;
}

main(){

    int t;cin>>t;
    while(t--){
        cin>>vertice>>edge;
        vector<int> arr[vertice];
        for(int i=0;i<edge;i++){
            int edge1,edge2; cin>>edge1>>edge2;
            arr[edge1-1].push_back(edge2-1);
            arr[edge2-1].push_back(edge1-1);

        }
        int Q;cin>>Q;
        while(Q--){
            int start,end;
            cin>>start>>end;
            if(bfs(arr,start,end)) cout<<"YES"; else cout<<"NO";
            cout<<endl;
        }
    }
}
