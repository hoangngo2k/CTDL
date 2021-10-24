#include<bits/stdc++.h>
using namespace std;
int canh, dinh;

main(){
    int t;cin>>t;
    while(t--){
        cin>>dinh>>canh;
		vector<int> arr[canh];
        for(int i=0;i<canh;i++){
            int temp1,temp2; cin>>temp1>>temp2;

            arr[temp1-1].push_back(temp2);
            arr[temp2-1].push_back(temp1);
        }
        for(int i=0;i<dinh;i++){
            cout<<i+1<<": ";
            for(int j=0;j<arr[i].size();j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;   
        }
    }
}
