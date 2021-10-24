#include<bits/stdc++.h>
using namespace std;
string s;
void longest()
{
    vector<int> a;
    a.push_back(-1);
    int count =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')
            a.push_back(i);
        else{
            a.pop_back();
            if(a.empty())
                a.push_back(i);
            count=max(count,i-a.back());
        }
    }
    cout<<count;
}
int main()
{
    int t;cin>>t;
    while(t--){
        cin>>s;
        longest();
        cout<<endl;
    }
}