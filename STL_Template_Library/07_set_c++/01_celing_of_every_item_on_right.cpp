#include<bits/stdc++.h>
using namespace std;
void wceling1(vector<int>&nums){
    int s=nums.size();
    for(int i=0;i<s;i++){
        int diff=INT_MAX;
        for(int j=i+1;j<s;j++){
            if(nums[j]>=nums[i]){
                diff=min(diff,nums[j]-nums[i]);
            }
        }
        if(diff==INT_MAX){
            cout<<-1<<" ";
        }
        else{
            cout<<(nums[i]+diff)<<" ";
        }

    }
    cout<<endl;
}
int main(){
    string line;
    getline(cin,line);
    istringstream iss(line);
    vector<int>nums;
    int num;
    while(iss>>num){
        nums.push_back(num);
    }
    wceling1(nums);
    return 0;
}