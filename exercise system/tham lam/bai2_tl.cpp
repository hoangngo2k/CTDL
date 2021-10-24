#include<bits/stdc++.h>
using namespace std;
int tongLN(string A, string B)
{
	for(int i=0;i<A.length();i++)
		if(A[i]=='5')	A[i]='6';
	for(int i=0;i<B.length();i++)
		if(B[i]=='5')	B[i]='6';
	return stoi(A)+stoi(B);
}
int tongNN(string A, string B)
{
	for(int i=0;i<A.length();i++)
		if(A[i]=='6')	A[i]='5';
	for(int i=0;i<B.length();i++)
		if(B[i]=='6')	B[i]='5';
	return stoi(A)+stoi(B);
}
int main()
{
	string A,B;
	cin>>A>>B;
	cout<<tongNN(A,B)<<" "<<tongLN(A,B);
}

