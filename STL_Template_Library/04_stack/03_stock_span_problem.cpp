#include<iostream>
#include<stack>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
void stock_span(vector<int>&s) //time complicity O(n)
{
    stack<int>s1;
    s1.push(0);
    for(int i=0;i<s.size();i++){
        while(s1.empty()==false&&s[s1.top()]<=s[i]){
            s1.pop();
        }
        int span=(s1.empty()?(i+1):(i-s1.top()));
        cout<<span<<" ";
        s1.push(i);
    }
    cout<<endl;
}
void span(vector<int>&s){//time complicity o(n^2)
    for(int i=0;i<s.size();i++){
        int s1=1;
        for(int j=i-1;j>=0;j--){
            if(s[j]<=s[i]){
                s1++;
            }
            else{
                break;
            }
        }
        cout<<s1<<" ";
    }
}
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line); 
    vector<int>s; 
    int n;
    while (iss >> n) {
        s.push_back(n);
    }
    stock_span(s);
    span(s);
    return 0;
}
