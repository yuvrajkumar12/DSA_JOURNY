#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;
void reverse1(string s){
    stack<char>s1;
    for(int i=0;i<s.size();i++){
        s1.push(s[i]);
    }
    for(int i=0;i<s.size();i++){
        s[i]=s1.top();
        s1.pop();
    }
    cout<<s;
}
int main(){
    string s;
    cin>>s;
    reverse1(s);
    return 0;
}
