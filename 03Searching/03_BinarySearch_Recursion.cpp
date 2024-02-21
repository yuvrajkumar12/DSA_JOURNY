#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int>& arr,int low,int high,int target)
{
    if(low>high) 
        return -1;
    int mid=low+(high-low)/2;
    if(arr[mid]==target)
        return mid;
    else if(arr[mid]>target)
        return linearsearch(arr,low,mid-1,target);
    else
        return linearsearch(arr,mid+1,high,target);

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
    int res=linearsearch(arr,0,n-1,target);
    if(res!=-1){
        cout<<"Target is fount at index of: "<<res;
    }
    else{
        cout<<"Target is Not found: "<<res;
    }
    
    return 0;
}