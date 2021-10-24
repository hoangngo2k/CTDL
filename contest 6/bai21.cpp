#include<bits/stdc++.h>
using namespace std;
long long len,a0[1000005];

struct arr{
    long long value,freq;
};
arr a[1000005];
bool compare(arr x,arr y){
    return x.freq>y.freq;
}
void solve(){
    a[0].value=a0[0]; a[0].freq=1;
    long long indexA=0;
    for(long long i=1;i<len;i++){
        if(a0[i]==a0[i-1]){
            a[indexA].freq++;
        }else{
            indexA++;
            a[indexA].value=a0[i]; a[indexA].freq=1;
        }
    }
    stable_sort(a,a+indexA+1,compare);
    for(int i=0;i<=indexA;i++){
        for(int j=1;j<=a[i].freq;++j){
            cout<<a[i].value<<" ";
        }
    }
}
int main(){
    long long t; cin>>t;
    while(t--){
        cin>>len; for(long long i=0;i<len;i++) cin>>a0[i];
        sort(a0,a0+len);
        solve();
		cout<<endl;
    }
}