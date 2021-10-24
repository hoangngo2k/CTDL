#include <iostream>
#include <algorithm>
using namespace std;
int n,x,a[50],b[50],testCase,maxSize;

void output(int i){
    cout<<"[";
    for(int j=1;j<=i;j++) {cout<<a[b[j]]; if(j!=i) cout<<" ";}
    cout<<"] ";
}

bool checkSum(int i){
    int temp=0;
    for(int j=1;j<=i;j++){
        temp+=a[b[j]];
    }
    return temp==x? true:false;
}

void backTrack(int i,int l){
    for(int j=l;j<=n;j++){
        b[i]=j; l=j;
        if(checkSum(i)){
            output(i); testCase++; return;
        }
        if(i!=maxSize) backTrack(i+1,l);
    }
}

main(){
    int t;cin>>t;
    while(t--){
        testCase=0;
        cin>>n>>x; for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        if(x<a[1]);
        else{
            maxSize=x/a[1];
            backTrack(1,1);

        }
        if(!testCase) cout<<-1;
        cout<<endl;
    }
}
