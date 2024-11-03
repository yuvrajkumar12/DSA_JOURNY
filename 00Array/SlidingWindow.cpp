#include <bits/stdc++.h>
using namespace std;
int slidingWindow(vector<int>&arr,int n, int k){
    int windowsum=0;
    for(int i=0;i<k;i++){
        windowsum+=arr[i];
    }
    int maxsum=windowsum;
    for(int j=k;j<n;j++){
        windowsum+=(arr[j]-arr[j-k]);
        maxsum=max(maxsum,windowsum);
    }
    return maxsum;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<slidingWindow(arr,n,k)<<endl;
    return 0;
}