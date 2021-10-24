#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;queue<int> a;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>k;
            if(k==1)
                cout<<a.size();
            if(k==2){
                if(a.empty())
                    cout<<"YES";
                else cout<<"NO";
            }
            if(k==3){
                int m;cin>>m;
                a.push(m);
            }
            if(k==4){
                if(!a.empty())
                    a.pop();
                else;
            }
            if(k==5){
                if(!a.empty()) cout<<a.front();
                else cout<<-1;
            }
            if(k==6){
                if(!a.empty()) cout<<a.back();
                else cout<<-1;
            }
            cout<<endl;
        }
    }
}
