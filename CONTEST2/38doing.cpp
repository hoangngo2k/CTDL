#include <iostream>
using namespace std;
long long result;

long long soUoc(long long k){
    int count=2;
    for(int i=2;i<k;i++) if(k%i==0) count++;
    return count;
}

main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==1)  result=1;
        if(n==2)  result=2;
        if(n>2){
            long long k=n;
            while(++k){
                if(soUoc(k)==n) {result=k; break;}
            }
        }
        cout<<result<<endl;
    }
}