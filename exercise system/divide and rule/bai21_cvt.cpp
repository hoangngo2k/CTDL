#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long mu(long long a,long long k)
{
    if(k==0) return 1;
    long long p=mu(a,k/2)%m;
    if(k%2==0) return p%m*p%m;
    return a%m*p%m*p%m;
}
main()
{
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<mu(a,b)<<endl;
    }
}
