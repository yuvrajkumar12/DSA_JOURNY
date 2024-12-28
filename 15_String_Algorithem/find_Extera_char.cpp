#include<bits/stdc++.h>
using namespace std;
char findextra(string str,string str1){
    int arr[26]={0};
    for(int i=0;i<str.length();i++){
        arr[str[i]-'a']++;
    }
    for(int i=0;i<str1.length();i++){
        arr[str1[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==-1)
            return 'a'+i;
        
    }
    return '\0';
}
int main(){
    string str="abcd";
    string str1="cdabe";
    cout<<findextra(str,str1);
   
}