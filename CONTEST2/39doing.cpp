#include <iostream>
using namespace std;
string s;
int n,k;
void dichphai(string b, int k)
{

	b[1]=s[k];
	for(int i=2;i<=k;i++)
		b[i]=s[i-1];
	for(int i=k;i<=k+k;i++)
		b[i]=s[k-i+1];
	if(n>k){
		dichphai(b,k+k);
		cout<<b[n];
	}
	else;
}
int main(){
    cin>>s>>n;	
	k=s.length();
    dichphai(s,k);
    return 0;
}
