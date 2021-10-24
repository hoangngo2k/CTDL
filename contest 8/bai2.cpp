#include<bits/stdc++.h>
using namespace std;
queue<int> a;
string s;
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s =="PUSH"){
            int n;cin>>n;
            a.push(n);
        }
        if(s =="PRINTFRONT"){
            if(!a.empty()){
                cout<<a.front();
            }
            else cout<<"NONE";
        }
        if(s=="POP"){
            if(!a.empty())
                a.pop();
            else;
        }
        cout<<endl;
    }
}