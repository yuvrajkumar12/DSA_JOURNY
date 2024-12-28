#include<bits/stdc++.h>
using namespace std;
void wceling1(vector<int>&nums){//time complicity is o(n^2)
    int s=nums.size();
    for(int i=0;i<s;i++){
        int diff=INT_MAX;
        for(int j=i+1;j<s;j++){
            if(nums[j]>=nums[i]){
                diff=min(diff,nums[j]-nums[i]);
                cout<<diff<<endl;
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
void priorityceling(vector<int>&nums){//using set time complicity is O(nlogn)
    set<int>s;
    int n=nums.size();
    int res[n];
    for(int i=n-1;i>=0;i--){
        auto it=s.lower_bound(nums[i]);
        if(it==s.end()){
            res[i]=-1;
        }
        else{
            res[i]=*it;
        }
        s.insert(nums[i]);
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
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
    priorityceling(nums);
    return 0;
}