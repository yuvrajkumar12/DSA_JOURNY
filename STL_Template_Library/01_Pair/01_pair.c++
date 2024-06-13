#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
void sortchar(int a[],char b[],int n){
    pair<int,char>pa[n];
    for(int i=0;i<n;i++){
        // pa[i]={a[i],b[i]};
        pa[i].first=a[i];
        pa[i].second=b[i];
    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++){
        cout<<"("<<pa[i].first<<" , "<<pa[i].second<<")"<<endl;
    }
}
int main(){
    int a[]={2,1,5,3,7};
    char b[]={'x','y','z','a','b'};
    int n=5;
    sortchar(a,b,n);
    return 0;
}