#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include<queue>
#include<stack>
#include <algorithm>
using namespace std;
void kr(queue<int>&q ,int k){
    
    if(q.empty()==true||k>q.size()||k<=0)
        return;
    stack<int>s1;
    for(int i=0;i<k;i++){
        s1.push(q.front());
        q.pop();
    }
    while(s1.empty()==false){
        q.push(s1.top());
        s1.pop();
    }
    for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line); 
    queue<int>s;
    int num;
    while(iss>>num){
        s.push(num);
    }
    int k;
    cin>>k;
    kr(s,k);
    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
    
}
