#include<bits/stdc++.h>
using namespace std;
int main(){//Sieve of Erotosthens Algorithem
    int n;
    cin>>n;
    vector<bool>isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    for(int j=2;j<=n;j++){
        if(isPrime[j]){
            cout<<j<<" ";
        }
    }
    return 0;
}
