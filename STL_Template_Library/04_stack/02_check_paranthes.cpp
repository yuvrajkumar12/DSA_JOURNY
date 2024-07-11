#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool matching(char a,char b){
    return ((a=='('&& b==')')||(a=='['&& b==']')||(a=='{'&& b=='}'));
}
bool check(string s){
    int n=s.size();
    stack<char>s1;
    for(int i=0;i<n;i++){
        if(s[i]=='{'||s[i]=='['||s[i]=='('){
            s1.push(s[i]);
        }
        else{
            if(s1.empty()==true){
                return false;
            }
            else if(matching(s1.top(),s[i])==false){
                return false;
            }
            else{
                s1.pop();
            }
        }
    }
    return s1.empty();
}
int main(){
    string s;
    cin>>s;
    cout<<check(s);
    return 0;
}