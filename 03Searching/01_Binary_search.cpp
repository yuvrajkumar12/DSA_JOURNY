#include <iostream>
#include <vector>
using namespace std;
int Binarysearch(vector<int>& arr,int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid] < target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
};
int main(){
    vector<int>arr;
    int n,target;
    cout<<"Enter Size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"Enter your Target: ";
    cin>>target;
    int res=Binarysearch(arr,n,target);
    if(res!=-1){
        cout<<"Target is fount at index of: "<<res;
    }
    else{
        cout<<"Target is Not found: "<<res;
    }
   
    return 0;
}