#include<bits/stdc++.h>
using namespace std;
void count_greater_element(vector<int>&arr){//thime complicity o(n^2)
    vector<int>ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                c++;
            }
        }
        ans.push_back(c);
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}
void count_greater_element1(vector<int>arr){

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
    count_greater_element(arr);
    count_greater_element1(arr);//optimize this code
    return 0;
}