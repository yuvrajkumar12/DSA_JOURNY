#include<iostream>
using namespace std;
//optimize this code
//firstely we have find the gcd
//after a*b/gcd(a,b)
int gcd(int a,int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int LCM(int a,int b){
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<LCM(a,b);
    return 0;
}