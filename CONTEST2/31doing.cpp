#include <iostream>
#include <string>
using namespace std;
int k,m,n; char word[50][50]; string s[200]; int OK; int mark[50][50];
// D L R U

void findWord(int i, int j, string s, int index){
    //U
    if(index<s.length()&&i>1&&word[i-1][j]==s[index]&&!mark[i-1][j]){
        index++; mark[i-1][j]=1; findWord(i-1,j,s,index);
        mark[i-1][j]=0; index--;
    }

    //UR
    if(index<s.length()&&i>1&&j<n&&word[i-1][j+1]==s[index]&&!mark[i-1][j+1]){
        index++; mark[i-1][j+1]=1; findWord(i-1,j+1,s,index);
        mark[i-1][j+1]=0; index--;
    }

    //R
    if(index<s.length()&&j<n&&word[i][j+1]==s[index]&&!mark[i][j+1]){
        index++; mark[i][j+1]=1; findWord(i,j+1,s,index);
        mark[i][j+1]=0; index--;
    }

    //RD
    if(index<s.length()&&i<m&&j<n&&word[i+1][j+1]==s[index]&&!mark[i+1][j+1]){
        index++; mark[i+1][j+1]=1; findWord(i+1,j+1,s,index);
        mark[i+1][j+1]=0; index--;
    }

    //D
    if(index<s.length()&&i<m&&word[i+1][j]==s[index]&&!mark[i+1][j]){
        index++; mark[i+1][j]=1; findWord(i+1,j,s,index);
        mark[i+1][j]=0; index--;
    }

    //DL
    if(index<s.length()&&i<m&&j>1&&word[i+1][j-1]==s[index]&&!mark[i+1][j-1]){
        index++; mark[i+1][j-1]=1; findWord(i+1,j-1,s,index);
        mark[i+1][j-1]=0; index--;
    }

    //L
    if(index<s.length()&&j>1&&word[i][j-1]==s[index]&&!mark[i][j-1]){
        index++; mark[i][j-1]=1; findWord(i,j-1,s,index);
        mark[i][j-1]=0; index--;
    }

    //LU
    if(index<s.length()&&i>1&&j>1&&word[i-1][j-1]==s[index]&&!mark[i-1][j-1]){
        index++; mark[i-1][j-1]=1; findWord(i-1,j-1,s,index);
        mark[i-1][j-1]=0; index--;
    }

    if(index==s.length()) OK=1;
//    else OK=0;
}

//bool findLetter(string s){
//    for(int i=1;i<=m;i++){
//        for(int j=1;j<=n;j++){
//             if(word[i][j]==s[0]){
//             	if(s.length()==1) return true;
//             	else{
//	            	mark[i][j]=1;
//	                findWord(i,j,s,1);
//	                if(OK==1) 
//						return true;
//					mark[i][j]=0;	
//				 }
//            }
//        }
//    }
//    return false;
//}


//7 3 3
//G I Z U E K GEEKS
//G I Z
//U E K
//Q S E

void process(){
	int testCase=0;
//    for(int i=1;i<=k;i++){
//    	OK=0;
//        if(findLetter(s[i])) {
//			cout<<s[i]<<" "; 
//        	testCase++;
//		}
//    }
//    if(!testCase) cout<<-1;
//    cout<<endl;

	

	int markS[k+1]={0};
	for(int i=1;i<k;i++){
		for(int j=i+1;j<=k;j++)
			if(s[i]==s[j])
			 markS[j]=1;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			for(int l=1;l<=k;l++)
				if(markS[l]==0&&word[i][j]==s[l][0]){
					if(s[l].length()==1) {
						cout<<s[l]<<" ";	
						testCase++;
						markS[l]=1;
					}else{
						OK=0;
						mark[i][j]=1;
						findWord(i,j,s[l],1);
						if(OK){
							cout<<s[l]<<" ";
							testCase++;
							markS[l]=1;
						}
						mark[i][j]=1;
					}
				}
		}
	}
	
	if(!testCase) cout<<-1;
	cout<<endl;
}

main(){
    int t; cin>>t;
    while(t--){
        cin>>k>>m>>n;
        for(int i=1;i<=k;i++) cin>>s[i];
        for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) { mark[i][j]=0; cin>>word[i][j];}
        process();

    }
}
