#include<bits/stdc++.h>
using namespace std;
long long bin(int n)
{
    long long sum=0,t=0;
    while(n>0){
        sum+=(n%2)*pow(10,t);
        t++;
        n/=2;
    }
    return sum;
}
main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cout<<bin(i)<<" ";
        cout<<endl;
    }
}
