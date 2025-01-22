#include<iostream>
using namespace std;
//To Find GCD 
int gcd(int a, int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0&&b%res==0){
            break;
        }
        res--;
    }
    return res;
}
// find HCF Using Eucliden Algorithem
int Hcf(int a,int b){ 
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}
//Using Recursion to find the HCF
int HCF(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return HCF(b,a%b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    cout<<Hcf(a,b);
    cout<<HCF(a,b);
    return 0;
}