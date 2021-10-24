#include <iostream>
#include <algorithm>
using namespace std;
int n,sum,a[50],b[50],testCase,maxSize;

void result(int n ){
    for(int i=1;i<=n;i++) cout<<b[i]; cout<<endl;
}

void process(int i,int index,int temp){
    for(int j=i;j<=n;j++){
        b[index]=a[j]; temp+=b[index];
        if(temp==sum) result(index);
        else if(temp<sum) process(j, index+1, temp);
             else return;
    }
}

main(){
    int t;cin>>t;
    while(t--){
        testCase=0;
        cin>>n>>sum; for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        if(sum<a[1]);
        else{
            // maxSize=x/a[1];
            
            process(1,1,0);

        }
        if(!testCase) cout<<-1;
        cout<<endl;
    }
}
