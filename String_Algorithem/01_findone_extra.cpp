#include<iostream>
#include<string>
using namespace std;
int main(){
    int count[126]={0};
    string s1,s2;
    cin>>s1>>s2;
    for(char c:s1){
        count[(unsigned char)c]++;
    }
    for(char c:s2){
        count[(unsigned char)c]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]==1){
            cout<<char(i);
        }
    }
    return 0;
}