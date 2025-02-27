#include<bits/stdc++.h>
using namespace std;
int power(int base, int dig){
    int result=1;
    while(dig--){
        result*=base;
    }
    return result;
}
bool Armstrong_Numbers(int n){
    int n1=n;
    int sum=0;
    int dig= (n==0)?1:log10(n)+1;
    while(n1>0){
        int temp=n1%10;
        sum+=power(temp,dig);
        n1/=10;
    }
    return sum==n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<(Armstrong_Numbers(n)?"true":"false")<<endl;
    }
    return 0;
}