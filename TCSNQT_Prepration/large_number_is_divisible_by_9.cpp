#include<bits/stdc++.h>
using namespace std;
bool check_9(int n){
    int n1=n;
    int ans=0;
    while(n1>0){
        ans+=n1%10;
        n1/=10;
    }
    return (ans%9==0);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(check_9(n)?"true":"false")<<endl;
    }
    return 0;
}