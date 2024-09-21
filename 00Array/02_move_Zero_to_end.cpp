#include<bits/stdc++.h>
using namespace std;
vector<int> move_end_zero(vector<int>&arr){//Time cp= O(n^2)
    int l=arr.size();
    for(int i=0;i<l;i++){
        if(arr[i]==0){
            for(int j=i+1;j<l;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    return arr;
}

// O(n)
void Zero(vector<int>&arr){
    int n=arr.size();
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[c]);
            c++;
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>arr;
    int num;
    while(iss>>num){
        arr.push_back(num);
    }
    vector<int>res=move_end_zero(arr);
    Zero(arr);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}