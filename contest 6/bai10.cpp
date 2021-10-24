#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--){
		int n;string s ;cin>>n;int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=to_string(a[i]);
		}
    	int count[10] = {0};
    	char b[10];
   	 	int i;
    	for(i = 0; i < s.length(); ++i)
        	count[s[i] - '0']++;
    	int dem=0;
    	for(i = 0; i < 10; ++i)
        	if(count[i])
        	    b[dem++]=i+'0';
    	for(int i=0;i<dem;i++) cout<<b[i]<<" ";
    	cout<<endl;
	}
    return 0;
}
