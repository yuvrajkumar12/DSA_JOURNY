#include<iostream>
using namespace std;
void buble_sort(int arr[],int n){//time complicity O(n^2)
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void op_bs(int arr[],int n){
    for(int i=0;i<n;i++){
        bool swape=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swape=true;
            }
        }
        if(swape==false){
            break;
        }
    }
}
int main(){
    cout<<"Enter  Size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    buble_sort(arr,n);
    cout<<"Bubble sort"<<endl;
    for(int &it:arr){
        cout<<it<<" ";
    }
    op_bs(arr,n);
    cout<<"optimize this code: "<<endl;
    for(int &it:arr){
        cout<<it<<" ";
    }
    return 0;
}