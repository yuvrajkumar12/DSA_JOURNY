#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,int>> Keeping(int arr[],int s){
    vector<pair<int,int>>ans;
    for(int i=0;i<s;i++){
        ans.push_back({arr[i],i});
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int arr[]={20,40,30,10};
    int s=4;
    vector<pair<int,int>>res=Keeping(arr,s);
    for(auto it:res){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}