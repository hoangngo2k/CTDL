#include<bits/stdc++.h>
using namespace std;
int dinh,canh;
int dem(vector<int> arr[]){
        vector<bool> vs; vs.resize(dinh);
        int res=0;
        for(int i=0;i<dinh;i++){
            if(!vs[i]){
                res++;
                vs[i]=true;
                stack<int> st;
                st.push(i);
                while(!st.empty()){
                    int temp=st.top(); st.pop();
                    for(int j=0;j<arr[temp].size();j++){
                        if(vs[arr[temp][j]]==false){
                            vs[arr[temp][j]]=true;
                            st.push(temp);
                            st.push(arr[temp][j]);
                        }
                    }
                }
            }
        }
        return res;
}

int dem2(vector<int> arr[],int dinhBoQua){
        vector<bool> vs; vs.resize(dinh);
        int res=0;
        for(int i=0;i<dinh;i++){
            if(i==dinhBoQua) continue;
            if(!vs[i]){
                res++;
                vs[i]=true;
                stack<int> st;
                st.push(i);
                while(!st.empty()){
                    int temp=st.top(); st.pop();
                    for(int j=0;j<arr[temp].size();j++){
                        if(arr[temp][j]!=dinhBoQua and vs[arr[temp][j]]==false){
                            vs[arr[temp][j]]=true;
                            st.push(temp);
                            st.push(arr[temp][j]);
                        }
                    }
                }
            }
        }
        return res;
}
main(){
    int t;cin>>t;
    while(t--){
         cin>>dinh>>canh;
        vector<int> arr[dinh];
        for(int i=0;i<canh;i++){
            int temp1,temp2; cin>>temp1>>temp2;
            arr[temp1-1].push_back(temp2-1);
            arr[temp2-1].push_back(temp1-1);
        }
        int soThanhPhanLienThong=dem(arr);
        for(int i=0;i<dinh;i++){
            if(dem2(arr,i)>soThanhPhanLienThong) cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
