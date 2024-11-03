#include<iostream>
#include<string>
#include<vector>
using namespace std;
string countSort(string s){
    vector<int>fre(26,0);
    for(int i=0;i<s.length();i++){
        int index=s[i]-'a';
        fre[index]++;
    }
    for(auto it:fre){
        cout<<it<<endl;
    }
    //create our sorted string
    int j=0;
    for(int i=0;i<26;i++){
        while(fre[i]--){
            s[j++]=i+'a';
        }
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<countSort(s) ;
    return 0;
}