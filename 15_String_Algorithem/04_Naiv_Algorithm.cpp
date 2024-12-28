#include <bits/stdc++.h>
using namespace std;
void patSearchinng(string &txt,int n,string &pat, int m){
    for(int i=0;i<=(n-m);i++){
        int j;
        for(j=0;j<m;j++)
        if(pat[j]!=txt[i+j])
        break;
        
        if(j==m)
        cout<<i<<" "<<endl;
    }
}

void Inprove_naive_pattern_searching(string &txt, int n,  string &pat, int m){
    for(int i=0;i<=(n-m);){
        int j;
        for(j=0;j<m;j++)
        if(pat[j]!=txt[i+j])
        break;
        
        if(j==m)
        cout<<i<<" ";
        if(j==0){
        i++;}
        else{
        i=(i+j);}
    }
}
int main(){
    string s;
    string pat;
    cin>>s;
    cin>>pat;
    int n=s.length();
    int n1=pat.length();
    patSearchinng(s,n,pat,n1);
    cout<<"Improve pattern searching Algorithm"<<endl;
    Inprove_naive_pattern_searching(s,n,pat,n1);
    return 0;
}


