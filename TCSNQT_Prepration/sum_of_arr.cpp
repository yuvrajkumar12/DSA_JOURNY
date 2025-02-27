#include<bits/stdc++.h>
using namespace std;
int arrsum(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans+=arr[i];
    }
    return ans;
}
int main(){
    vector<int>arr;
    string input;
    getline(cin,input);
    stringstream ss(input);
    int num;
    while(ss>>num){
        arr.push_back(num);
    }
    int ans=arrsum(arr);
    cout<<ans;
    return 0;

}