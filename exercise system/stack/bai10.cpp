#include<bits/stdc++.h>
using namespace std;
string s,c;
bool check()
{
    string t;
    vector<int> st;
    st.push_back(0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            if(st.back()==1) t+='-';
            if(st.back()==0) t+='+';
        }
        else
            if(s[i]=='-'){
                if(st.back()==1) t+='+';
                if(st.back()==0) t+='-';
            }
            else
                if(s[i]=='('){
                    if(s[i-1]=='-'){
                        if(st.back()==0) st.push_back(1);
                        else
                            st.push_back(0);
                    }
                    if(s[i-1]=='+')
                        st.push_back(st.back());
                }
                else
                    if(s[i]==')')
                        st.pop_back();
                    else
                        t+=s[i];
    }
    for(int i=0;i<t.size();i++)
        if(t[i]!=c[i])
            return false;
    return true;
}
main()
{
    int t;cin>>t;
    while(t--){
        cin>>s>>c;
        check()?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}
