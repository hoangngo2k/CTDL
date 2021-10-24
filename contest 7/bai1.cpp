#include<bits/stdc++.h>
using namespace std;
vector<int> a;
string s;
main()
{
    while(true){
        cin>>s;
        int n;
        if(s=="push"){
            cin>>n;
            a.push_back(n);
        }
        if(s=="pop" && !a.empty())
            a.pop_back();
        if(s=="show"){
            if(!a.empty())
                for(int i=0;i<a.size();i++)
                    cout<<a[i]<<" ";
            else{ cout<<"empty"; break;}
            cout<<endl;
        }
    }
}