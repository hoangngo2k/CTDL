#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--){
        int test=0;
        int n;cin>>n;
        int k,dead[n],profit[n];
        for(int i=0;i<n;i++)
            cin>>k>>dead[i]>>profit[i];
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(profit[i]<profit[j]){
                    swap(profit[i],profit[j]);
                    swap(dead[i],dead[j]);
                }
        int sum=0;
        bool vscode[n]={false};
        for(int i=0;i<n;i++)
            for(int j=min(n,dead[i])-1;j>=0;j--)
                if(!vscode[j]){
                    sum+=profit[i];
                    vscode[j]=true;
                    test++;
                    break;
                }
        cout<<test<<" "<<sum<<endl;
    }
}