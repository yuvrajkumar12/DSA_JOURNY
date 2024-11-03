#include <bits/stdc++.h>
using namespace std;
void Naiv_Alg(string s,int n, string s1,int n1){
    for(int i=0;i<=n-n1;){
        int j=0;
        for(j=0;j<n1;j++){
            if(s[i+j]!=s1[j]){
                break;
            }
        }
        //pattern was found
        if(j==n1){
            cout<<i<<" "; //starting index match 
            i+=n1;
        }else{
            i++;// move thee next character in the string
        }
    }
}
int main(){
    string s;
    string pat;
    cin>>s;
    cin>>pat;
    int n=s.length();
    int n1=pat.length();
    Naiv_Alg(s,n,pat,n1);
    return 0;
}