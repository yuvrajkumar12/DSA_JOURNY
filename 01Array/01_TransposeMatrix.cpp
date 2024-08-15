#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> vcs(n,vector<int>(n,0));
    vector<vector<int>>ans(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            vcs[i][j]=t;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vcs[i][j]<<" ";
        }
        cout<<endl;
    }
    //transpose matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=vcs[j][i];
        }
    }

    cout<<"transpose matrix "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}