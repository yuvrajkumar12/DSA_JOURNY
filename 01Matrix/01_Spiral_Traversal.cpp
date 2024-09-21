#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>m(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    vector<int>ans;
    int top=0,right=n-1,bottom=n-1,left=0;
    while(top<=bottom&&left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(m[top][i]);//top row
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(m[i][right]);//right colum
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(m[bottom][i]);//bottom row reverse order
            }
            bottom--;
        }

        
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(m[i][left]); //left col reverse order
            }
            left++;
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}