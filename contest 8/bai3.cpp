#include<bits/stdc++.h>
using namespace std;
deque<int> a;
string s;
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="PUSHFRONT"){
            int n;cin>>n;
            a.push_front(n);
        }
        if(s=="PRINTFRONT"){
            if(!a.empty()) cout<<a.front();
            else cout<<"NONE";
        }
        if(s=="POPFRONT"){
            if(!a.empty())
                a.pop_front();
            else;
        }
        if(s=="PUSHBACK"){
            int n;cin>>n;
            a.push_back(n);
        }
        if(s=="PRINTBACK"){
            if(!a.empty()) cout<<a.back();
            else cout<<"NONE";
        }
        if(s=="POPBACK"){
            if(!a.empty())
                a.pop_back();
            else;
        }
        cout<<endl;
    }
}