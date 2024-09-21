#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>arr;
    int num;
    while(iss>>num){
        arr.push_back(num);
    }
    vector<int>ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
       bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
               flag=true;
               break;
            }
        }
        if(flag==false){
            ans.push_back(arr[i]);
        }
       
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}