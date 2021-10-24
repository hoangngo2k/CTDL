#include <iostream>
#include <algorithm>
using namespace std;
int n,s,a[50],Ok=0,num=0;

void process(){
    int i=n;
    while(a[i]>s){
        i--;
    }
    if(i>0){
        s-=a[i]; num++;
        if(s!=0) process(); else return;
    }
}

main(){
    cin>>n>>s; 
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    process();
    cout<<num;

}