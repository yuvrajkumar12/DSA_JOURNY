#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[],int start1,int end1){
    if(start1>=end1){
        return;
    }

    swap(arr[start1],arr[end1]);
    return rotate(arr,start1+1,end1-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}