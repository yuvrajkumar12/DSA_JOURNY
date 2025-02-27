#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n<=0)
        return 0;
    int fibo[n+1];
    fibo[0]=0,fibo[1]=1;
    int sum=fibo[0]+fibo[1];
    for(int i=2;i<=n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
        sum+=fibo[i];
    }
    return sum;
}
int main(){
    // vectro<int>arr;
    // string input;
    // getline(cin,input);
    // stringstream ss(input);
    // char c;
    // while(ss>>c){
    //     if(isalpha(c)){
    //         string element;
    //         ss>>element;
    //         arr.push_back(element);
    //     }
    // }
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}