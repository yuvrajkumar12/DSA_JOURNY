#include <bits/stdc++.h>
using namespace std;
string revers(string s,int n){
    int start=0;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            reverse(s.begin()+start,s.begin()+i);
            start=i+1;
        }
    }
    reverse(s.begin()+start,s.end());
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    cout<<revers(s,n);
    return 0;
}