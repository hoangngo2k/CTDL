#include <bits/stdc++.h>
using namespace std;
main(){
    vector <int> data;
    while (true)
    {
        string s;int n;
        cin>>s;
        if(s=="push"){
            cin>>n;
            data.push_back(n);
        }
        if(s=="pop" && !data.empty())
            data.pop_back();
        if(s=="show"){
            if(data.empty()){
                cout<<"empty";break;
            }
            else
            {
                for(int i=0;i<data.size();i++)
                    cout<<data[i]<<" ";
            }
            cout<<endl;
        }
    }
    
}
