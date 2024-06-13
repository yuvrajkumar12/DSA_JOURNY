#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
list<int>l;
void insert(int x){
    l.push_back(x);
}
void print(){
    for(int &it:l){
        cout<<it<<" ";//10 12 13 14 15  
    }
    cout<<endl;
}
void replace(int x,vector<int>&seq ){
    auto it=find(l.begin(),l.end(),x);
    if(it==l.end())
        return;
    it=l.erase(it);//10 12 13 14 15  
    l.insert(it,seq.begin(),seq.end());//20 40 50 12 13 14 15
    
}

int main(){
    insert(10);
    insert(12);
    insert(13);
    insert(14);
    insert(15);
    print();//10 12 13 14 15  
    vector<int>seq={20,40,50};
    replace(10,seq);
    print();//20 40 50 12 13 14 15
    return 0;
}