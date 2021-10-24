#include<bits/stdc++.h>
using namespace std;
int min1(int a[], int n)
{
    int x=a[1];
    for(int i=1;i<=n;i++)
        if(x>a[i]) 
            x=a[i];
    return x;
}
int min2(int a[], int n)
{
    int x=min1(a,n);
    for(int i=1;i<=n;i++)
        if(a[i]==x){
            a[i]=a[i+1]; 
            n=n-1;
        }
    int y=a[1];
    for(int i=1;i<=n-1;i++)
        if(y>a[i])
            y=a[i];
    return y;
}
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],check=0;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<n;i++)
            if(a[i]==a[i+1])
                check=1;
        if(check)   cout<<-1;
        else
            cout<<min1(a,n)<<" "<<min2(a,n)<<endl;
    }
}