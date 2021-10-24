#include<bits/stdc++.h>
using namespace std;
string s;
void check()
{
    vector<int> st;
    st.push_back(0);
    string t;
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
    cout<<t<<endl;
}
main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        check();
    }
}
