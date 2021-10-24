#include<bits/stdc++.h>
using namespace std;
// 3
// ((()
// )()())
// ()(()))))
string s;

void check()
{
	vector<int> Stack;
    int Max=0;
    Stack.push_back(-1);
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            Stack.push_back(i);
        else{
            Stack.pop_back();
            if(Stack.empty())  Stack.push_back(i);
            Max=max(Max,i-Stack.back()); 
        }
	}
    cout<<Max<<endl;
	
}
main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        check();
    }
}
