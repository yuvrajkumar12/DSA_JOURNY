#include<iostream>
#include<vector>
using namespace std;
void Insertion_sort(vector<int>&arr){//timecomplicity O(n^2) in a place and Stable
    int s=arr.size();                 //best case O(n)
    for(int i=1;i<s;i++){
        int k=arr[i];
        int j=i-1;
        while(j>0 && arr[j]>=k){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;

    }

 }
int main(){
    int t;
    cin>>t;
    vector<int>arr;
    while(t--){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    Insertion_sort(arr);
    for(int it:arr){
        cout<<it<<"endl";
    }
    return 0;
}