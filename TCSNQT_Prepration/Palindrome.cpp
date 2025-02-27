#include<bits/stdc++.h>
using namespace std;
bool checkpolindrome(int n){
    int n1=n;
    int res=0;
    while(n1>0){
        int temp=n1%10;
        res=res*10+temp;
        n1/=10;
    }
    return res==n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(checkpolindrome(n)?"true":"false")<<endl;
    }
    return 0;
}