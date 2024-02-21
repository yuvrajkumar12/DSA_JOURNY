#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int>& arr,int n,int target){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target){
            return i;
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
    int res=linearsearch(arr,n,target);
    if(res!=-1){
        cout<<"Target is fount at index of: "<<res;
    }
    else{
        cout<<"Target is Not found: "<<res;
    }
    
    return 0;
}